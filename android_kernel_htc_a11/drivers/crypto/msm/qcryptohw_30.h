/* Copyright (c)2009- 2011, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _DRIVERS_CRYPTO_MSM_QCRYPTOHW_30_H_
#define _DRIVERS_CRYPTO_MSM_QCRYPTOHW_30_H_

#define QCE_AUTH_REG_BYTE_COUNT 2
#define CRYPTO_DATA_IN_REG			0x0
#define CRYPTO_DATA_OUT_REG			0x10
#define CRYPTO_STATUS_REG			0x20
#define CRYPTO_CONFIG_REG			0x24
#define CRYPTO_DEBUG_REG			0x28
#define CRYPTO_REGISTER_LOCK_REG		0x2C
#define CRYPTO_SEG_CFG_REG			0x30
#define CRYPTO_ENCR_SEG_CFG_REG			0x34
#define CRYPTO_AUTH_SEG_CFG_REG			0x38
#define CRYPTO_SEG_SIZE_REG			0x3C
#define CRYPTO_GOPROC_REG			0x40
#define CRYPTO_ENGINES_AVAIL			0x44

#define CRYPTO_DES_KEY0_REG			0x50
#define CRYPTO_DES_KEY1_REG			0x54
#define CRYPTO_DES_KEY2_REG			0x58
#define CRYPTO_DES_KEY3_REG			0x5C
#define CRYPTO_DES_KEY4_REG			0x60
#define CRYPTO_DES_KEY5_REG			0x64

#define CRYPTO_CNTR0_IV0_REG			0x70
#define CRYPTO_CNTR1_IV1_REG			0x74
#define CRYPTO_CNTR2_IV2_REG			0x78
#define CRYPTO_CNTR3_IV3_REG			0x7C
#define CRYPTO_CNTR_MASK_REG			0x80

#define CRYPTO_AUTH_BYTECNT0_REG		0x90
#define CRYPTO_AUTH_BYTECNT1_REG		0x94
#define CRYPTO_AUTH_BYTECNT2_REG		0x98
#define CRYPTO_AUTH_BYTECNT3_REG		0x9C

#define CRYPTO_AUTH_IV0_REG			0x100
#define CRYPTO_AUTH_IV1_REG			0x104
#define CRYPTO_AUTH_IV2_REG			0x108
#define CRYPTO_AUTH_IV3_REG			0x10C
#define CRYPTO_AUTH_IV4_REG			0x110
#define CRYPTO_AUTH_IV5_REG			0x114
#define CRYPTO_AUTH_IV6_REG			0x118
#define CRYPTO_AUTH_IV7_REG			0x11C
#define CRYPTO_AUTH_IV8_REG			0x120
#define CRYPTO_AUTH_IV9_REG			0x124
#define CRYPTO_AUTH_IV10_REG			0x128
#define CRYPTO_AUTH_IV11_REG			0x12C
#define CRYPTO_AUTH_IV12_REG			0x130
#define CRYPTO_AUTH_IV13_REG			0x134
#define CRYPTO_AUTH_IV14_REG			0x138
#define CRYPTO_AUTH_IV15_REG			0x13C

#define CRYPTO_AES_RNDKEY0			0x200
#define CRYPTO_AES_RNDKEY1			0x204
#define CRYPTO_AES_RNDKEY2			0x208
#define CRYPTO_AES_RNDKEY3			0x20C
#define CRYPTO_AES_RNDKEY4			0x210
#define CRYPTO_AES_RNDKEY5			0x214
#define CRYPTO_AES_RNDKEY6			0x218
#define CRYPTO_AES_RNDKEY7			0x21C
#define CRYPTO_AES_RNDKEY8			0x220
#define CRYPTO_AES_RNDKEY9			0x224
#define CRYPTO_AES_RNDKEY10			0x228
#define CRYPTO_AES_RNDKEY11			0x22c
#define CRYPTO_AES_RNDKEY12			0x230
#define CRYPTO_AES_RNDKEY13			0x234
#define CRYPTO_AES_RNDKEY14			0x238
#define CRYPTO_AES_RNDKEY15			0x23C
#define CRYPTO_AES_RNDKEY16			0x240
#define CRYPTO_AES_RNDKEY17			0x244
#define CRYPTO_AES_RNDKEY18			0x248
#define CRYPTO_AES_RNDKEY19			0x24C
#define CRYPTO_AES_RNDKEY20			0x250
#define CRYPTO_AES_RNDKEY21			0x254
#define CRYPTO_AES_RNDKEY22			0x258
#define CRYPTO_AES_RNDKEY23			0x25C
#define CRYPTO_AES_RNDKEY24			0x260
#define CRYPTO_AES_RNDKEY25			0x264
#define CRYPTO_AES_RNDKEY26			0x268
#define CRYPTO_AES_RNDKEY27			0x26C
#define CRYPTO_AES_RNDKEY28			0x270
#define CRYPTO_AES_RNDKEY29			0x274
#define CRYPTO_AES_RNDKEY30			0x278
#define CRYPTO_AES_RNDKEY31			0x27C
#define CRYPTO_AES_RNDKEY32			0x280
#define CRYPTO_AES_RNDKEY33			0x284
#define CRYPTO_AES_RNDKEY34			0x288
#define CRYPTO_AES_RNDKEY35			0x28c
#define CRYPTO_AES_RNDKEY36			0x290
#define CRYPTO_AES_RNDKEY37			0x294
#define CRYPTO_AES_RNDKEY38			0x298
#define CRYPTO_AES_RNDKEY39			0x29C
#define CRYPTO_AES_RNDKEY40			0x2A0
#define CRYPTO_AES_RNDKEY41			0x2A4
#define CRYPTO_AES_RNDKEY42			0x2A8
#define CRYPTO_AES_RNDKEY43			0x2AC
#define CRYPTO_AES_RNDKEY44			0x2B0
#define CRYPTO_AES_RNDKEY45			0x2B4
#define CRYPTO_AES_RNDKEY46			0x2B8
#define CRYPTO_AES_RNDKEY47			0x2BC
#define CRYPTO_AES_RNDKEY48			0x2C0
#define CRYPTO_AES_RNDKEY49			0x2C4
#define CRYPTO_AES_RNDKEY50			0x2C8
#define CRYPTO_AES_RNDKEY51			0x2CC
#define CRYPTO_AES_RNDKEY52			0x2D0
#define CRYPTO_AES_RNDKEY53			0x2D4
#define CRYPTO_AES_RNDKEY54			0x2D8
#define CRYPTO_AES_RNDKEY55			0x2DC
#define CRYPTO_AES_RNDKEY56			0x2E0
#define CRYPTO_AES_RNDKEY57			0x2E4
#define CRYPTO_AES_RNDKEY58			0x2E8
#define CRYPTO_AES_RNDKEY59			0x2EC

#define CRYPTO_DATA_SHADOW0			0x8000
#define CRYPTO_DATA_SHADOW8191			0x8FFC

/* status reg  */
#define CRYPTO_CORE_REV				28	/* bit 31-28 */
#define CRYPTO_CORE_REV_MASK			(0xf << CRYPTO_CORE_REV)
#define CRYPTO_DOUT_SIZE_AVAIL			22	/* bit 24-22 */
#define CRYPTO_DOUT_SIZE_AVAIL_MASK		(0x7 << CRYPTO_DOUT_SIZE_AVAIL)
#define CRYPTO_DIN_SIZE_AVAIL			19	/* bit 21-19 */
#define CRYPTO_DIN_SIZE_AVAIL_MASK		(0x7 << CRYPTO_DIN_SIZE_AVAIL)
#define CRYPTO_ACCESS_VIOL			18
#define CRYPTO_SEG_CHNG_ERR			17
#define CRYPTO_CFH_CHNG_ERR			16
#define CRYPTO_DOUT_ERR				15
#define CRYPTO_DIN_ERR				14
#define CRYPTO_LOCKED				13
#define CRYPTO_CRYPTO_STATE			10	/* bit 12-10 */
#define CRYPTO_CRYPTO_STATE_MASK		(0x7 << CRYPTO_CRYPTO_STATE)
#define CRYPTO_ENCR_BUSY			9
#define CRYPTO_AUTH_BUSY			8
#define CRYPTO_DOUT_INTR			7
#define CRYPTO_DIN_INTR				6
#define CRYPTO_AUTH_DONE_INTR			5
#define CRYPTO_ERR_INTR				4
#define CRYPTO_DOUT_RDY				3
#define CRYPTO_DIN_RDY				2
#define CRYPTO_AUTH_DONE			1
#define CRYPTO_SW_ERR				0

#define CRYPTO_CRYPTO_STATE_IDLE		0
#define CRYPTO_CRYPTO_STATE_LOCKED		1
#define CRYPTO_CRYPTO_STATE_GO			3
#define CRYPTO_CRYPTO_STATE_PROCESSING		4
#define CRYPTO_CRYPTO_STATE_FINAL_READ		5
#define CRYPTO_CRYPTO_STATE_CTXT_CLEARING	6
#define CRYPTO_CRYPTO_STATE_UNLOCKING		7

/* config reg */
#define CRYPTO_HIGH_SPD_HASH_EN_N		15
#define CRYPTO_HIGH_SPD_OUT_EN_N		14
#define CRYPTO_HIGH_SPD_IN_EN_N			13
#define CRYPTO_DBG_EN				12
#define CRYPTO_DBG_SEL				7	/* bit 11:7 */
#define CRYPTO_DBG_SEL_MASK			(0x1F << CRYPTO_DBG_SEL)
#define CRYPTO_MASK_DOUT_INTR			6
#define CRYPTO_MASK_DIN_INTR			5
#define CRYPTO_MASK_AUTH_DONE_INTR		4
#define CRYPTO_MASK_ERR_INTR			3
#define CRYPTO_AUTO_SHUTDOWN_EN			2
#define CRYPTO_CLK_EN_N				1
#define CRYPTO_SW_RST				0

/* seg_cfg reg */
#define CRYPTO_F8_KEYSTREAM_ENABLE		25
#define CRYPTO_F9_DIRECTION			24
#define CRYPTO_F8_DIRECTION			23
#define CRYPTO_USE_HW_KEY			22

#define CRYPTO_CNTR_ALG				20	/* bit 21-20 */
#define CRYPTO_CNTR_ALG_MASK			(3 << efine CRYPTO_CNTR_ALG)

#define CRYPTO_CLR_CNTXT			19
#define CRYPTO_LAST				18
#define CRYPTO_FIRST				17
#define CRYPTO_ENCODE				16

#define CRYPTO_AUTH_POS				14	/* bit 15-14 */
#define CRYPTO_AUTH_POS_MASK			(3 << CRYPTO_AUTH_POS)

#define CRYPTO_AUTH_SIZE			11	/* bit 13-11 */
#define CRYPTO_AUTH_SIZE_MASK			(7 << CRYPTO_AUTH_SIZE)

#define CRYPTO_AUTH_ALG				9	/* bit 10-9 */
#define CRYPTO_AUTH_ALG_MASK			(3 << CRYPTO_AUTH_ALG)

#define CRYPTO_ENCR_MODE			6	/* bit 8-6 */
#define CRYPTO_ENCR_MODE_MASK			(7 << CRYPTO_ENCR_MODE)

#define CRYPTO_ENCR_KEY_SZ			3	/* bit 5-3 */
#define CRYPTO_ENCR_KEY_SZ_MASK			(7 << CRYPTO_ENCR_KEY_SZ)

#define CRYPTO_ENCR_ALG				0	/* bit 2-0 */
#define CRYPTO_ENCR_ALG_MASK			(7 << CRYPTO_ENCR_ALG)

#define CRYPTO_CNTR_ALG_NIST			0
#define CRYPTO_CNTR_ALG_UMB			1
#define CRYPTO_CNTR_ALG_VAR2			2

#define CRYPTO_AUTH_POS_BEFORE			0
#define CRYPTO_AUTH_POS_AFTER			1

#define CRYPTO_AUTH_SIZE_SHA1			0
#define CRYPTO_AUTH_SIZE_SHA256			1
#define CRYPTO_AUTH_SIZE_SHA384			2
#define CRYPTO_AUTH_SIZE_SHA512			3
#define CRYPTO_AUTH_SIZE_HMAC_SHA1		4

#define CRYPTO_AUTH_SIZE_UIA1			0
#define CRYPTO_AUTH_SIZE_UIA2			1

#define CRYPTO_AUTH_ALG_NONE			0
#define CRYPTO_AUTH_ALG_SHA			1
#define CRYPTO_AUTH_ALG_F9			2
#define CRYPTO_AUTH_ALG_RESERVED1		3

#define CRYPTO_ENCR_MODE_ECB			0
#define CRYPTO_ENCR_MODE_CBC			1
/* only valid when AES */
#define CRYPTO_ENCR_MODE_CTR			2


#define CRYPTO_ENCR_KEY_SZ_DES			0
#define CRYPTO_ENCR_KEY_SZ_3DES			1

#define CRYPTO_ENCR_KEY_SZ_AES128		0
#define CRYPTO_ENCR_KEY_SZ_AES192		1
#define CRYPTO_ENCR_KEY_SZ_AES256		2

#define CRYPTO_ENCR_KEY_SZ_UEA1			0
#define CRYPTO_ENCR_KEY_SZ_UEA2			1

#define CRYPTO_ENCR_ALG_NONE			0
#define CRYPTO_ENCR_ALG_DES			1
#define CRYPTO_ENCR_ALG_AES			2
#define CRYPTO_ENCR_ALG_C2			3
#define CRYPTO_ENCR_ALG_F8			4

/* encr_seg_cfg reg */
#define CRYPTO_ENCR_SEG_SIZE			16	/* bit 31-16  */
#define CRYPTO_ENCR_SEG_SIZE_MASK		(0xffff << CRYPTO_ENCR_SEG_SIZE)

#define CRYPTO_ENCR_START			0
#define CRYPTO_ENCR_START_MASK			(0xffff << CRYPTO_ENCR_START)

/* auth_seg_cfg reg */
#define CRYPTO_AUTH_SEG_SIZE			16	/* bit 31-16  */
#define CRYPTO_AUTH_SEG_SIZE_MASK		(0xffff << CRYPTO_AUTH_SEG_SIZE)

#define CRYPTO_AUTH_START			0
#define CRYPTO_AUTH_START_MASK			(0xffff << CRYPTO_AUTH_START)


/* seg_size reg */
#define CRYPTO_SEG_SIZE				0
#define CRYPTO_SEG_SIZE_MASK			(0xffff << CRYPTO_SEG_SIZE)

/* goproc reg */
#define CRYPTO_GO				0

/* engines_avail */
#define CRYPTO_F9_SEL				8
#define CRYPTO_F8_SEL				7
#define CRYPTO_HMAC_SEL				6
#define CRYPTO_SHA512_SEL			5
#define CRYPTO_SHA_SEL				4
#define CRYPTO_DES_SEL				3
#define CRYPTO_C2_SEL				2

#define CRYPTO_AES_SEL				0	/* bit 1-0 */
#define CRYPTO_AES_SEL_MASK			(3 <<  CRYPTO_AES_SEL)
#define CRYPTO_AES_SEL_NO			0
#define CRYPTO_AES_SEL_SLOW			1
#define CRYPTO_AES_SEL_FAST			2
#define CRYPTO_AES_SEL_RESERVED			3

/*  F8 definition of CRYPTO_CNTR1_IV1_REG  */
#define CRYPTO_CNTR1_IV1_REG_F8_PKT_CNT		16	/* bit 31 - 16 */
#define CRYPTO_CNTR1_IV1_REG_F8_PKT_CNT_MASK \
		(0xffff << CRYPTO_CNTR1_IV1_REG_F8_PKT_CNT)

#define CRYPTO_CNTR1_IV1_REG_F8_BEARER		0	/* bit 4 - 0 */
#define CRYPTO_CNTR1_IV1_REG_F8_BEARER_MASK \
		(0x1f << CRYPTO_CNTR1_IV1_REG_F8_BEARER)

/* F9 definition of CRYPTO_AUTH_IV4_REG */
#define CRYPTO_AUTH_IV4_REG_F9_VALID_BIS	0	/* bit 2 - 0 */
#define CRYPTO_AUTH_IV4_REG_F9_VALID_BIS_MASK \
		(0x7  << CRYPTO_AUTH_IV4_REG_F9_VALID_BIS)

/* misc  */
#define CRYPTO_AES_RNDKEYS			60

#endif /* _DRIVERS_CRYPTO_MSM_QCRYPTOHW_30_H_ */

