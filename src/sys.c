/*
    hc12mem - HC12 memory reader & writer
    sys.c: operating system interface routines
    $Id$

    Copyright (C) 2005 Michal Konieczny <mk@cml.mfk.net.pl>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "sys.h"

#if SYS_TYPE_UNIX
#  include <sys/time.h>
#endif

#if SYS_TYPE_WIN32
#  include <sys/types.h>
#  include <sys/timeb.h>
#endif


/*
 *  delay - sleep for given time
 *
 *  in:
 *    ms - delay time, milliseconds
 *  out:
 *    void
 */

void sys_delay(unsigned long ms)
{
#if SYS_TYPE_UNIX
	struct timeval t;
	fd_set rd, wr, ex;
	int s;

	t.tv_sec = (long)(ms / 1000);
	t.tv_usec = (long)((ms % 1000) * 1000);

	FD_ZERO(&rd);
	FD_ZERO(&wr);
	FD_ZERO(&ex);

	do
		s = select(0, &rd, &wr, &ex, &t);
	while (s == -1 && errno == EINTR);
#endif

#if SYS_TYPE_WIN32
	Sleep(ms);
#endif
}


/*
 *  get current time in milliseconds
 *
 *  in:
 *    void
 *  out:
 *    millisecond counter
 */

unsigned long sys_get_ms(void)
{
#if SYS_TYPE_UNIX
	struct timeval t;

	gettimeofday(&t, NULL);
	return (unsigned long)(t.tv_sec * 1000) +
		(unsigned long)(t.tv_usec / 1000);
#endif

#if SYS_TYPE_WIN32
	struct _timeb ft;

	_ftime(&ft);
	return (unsigned long)ft.time * 1000UL +
	       (unsigned long)ft.millitm;
 #endif
}


#if SYS_TYPE_WIN32

int access(const char *path, int mode)
{
	DWORD attr = GetFileAttributes(path);
	if (attr == (DWORD)0xffffffff)
		return -1;
	return 0;
}

#endif


/*
 *  strlcpy() routine - string copying with size limit
 *
 *  in:
 *    dst - destination buffer
 *    src - source buffer
 *    destination buffer size
 *  out:
 *    number of bytes copied
 */

#if !HAVE_STRLCPY

size_t strlcpy(char *dst, const char *src, size_t dst_size)
{
	size_t src_len, n;

	src_len = strlen(src);
	-- dst_size;
	n = (src_len > dst_size ? dst_size : src_len);
	if (n != 0)
		memcpy(dst, src, n);
	dst[n] = '\0';
	return src_len;
}

#endif


#if SYS_TYPE_WIN32

int vsnprintf(char *str, size_t n, const char *format, va_list list)
{
	int ret;

	ret = _vsnprintf(str, n - 1, format, list);
	if (ret < 0)
	{
		str[n - 1] = '\0';
		return ret;
	}
	str[ret] = '\0';
	return ret;
}

int snprintf(char *str, size_t n, const char *format, ...)
{
	va_list list;
	int ret;

	va_start(list, format);
	ret = vsnprintf(str, n, format, list);
	va_end(list);
	return ret;
}

#endif


/*
 *  swap bytes within 16-bit word
 *
 *  in:
 *    x - word to swap
 *  out:
 *    result
 */

uint16_t uint16_swap(uint16_t x)
{
	uint8_t *ptr = (uint8_t *)&x;
	uint8_t xx;

	xx = ptr[0];
	ptr[0] = ptr[1];
	ptr[1] = xx;

	return x;
}


/*
 *  convert data bytes from buffer big-endian data to host 16-bit word
 *
 *  in:
 *    buf - buffer with big-endian data
 *  out:
 *    converted result
 */

uint16_t uint16_be2host_buf(const void *buf)
{
	uint16_t v;

#if SYS_ARCH_LITTLE_ENDIAN
	((uint8_t *)(&v))[0] = ((uint8_t *)buf)[1];
	((uint8_t *)(&v))[1] = ((uint8_t *)buf)[0];
#endif
#if SYS_ARCH_BIG_ENDIAN
	((uint8_t *)(&v))[0] = ((uint8_t *)buf)[0];
	((uint8_t *)(&v))[1] = ((uint8_t *)buf)[1];
#endif

	return v;
}


/*
 *  convert data bytes from buffer little-endian data to host 16-bit word
 *
 *  in:
 *    buf - buffer with big-endian data
 *  out:
 *    converted result
 */

uint16_t uint16_le2host_buf(const void *buf)
{
	uint16_t v;

#if SYS_ARCH_LITTLE_ENDIAN
	((uint8_t *)(&v))[0] = ((uint8_t *)buf)[0];
	((uint8_t *)(&v))[1] = ((uint8_t *)buf)[1];
#endif
#if SYS_ARCH_BIG_ENDIAN
	((uint8_t *)(&v))[0] = ((uint8_t *)buf)[1];
	((uint8_t *)(&v))[1] = ((uint8_t *)buf)[0];
#endif

	return v;
}


/*
 *  convert host 16-bit word into big-endian buffer
 *
 *  in:
 *    buf - target buffer for big-endian data
 *    v - value to convert
 *  out:
 *    void
 */

void uint16_host2be_buf(void *buf, uint16_t v)
{
#if SYS_ARCH_LITTLE_ENDIAN
	((uint8_t *)buf)[0] = ((uint8_t *)(&v))[1];
	((uint8_t *)buf)[1] = ((uint8_t *)(&v))[0];
#endif
#if SYS_ARCH_BIG_ENDIAN
	((uint8_t *)buf)[0] = ((uint8_t *)(&v))[0];
	((uint8_t *)buf)[1] = ((uint8_t *)(&v))[1];
#endif
}


/*
 *  convert host 16-bit word into little-endian buffer
 *
 *  in:
 *    buf - target buffer for big-endian data
 *    v - value to convert
 *  out:
 *    void
 */

void uint16_host2le_buf(void *buf, uint16_t v)
{
#if SYS_ARCH_LITTLE_ENDIAN
	((uint8_t *)buf)[0] = ((uint8_t *)(&v))[0];
	((uint8_t *)buf)[1] = ((uint8_t *)(&v))[1];
#endif
#if SYS_ARCH_BIG_ENDIAN
	((uint8_t *)buf)[0] = ((uint8_t *)(&v))[1];
	((uint8_t *)buf)[1] = ((uint8_t *)(&v))[0];
#endif
}
