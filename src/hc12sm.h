/*
    hc12mem - HC12 memory reader & writer
    hc12sm.h: Freescale AN2548 serial monitor
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

#ifndef __HC12SM_H
#define __HC12SM_H

#define HC12SM_BAUD_RATE     115200
#define HC12SM_TX_TIMEOUT      1000 /* ms */
#define HC12SM_RX_TIMEOUT      5000 /* ms */
#define HC12SM_PROMPT_TIMEOUT  1000 /* ms */
#define HC12SM_FLUSH_TIMEOUT    100
#define HC12SM_BLOCK_SIZE_MAX   256

#define HC12SM_SYNC_QUERY      0x0d
#define HC12SM_PROMPT_SYMBOL   '>'
#define HC12SM_DEVICE_INFO_CODE 0xdc

#define HC12SM_FLASH_IMAGE_START 0xf800
#define HC12SM_FLASH_IMAGE_SIZE  0x0800

#define HC12SM_FLASH_ID_ADDR     0xfef8
#define HC12SM_FLASH_ID_SIZE     8

#define HC12SM_CMD_READ_BYTE    0xa1
#define HC12SM_CMD_WRITE_BYTE   0xa2
#define HC12SM_CMD_READ_WORD    0xa3
#define HC12SM_CMD_WRITE_WORD   0xa4
#define HC12SM_CMD_READ_NEXT    0xa5
#define HC12SM_CMD_WRITE_NEXT   0xa6
#define HC12SM_CMD_READ_BLOCK   0xa7
#define HC12SM_CMD_WRITE_BLOCK  0xa8
#define HC12SM_CMD_READ_REGS    0xa9
#define HC12SM_CMD_WRITE_SP     0xaa
#define HC12SM_CMD_WRITE_PC     0xab
#define HC12SM_CMD_WRITE_IY     0xac
#define HC12SM_CMD_WRITE_IX     0xad
#define HC12SM_CMD_WRITE_D      0xae
#define HC12SM_CMD_WRITE_CCR    0xaf
#define HC12SM_CMD_GO           0xb1
#define HC12SM_CMD_TRACE1       0xb2
#define HC12SM_CMD_HALT         0xb3
#define HC12SM_CMD_RESET        0xb4
#define HC12SM_CMD_ERASE_RANGE  0xb5 /* not supported */
#define HC12SM_CMD_ERASE_ALL    0xb6
#define HC12SM_CMD_DEVICE_INFO  0xb7
#define HC12SM_CMD_ERASE_PAGE   0xb8
#define HC12SM_CMD_ERASE_EEPROM 0xb9

#define HC12SM_ERROR_NONE             0xe0
#define HC12SM_ERROR_CMD_UNKNOWN      0xe1
#define HC12SM_ERROR_CMD_NOT_ALLOWED  0xe2
#define HC12SM_ERROR_SP_OUT_OF_RANGE  0xe3
#define HC12SM_ERROR_INVALID_SP_VALUE 0xe4
#define HC12SM_ERROR_NVM_BYTE_WRITE   0xe5
#define HC12SM_ERROR_FLASH_ERROR      0xe6
#define HC12SM_ERROR_NA1              0xe7
#define HC12SM_ERROR_NA2              0xe8
#define HC12SM_ERROR_EEPROM_ERROR     0xe9

#define HC12SM_STATUS_MONITOR_ACTIVE       0x00
#define HC12SM_STATUS_USER_PROGRAM_RUNNING 0x01
#define HC12SM_STATUS_USER_PROGRAM_HALTED  0x02
#define HC12SM_STATUS_TRACE1_RETURNED      0x04
#define HC12SM_STATUS_COLD_RESET           0x08
#define HC12SM_STATUS_WARM_RESET           0x0c

extern hc12mem_target_handler_t hc12mem_target_handler_sm;

#endif /* __HC12SM_H */
