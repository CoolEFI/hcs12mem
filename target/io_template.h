/*
   hc12mem - HC12 memory reader & writer
   io_template.h: I/O registers
   $Id$

   Copyright (C) 2005 Michal Konieczny <mk@cml.mfk.net.pl>

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions
   are met:
   1. Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
   2. Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
   3. Neither the name of the project nor the names of its contributors
      may be used to endorse or promote products derived from this software
      without specific prior written permission.

   THIS SOFTWARE IS PROVIDED BY THE PROJECT AND CONTRIBUTORS ``AS IS'' AND
   ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
   ARE DISCLAIMED.  IN NO EVENT SHALL THE PROJECT OR CONTRIBUTORS BE LIABLE
   FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
   DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
   OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
   HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
   LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
   OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
   SUCH DAMAGE.
*/

#ifndef __MC_H
#define __MC_H

#define  0x0000
#define  0x0001
#define  0x0002
#define  0x0003
#define  0x0004
#define  0x0005
#define  0x0006
#define  0x0007
#define  0x0008
#define  0x0009
#define  0x000a
#define  0x000b
#define  0x000c
#define  0x000d
#define  0x000e
#define  0x000f

#define  0x0010
#define  0x0011
#define  0x0012
#define  0x0013
#define  0x0014
#define  0x0015
#define  0x0016
#define  0x0017
#define  0x0018
#define  0x0019
#define  0x001a
#define  0x001b
#define  0x001c
#define  0x001d
#define  0x001e
#define  0x001f

#define  0x0020
#define  0x0021
#define  0x0022
#define  0x0023
#define  0x0024
#define  0x0025
#define  0x0026
#define  0x0027
#define  0x0028
#define  0x0029
#define  0x002a
#define  0x002b
#define  0x002c
#define  0x002d
#define  0x002e
#define  0x002f

#define  0x0030
#define  0x0031
#define  0x0032
#define  0x0033
#define  0x0034
#define  0x0035
#define  0x0036
#define  0x0037
#define  0x0038
#define  0x0039
#define  0x003a
#define  0x003b
#define  0x003c
#define  0x003d
#define  0x003e
#define  0x003f

#define  0x0040
#define  0x0041
#define  0x0042
#define  0x0043
#define  0x0044
#define  0x0045
#define  0x0046
#define  0x0047
#define  0x0048
#define  0x0049
#define  0x004a
#define  0x004b
#define  0x004c
#define  0x004d
#define  0x004e
#define  0x004f

#define  0x0050
#define  0x0051
#define  0x0052
#define  0x0053
#define  0x0054
#define  0x0055
#define  0x0056
#define  0x0057
#define  0x0058
#define  0x0059
#define  0x005a
#define  0x005b
#define  0x005c
#define  0x005d
#define  0x005e
#define  0x005f

#define  0x0060
#define  0x0061
#define  0x0062
#define  0x0063
#define  0x0064
#define  0x0065
#define  0x0066
#define  0x0067
#define  0x0068
#define  0x0069
#define  0x006a
#define  0x006b
#define  0x006c
#define  0x006d
#define  0x006e
#define  0x006f

#define  0x0070
#define  0x0071
#define  0x0072
#define  0x0073
#define  0x0074
#define  0x0075
#define  0x0076
#define  0x0077
#define  0x0078
#define  0x0079
#define  0x007a
#define  0x007b
#define  0x007c
#define  0x007d
#define  0x007e
#define  0x007f

#define  0x0080
#define  0x0081
#define  0x0082
#define  0x0083
#define  0x0084
#define  0x0085
#define  0x0086
#define  0x0087
#define  0x0088
#define  0x0089
#define  0x008a
#define  0x008b
#define  0x008c
#define  0x008d
#define  0x008e
#define  0x008f

#define  0x0090
#define  0x0091
#define  0x0092
#define  0x0093
#define  0x0094
#define  0x0095
#define  0x0096
#define  0x0097
#define  0x0098
#define  0x0099
#define  0x009a
#define  0x009b
#define  0x009c
#define  0x009d
#define  0x009e
#define  0x009f

#define  0x00a0
#define  0x00a1
#define  0x00a2
#define  0x00a3
#define  0x00a4
#define  0x00a5
#define  0x00a6
#define  0x00a7
#define  0x00a8
#define  0x00a9
#define  0x00aa
#define  0x00ab
#define  0x00ac
#define  0x00ad
#define  0x00ae
#define  0x00af

#define  0x00b0
#define  0x00b1
#define  0x00b2
#define  0x00b3
#define  0x00b4
#define  0x00b5
#define  0x00b6
#define  0x00b7
#define  0x00b8
#define  0x00b9
#define  0x00ba
#define  0x00bb
#define  0x00bc
#define  0x00bd
#define  0x00be
#define  0x00bf

#define  0x00c0
#define  0x00c1
#define  0x00c2
#define  0x00c3
#define  0x00c4
#define  0x00c5
#define  0x00c6
#define  0x00c7
#define  0x00c8
#define  0x00c9
#define  0x00ca
#define  0x00cb
#define  0x00cc
#define  0x00cd
#define  0x00ce
#define  0x00cf

#define  0x00d0
#define  0x00d1
#define  0x00d2
#define  0x00d3
#define  0x00d4
#define  0x00d5
#define  0x00d6
#define  0x00d7
#define  0x00d8
#define  0x00d9
#define  0x00da
#define  0x00db
#define  0x00dc
#define  0x00dd
#define  0x00de
#define  0x00df

#define  0x00e0
#define  0x00e1
#define  0x00e2
#define  0x00e3
#define  0x00e4
#define  0x00e5
#define  0x00e6
#define  0x00e7
#define  0x00e8
#define  0x00e9
#define  0x00ea
#define  0x00eb
#define  0x00ec
#define  0x00ed
#define  0x00ee
#define  0x00ef

#define  0x00f0
#define  0x00f1
#define  0x00f2
#define  0x00f3
#define  0x00f4
#define  0x00f5
#define  0x00f6
#define  0x00f7
#define  0x00f8
#define  0x00f9
#define  0x00fa
#define  0x00fb
#define  0x00fc
#define  0x00fd
#define  0x00fe
#define  0x00ff

#define  0x0100
#define  0x0101
#define  0x0102
#define  0x0103
#define  0x0104
#define  0x0105
#define  0x0106
#define  0x0107
#define  0x0108
#define  0x0109
#define  0x010a
#define  0x010b
#define  0x010c
#define  0x010d
#define  0x010e
#define  0x010f

#define  0x0110
#define  0x0111
#define  0x0112
#define  0x0113
#define  0x0114
#define  0x0115
#define  0x0116
#define  0x0117
#define  0x0118
#define  0x0119
#define  0x011a
#define  0x011b
#define  0x011c
#define  0x011d
#define  0x011e
#define  0x011f

#define  0x0120
#define  0x0121
#define  0x0122
#define  0x0123
#define  0x0124
#define  0x0125
#define  0x0126
#define  0x0127
#define  0x0128
#define  0x0129
#define  0x012a
#define  0x012b
#define  0x012c
#define  0x012d
#define  0x012e
#define  0x012f

#define  0x0130
#define  0x0131
#define  0x0132
#define  0x0133
#define  0x0134
#define  0x0135
#define  0x0136
#define  0x0137
#define  0x0138
#define  0x0139
#define  0x013a
#define  0x013b
#define  0x013c
#define  0x013d
#define  0x013e
#define  0x013f

#define  0x0140
#define  0x0141
#define  0x0142
#define  0x0143
#define  0x0144
#define  0x0145
#define  0x0146
#define  0x0147
#define  0x0148
#define  0x0149
#define  0x014a
#define  0x014b
#define  0x014c
#define  0x014d
#define  0x014e
#define  0x014f

#define  0x0150
#define  0x0151
#define  0x0152
#define  0x0153
#define  0x0154
#define  0x0155
#define  0x0156
#define  0x0157
#define  0x0158
#define  0x0159
#define  0x015a
#define  0x015b
#define  0x015c
#define  0x015d
#define  0x015e
#define  0x015f

#define  0x0160
#define  0x0161
#define  0x0162
#define  0x0163
#define  0x0164
#define  0x0165
#define  0x0166
#define  0x0167
#define  0x0168
#define  0x0169
#define  0x016a
#define  0x016b
#define  0x016c
#define  0x016d
#define  0x016e
#define  0x016f

#define  0x0170
#define  0x0171
#define  0x0172
#define  0x0173
#define  0x0174
#define  0x0175
#define  0x0176
#define  0x0177
#define  0x0178
#define  0x0179
#define  0x017a
#define  0x017b
#define  0x017c
#define  0x017d
#define  0x017e
#define  0x017f

#define  0x0180
#define  0x0181
#define  0x0182
#define  0x0183
#define  0x0184
#define  0x0185
#define  0x0186
#define  0x0187
#define  0x0188
#define  0x0189
#define  0x018a
#define  0x018b
#define  0x018c
#define  0x018d
#define  0x018e
#define  0x018f

#define  0x0190
#define  0x0191
#define  0x0192
#define  0x0193
#define  0x0194
#define  0x0195
#define  0x0196
#define  0x0197
#define  0x0198
#define  0x0199
#define  0x019a
#define  0x019b
#define  0x019c
#define  0x019d
#define  0x019e
#define  0x019f

#define  0x01a0
#define  0x01a1
#define  0x01a2
#define  0x01a3
#define  0x01a4
#define  0x01a5
#define  0x01a6
#define  0x01a7
#define  0x01a8
#define  0x01a9
#define  0x01aa
#define  0x01ab
#define  0x01ac
#define  0x01ad
#define  0x01ae
#define  0x01af

#define  0x01b0
#define  0x01b1
#define  0x01b2
#define  0x01b3
#define  0x01b4
#define  0x01b5
#define  0x01b6
#define  0x01b7
#define  0x01b8
#define  0x01b9
#define  0x01ba
#define  0x01bb
#define  0x01bc
#define  0x01bd
#define  0x01be
#define  0x01bf

#define  0x01c0
#define  0x01c1
#define  0x01c2
#define  0x01c3
#define  0x01c4
#define  0x01c5
#define  0x01c6
#define  0x01c7
#define  0x01c8
#define  0x01c9
#define  0x01ca
#define  0x01cb
#define  0x01cc
#define  0x01cd
#define  0x01ce
#define  0x01cf

#define  0x01d0
#define  0x01d1
#define  0x01d2
#define  0x01d3
#define  0x01d4
#define  0x01d5
#define  0x01d6
#define  0x01d7
#define  0x01d8
#define  0x01d9
#define  0x01da
#define  0x01db
#define  0x01dc
#define  0x01dd
#define  0x01de
#define  0x01df

#define  0x01e0
#define  0x01e1
#define  0x01e2
#define  0x01e3
#define  0x01e4
#define  0x01e5
#define  0x01e6
#define  0x01e7
#define  0x01e8
#define  0x01e9
#define  0x01ea
#define  0x01eb
#define  0x01ec
#define  0x01ed
#define  0x01ee
#define  0x01ef

#define  0x01f0
#define  0x01f1
#define  0x01f2
#define  0x01f3
#define  0x01f4
#define  0x01f5
#define  0x01f6
#define  0x01f7
#define  0x01f8
#define  0x01f9
#define  0x01fa
#define  0x01fb
#define  0x01fc
#define  0x01fd
#define  0x01fe
#define  0x01ff

#define  0x0200
#define  0x0201
#define  0x0202
#define  0x0203
#define  0x0204
#define  0x0205
#define  0x0206
#define  0x0207
#define  0x0208
#define  0x0209
#define  0x020a
#define  0x020b
#define  0x020c
#define  0x020d
#define  0x020e
#define  0x020f

#define  0x0210
#define  0x0211
#define  0x0212
#define  0x0213
#define  0x0214
#define  0x0215
#define  0x0216
#define  0x0217
#define  0x0218
#define  0x0219
#define  0x021a
#define  0x021b
#define  0x021c
#define  0x021d
#define  0x021e
#define  0x021f

#define  0x0220
#define  0x0221
#define  0x0222
#define  0x0223
#define  0x0224
#define  0x0225
#define  0x0226
#define  0x0227
#define  0x0228
#define  0x0229
#define  0x022a
#define  0x022b
#define  0x022c
#define  0x022d
#define  0x022e
#define  0x022f

#define  0x0230
#define  0x0231
#define  0x0232
#define  0x0233
#define  0x0234
#define  0x0235
#define  0x0236
#define  0x0237
#define  0x0238
#define  0x0239
#define  0x023a
#define  0x023b
#define  0x023c
#define  0x023d
#define  0x023e
#define  0x023f

#define  0x0240
#define  0x0241
#define  0x0242
#define  0x0243
#define  0x0244
#define  0x0245
#define  0x0246
#define  0x0247
#define  0x0248
#define  0x0249
#define  0x024a
#define  0x024b
#define  0x024c
#define  0x024d
#define  0x024e
#define  0x024f

#define  0x0250
#define  0x0251
#define  0x0252
#define  0x0253
#define  0x0254
#define  0x0255
#define  0x0256
#define  0x0257
#define  0x0258
#define  0x0259
#define  0x025a
#define  0x025b
#define  0x025c
#define  0x025d
#define  0x025e
#define  0x025f

#define  0x0260
#define  0x0261
#define  0x0262
#define  0x0263
#define  0x0264
#define  0x0265
#define  0x0266
#define  0x0267
#define  0x0268
#define  0x0269
#define  0x026a
#define  0x026b
#define  0x026c
#define  0x026d
#define  0x026e
#define  0x026f

#define  0x0270
#define  0x0271
#define  0x0272
#define  0x0273
#define  0x0274
#define  0x0275
#define  0x0276
#define  0x0277
#define  0x0278
#define  0x0279
#define  0x027a
#define  0x027b
#define  0x027c
#define  0x027d
#define  0x027e
#define  0x027f

#define  0x0280
#define  0x0281
#define  0x0282
#define  0x0283
#define  0x0284
#define  0x0285
#define  0x0286
#define  0x0287
#define  0x0288
#define  0x0289
#define  0x028a
#define  0x028b
#define  0x028c
#define  0x028d
#define  0x028e
#define  0x028f

#define  0x0290
#define  0x0291
#define  0x0292
#define  0x0293
#define  0x0294
#define  0x0295
#define  0x0296
#define  0x0297
#define  0x0298
#define  0x0299
#define  0x029a
#define  0x029b
#define  0x029c
#define  0x029d
#define  0x029e
#define  0x029f

#define  0x02a0
#define  0x02a1
#define  0x02a2
#define  0x02a3
#define  0x02a4
#define  0x02a5
#define  0x02a6
#define  0x02a7
#define  0x02a8
#define  0x02a9
#define  0x02aa
#define  0x02ab
#define  0x02ac
#define  0x02ad
#define  0x02ae
#define  0x02af

#define  0x02b0
#define  0x02b1
#define  0x02b2
#define  0x02b3
#define  0x02b4
#define  0x02b5
#define  0x02b6
#define  0x02b7
#define  0x02b8
#define  0x02b9
#define  0x02ba
#define  0x02bb
#define  0x02bc
#define  0x02bd
#define  0x02be
#define  0x02bf

#define  0x02c0
#define  0x02c1
#define  0x02c2
#define  0x02c3
#define  0x02c4
#define  0x02c5
#define  0x02c6
#define  0x02c7
#define  0x02c8
#define  0x02c9
#define  0x02ca
#define  0x02cb
#define  0x02cc
#define  0x02cd
#define  0x02ce
#define  0x02cf

#define  0x02d0
#define  0x02d1
#define  0x02d2
#define  0x02d3
#define  0x02d4
#define  0x02d5
#define  0x02d6
#define  0x02d7
#define  0x02d8
#define  0x02d9
#define  0x02da
#define  0x02db
#define  0x02dc
#define  0x02dd
#define  0x02de
#define  0x02df

#define  0x02e0
#define  0x02e1
#define  0x02e2
#define  0x02e3
#define  0x02e4
#define  0x02e5
#define  0x02e6
#define  0x02e7
#define  0x02e8
#define  0x02e9
#define  0x02ea
#define  0x02eb
#define  0x02ec
#define  0x02ed
#define  0x02ee
#define  0x02ef

#define  0x02f0
#define  0x02f1
#define  0x02f2
#define  0x02f3
#define  0x02f4
#define  0x02f5
#define  0x02f6
#define  0x02f7
#define  0x02f8
#define  0x02f9
#define  0x02fa
#define  0x02fb
#define  0x02fc
#define  0x02fd
#define  0x02fe
#define  0x02ff

#define  0x0300
#define  0x0301
#define  0x0302
#define  0x0303
#define  0x0304
#define  0x0305
#define  0x0306
#define  0x0307
#define  0x0308
#define  0x0309
#define  0x030a
#define  0x030b
#define  0x030c
#define  0x030d
#define  0x030e
#define  0x030f

#define  0x0310
#define  0x0311
#define  0x0312
#define  0x0313
#define  0x0314
#define  0x0315
#define  0x0316
#define  0x0317
#define  0x0318
#define  0x0319
#define  0x031a
#define  0x031b
#define  0x031c
#define  0x031d
#define  0x031e
#define  0x031f

#define  0x0320
#define  0x0321
#define  0x0322
#define  0x0323
#define  0x0324
#define  0x0325
#define  0x0326
#define  0x0327
#define  0x0328
#define  0x0329
#define  0x032a
#define  0x032b
#define  0x032c
#define  0x032d
#define  0x032e
#define  0x032f

#define  0x0330
#define  0x0331
#define  0x0332
#define  0x0333
#define  0x0334
#define  0x0335
#define  0x0336
#define  0x0337
#define  0x0338
#define  0x0339
#define  0x033a
#define  0x033b
#define  0x033c
#define  0x033d
#define  0x033e
#define  0x033f

#define  0x0340
#define  0x0341
#define  0x0342
#define  0x0343
#define  0x0344
#define  0x0345
#define  0x0346
#define  0x0347
#define  0x0348
#define  0x0349
#define  0x034a
#define  0x034b
#define  0x034c
#define  0x034d
#define  0x034e
#define  0x034f

#define  0x0350
#define  0x0351
#define  0x0352
#define  0x0353
#define  0x0354
#define  0x0355
#define  0x0356
#define  0x0357
#define  0x0358
#define  0x0359
#define  0x035a
#define  0x035b
#define  0x035c
#define  0x035d
#define  0x035e
#define  0x035f

#define  0x0360
#define  0x0361
#define  0x0362
#define  0x0363
#define  0x0364
#define  0x0365
#define  0x0366
#define  0x0367
#define  0x0368
#define  0x0369
#define  0x036a
#define  0x036b
#define  0x036c
#define  0x036d
#define  0x036e
#define  0x036f

#define  0x0370
#define  0x0371
#define  0x0372
#define  0x0373
#define  0x0374
#define  0x0375
#define  0x0376
#define  0x0377
#define  0x0378
#define  0x0379
#define  0x037a
#define  0x037b
#define  0x037c
#define  0x037d
#define  0x037e
#define  0x037f

#define  0x0380
#define  0x0381
#define  0x0382
#define  0x0383
#define  0x0384
#define  0x0385
#define  0x0386
#define  0x0387
#define  0x0388
#define  0x0389
#define  0x038a
#define  0x038b
#define  0x038c
#define  0x038d
#define  0x038e
#define  0x038f

#define  0x0390
#define  0x0391
#define  0x0392
#define  0x0393
#define  0x0394
#define  0x0395
#define  0x0396
#define  0x0397
#define  0x0398
#define  0x0399
#define  0x039a
#define  0x039b
#define  0x039c
#define  0x039d
#define  0x039e
#define  0x039f

#define  0x03a0
#define  0x03a1
#define  0x03a2
#define  0x03a3
#define  0x03a4
#define  0x03a5
#define  0x03a6
#define  0x03a7
#define  0x03a8
#define  0x03a9
#define  0x03aa
#define  0x03ab
#define  0x03ac
#define  0x03ad
#define  0x03ae
#define  0x03af

#define  0x03b0
#define  0x03b1
#define  0x03b2
#define  0x03b3
#define  0x03b4
#define  0x03b5
#define  0x03b6
#define  0x03b7
#define  0x03b8
#define  0x03b9
#define  0x03ba
#define  0x03bb
#define  0x03bc
#define  0x03bd
#define  0x03be
#define  0x03bf

#define  0x03c0
#define  0x03c1
#define  0x03c2
#define  0x03c3
#define  0x03c4
#define  0x03c5
#define  0x03c6
#define  0x03c7
#define  0x03c8
#define  0x03c9
#define  0x03ca
#define  0x03cb
#define  0x03cc
#define  0x03cd
#define  0x03ce
#define  0x03cf

#define  0x03d0
#define  0x03d1
#define  0x03d2
#define  0x03d3
#define  0x03d4
#define  0x03d5
#define  0x03d6
#define  0x03d7
#define  0x03d8
#define  0x03d9
#define  0x03da
#define  0x03db
#define  0x03dc
#define  0x03dd
#define  0x03de
#define  0x03df

#define  0x03e0
#define  0x03e1
#define  0x03e2
#define  0x03e3
#define  0x03e4
#define  0x03e5
#define  0x03e6
#define  0x03e7
#define  0x03e8
#define  0x03e9
#define  0x03ea
#define  0x03eb
#define  0x03ec
#define  0x03ed
#define  0x03ee
#define  0x03ef

#define  0x03f0
#define  0x03f1
#define  0x03f2
#define  0x03f3
#define  0x03f4
#define  0x03f5
#define  0x03f6
#define  0x03f7
#define  0x03f8
#define  0x03f9
#define  0x03fa
#define  0x03fb
#define  0x03fc
#define  0x03fd
#define  0x03fe
#define  0x03ff

#endif /* __MC_H */
