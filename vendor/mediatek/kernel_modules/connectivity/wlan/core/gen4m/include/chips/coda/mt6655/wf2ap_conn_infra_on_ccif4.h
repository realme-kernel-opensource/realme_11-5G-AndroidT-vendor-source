/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2020 MediaTek Inc.
 */

#ifndef __WF2AP_CONN_INFRA_ON_CCIF4_REGS_H__
#define __WF2AP_CONN_INFRA_ON_CCIF4_REGS_H__

#include "hal_common.h"

#ifdef __cplusplus
extern "C" {
#endif

#define WF2AP_CONN_INFRA_ON_CCIF4_BASE \
	(0x1803C000 + CONN_INFRA_REMAPPING_OFFSET)

#define WF2AP_CONN_INFRA_ON_CCIF4_WF2AP_PCCIF_BUSY_ADDR \
	(WF2AP_CONN_INFRA_ON_CCIF4_BASE + 0x0004)
#define WF2AP_CONN_INFRA_ON_CCIF4_WF2AP_PCCIF_START_ADDR \
	(WF2AP_CONN_INFRA_ON_CCIF4_BASE + 0x0008)
#define WF2AP_CONN_INFRA_ON_CCIF4_WF2AP_PCCIF_TCHNUM_ADDR \
	(WF2AP_CONN_INFRA_ON_CCIF4_BASE + 0x000C)
#define WF2AP_CONN_INFRA_ON_CCIF4_WF2AP_PCCIF_RCHNUM_ADDR \
	(WF2AP_CONN_INFRA_ON_CCIF4_BASE + 0x0010)
#define WF2AP_CONN_INFRA_ON_CCIF4_WF2AP_PCCIF_ACK_ADDR \
	(WF2AP_CONN_INFRA_ON_CCIF4_BASE + 0x0014)
#define WF2AP_CONN_INFRA_ON_CCIF4_WF2AP_PCCIF_IRQ0_MASK_ADDR \
	(WF2AP_CONN_INFRA_ON_CCIF4_BASE + 0x0018)
#define WF2AP_CONN_INFRA_ON_CCIF4_WF2AP_PCCIF_IRQ1_MASK_ADDR \
	(WF2AP_CONN_INFRA_ON_CCIF4_BASE + 0x001C)
#define WF2AP_CONN_INFRA_ON_CCIF4_WF2AP_PCCIF_DUMMY1_ADDR \
	(WF2AP_CONN_INFRA_ON_CCIF4_BASE + 0x0020)
#define WF2AP_CONN_INFRA_ON_CCIF4_WF2AP_PCCIF_DUMMY2_ADDR \
	(WF2AP_CONN_INFRA_ON_CCIF4_BASE + 0x0024)
#define WF2AP_CONN_INFRA_ON_CCIF4_AP2WF_SHADOW1_ADDR \
	(WF2AP_CONN_INFRA_ON_CCIF4_BASE + 0x0030)
#define WF2AP_CONN_INFRA_ON_CCIF4_AP2WF_SHADOW2_ADDR \
	(WF2AP_CONN_INFRA_ON_CCIF4_BASE + 0x0034)

#ifdef __cplusplus
}
#endif

#endif
