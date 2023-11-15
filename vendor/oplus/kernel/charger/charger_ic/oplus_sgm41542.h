// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2018-2020 Oplus. All rights reserved.
 */

#ifndef __SGM41542_HEADER__
#define __SGM41542_HEADER__

/* Address:00h */
#define REG00_SGM41542_ADDRESS					0x00
#define REG00_SGM41542_SUSPEND_MODE_MASK				BIT(7)
#define REG00_SGM41542_SUSPEND_MODE_DISABLE			0x00
#define REG00_SGM41542_SUSPEND_MODE_ENABLE			BIT(7)

#define REG00_SGM41542_STAT_DIS_MASK				(BIT(6) | BIT(5))
#define REG00_SGM41542_STAT_DIS_ENABLE				0x00
#define REG00_SGM41542_STAT_DIS_DISABLE				(BIT(6) | BIT(5))

#define REG00_SGM41542_INPUT_CURRENT_LIMIT_MASK			(BIT(4) | BIT(3) | BIT(2) | BIT(1) | BIT(0))
#define REG00_SGM41542_INPUT_CURRENT_LIMIT_SHIFT			0
#define REG00_SGM41542_INPUT_CURRENT_LIMIT_OFFSET		100
#define REG00_SGM41542_INPUT_CURRENT_LIMIT_STEP		100
#define REG00_SGM41542_INPUT_CURRENT_LIMIT_MAX		3800
#define REG00_SGM41542_INIT_INPUT_CURRENT_LIMIT_500MA   500
#define REG00_SGM41542_INIT_INPUT_CURRENT_LIMIT_2000MA   2000
#define REG00_SGM41542_INPUT_CURRENT_LIMIT_100MA			0x00
#define REG00_SGM41542_INPUT_CURRENT_LIMIT_300MA		(BIT(1) | BIT(0))
#define REG00_SGM41542_INPUT_CURRENT_LIMIT_500MA		(BIT(2) | BIT(0))
#define REG00_SGM41542_INPUT_CURRENT_LIMIT_900MA		(BIT(3) | BIT(1))
#define REG00_SGM41542_INPUT_CURRENT_LIMIT_1200MA		(BIT(3) | BIT(2))
#define REG00_SGM41542_INPUT_CURRENT_LIMIT_1500MA		(BIT(3) | BIT(2) |BIT(1) | BIT(0))
#define REG00_SGM41542_INPUT_CURRENT_LIMIT_1700MA		(BIT(4) | BIT(0))
#define REG00_SGM41542_INPUT_CURRENT_LIMIT_2000MA		(BIT(4) | BIT(2))
#define REG00_SGM41542_INPUT_CURRENT_LIMIT_3000MA		(BIT(4) | BIT(3) |BIT(2) |BIT(1))

/* Address:01h */
#define REG01_SGM41542_ADDRESS					0x01

#define REG01_SGM41542_PFM_DIS_MASK				BIT(7)
#define REG01_SGM41542_PFM_DIS_ENABLE				0x00
#define REG01_SGM41542_PFM_DIS_DISABLE				BIT(7)

#define REG01_SGM41542_WDT_TIMER_RESET_MASK			BIT(6)
#define REG01_SGM41542_WDT_TIMER_NORMAL				0x00
#define REG01_SGM41542_WDT_TIMER_RESET				BIT(6)

#define REG01_SGM41542_OTG_MASK					BIT(5)
#define REG01_SGM41542_OTG_DISABLE				0x00
#define REG01_SGM41542_OTG_ENABLE				BIT(5)

#define REG01_SGM41542_CHARGING_MASK				BIT(4)
#define REG01_SGM41542_CHARGING_DISABLE				0x00
#define REG01_SGM41542_CHARGING_ENABLE				BIT(4)

#define REG01_SGM41542_SYS_VOL_LIMIT_MASK			(BIT(3) | BIT(2) | BIT(1))
#define REG01_SGM41542_SYS_VOL_LIMIT_2600MV			0x00
#define REG01_SGM41542_SYS_VOL_LIMIT_2800MV			BIT(1)
#define REG01_SGM41542_SYS_VOL_LIMIT_3000MV			BIT(2)
#define REG01_SGM41542_SYS_VOL_LIMIT_3200MV			(BIT(2) | BIT(1))
#define REG01_SGM41542_SYS_VOL_LIMIT_3400MV			BIT(3)
#define REG01_SGM41542_SYS_VOL_LIMIT_3500MV			(BIT(3) | BIT(1))
#define REG01_SGM41542_SYS_VOL_LIMIT_3600MV			(BIT(3) | BIT(2))
#define REG01_SGM41542_SYS_VOL_LIMIT_3700MV			(BIT(3) | BIT(2) | BIT(1))

#define REG01_SGM41542_VBAT_FALLING_MASK				BIT(0)
#define REG01_SGM41542_VBAT_FALLING_3000MV			0x00
#define REG01_SGM41542_VBAT_FALLING_2500MV			BIT(0)

/* Address:02h */
#define REG02_SGM41542_ADDRESS					0x02

#define REG02_SGM41542_OTG_CURRENT_LIMIT_MASK			BIT(7)
#define REG02_SGM41542_OTG_CURRENT_LIMIT_1200MA			0
#define REG02_SGM41542_OTG_CURRENT_LIMIT_2000MA			BIT(7)
#define REG02_SGM41542_BOOSTI_1200 1200

#define REG02_SGM41542_FAST_CHG_CURRENT_LIMIT_MASK		(BIT(5) | BIT(4) | BIT(3) | BIT(2) | BIT(1) | BIT(0))
#define REG02_SGM41542_FAST_CHG_CURRENT_LIMIT_SHIFT		0
#define REG02_SGM41542_FAST_CHG_CURRENT_LIMIT_OFFSET		0
#define REG02_SGM41542_FAST_CHG_CURRENT_LIMIT_STEP		60
#define REG02_SGM41542_FAST_CHG_CURRENT_LIMIT_2000MA		2000

/* Address:03h */
#define REG03_SGM41542_ADDRESS					0x03

#define REG03_SGM41542_PRE_CHG_CURRENT_LIMIT_MASK		(BIT(7) | BIT(6) | BIT(5) | BIT(4))
#define REG03_SGM41542_PRE_CHG_CURRENT_LIMIT_SHIFT		4
#define REG03_SGM41542_PRE_CHG_CURRENT_LIMIT_OFFSET		60
#define REG03_SGM41542_PRE_CHG_CURRENT_LIMIT_STEP		60

#define REG03_SGM41542_TERM_CHG_CURRENT_LIMIT_MASK		(BIT(3) | BIT(2) | BIT(1) | BIT(0))
#define REG03_SGM41542_TERM_CHG_CURRENT_LIMIT_SHIFT		0
#define REG03_SGM41542_TERM_CHG_CURRENT_LIMIT_OFFSET		60
#define REG03_SGM41542_TERM_CHG_CURRENT_LIMIT_STEP		60

/* Address:04h */
#define REG04_SGM41542_ADDRESS					0x04

#define REG04_SGM41542_CHG_VOL_LIMIT_MASK			(BIT(7) | BIT(6) | BIT(5) | BIT(4) | BIT(3))
#define REG04_SGM41542_CHG_VOL_LIMIT_SHIFT			3
#define REG04_SGM41542_CHG_VOL_LIMIT_OFFSET			3856
#define REG04_BQ25601D_CHG_VOL_LIMIT_OFFSET			3847
#define REG04_SGM41542_CHG_VOL_LIMIT_STEP			32

#define REG04_SGM41542_RECHG_THRESHOLD_VOL_MASK			BIT(0)
#define REG04_SGM41542_RECHG_THRESHOLD_VOL_100MV			0x00
#define REG04_SGM41542_RECHG_THRESHOLD_VOL_200MV			BIT(0)

/* Address:05h */
#define REG05_SGM41542_ADDRESS					0x05

#define REG05_SGM41542_TERMINATION_MASK				BIT(7)
#define REG05_SGM41542_TERMINATION_DISABLE			0x00
#define REG05_SGM41542_TERMINATION_ENABLE			BIT(7)

#define REG05_SGM41542_WATCHDOG_TIMER_MASK			(BIT(5) | BIT(4))
#define REG05_SGM41542_WATCHDOG_TIMER_DISABLE			0x00
#define REG05_SGM41542_WATCHDOG_TIMER_40S			BIT(4)
#define REG05_SGM41542_WATCHDOG_TIMER_80S			BIT(5)
#define REG05_SGM41542_WATCHDOG_TIMER_160S			(BIT(5) | BIT(4))

#define REG05_SGM41542_CHG_SAFETY_TIMER_MASK			BIT(3)
#define REG05_SGM41542_CHG_SAFETY_TIMER_DISABLE			0x00
#define REG05_SGM41542_CHG_SAFETY_TIMER_ENABLE			BIT(3)

#define REG05_SGM41542_FAST_CHG_TIMEOUT_MASK			BIT(2)
#define REG05_SGM41542_FAST_CHG_TIMEOUT_7H			0x00
#define REG05_SGM41542_FAST_CHG_TIMEOUT_16H			BIT(2)

/* Address:06h */
#define REG06_SGM41542_ADDRESS					0x06
#define REG06_SGM41542_OVP_MASK					(BIT(7) | BIT(6))
#define REG06_SGM41542_OVP_5P5V					0
#define REG06_SGM41542_OVP_6P5V					BIT(6)
#define REG06_SGM41542_OVP_10P5V					BIT(7)
#define REG06_SGM41542_OVP_14P0V					(BIT(7) | BIT(6))

#define REG06_SGM41542_OTG_VLIM_MASK				(BIT(5) | BIT(4))
#define REG06_SGM41542_OTG_VLIM_5150MV				BIT(5)
#define REG06_SGM41542_OTG_VLIM_5000MV				BIT(4)

#define REG06_SGM41542_VINDPM_MASK				(BIT(3) | BIT(2) | BIT(1) | BIT(0))
#define REG06_SGM41542_VINDPM_STEP_MV				100
#define REG06_SGM41542_VINDPM_OFFSET				3900
#define REG06_SGM41542_VINDPM_SHIFT				0

#define SGM41542_VINDPM_THRESHOLD_3900MV				        3900
#define SGM41542_VINDPM_THRESHOLD_5900MV                        5900
#define SGM41542_VINDPM_THRESHOLD_7500MV				        7500
#define SGM41542_VINDPM_THRESHOLD_10500MV                       10500
#define SGM41542_VINDPM_THRESHOLD_MAX                           12000

/* Address:07h */
#define REG07_SGM41542_ADDRESS					0x07

#define REG07_SGM41542_IINDET_EN_MASK				BIT(7)
#define REG07_SGM41542_IINDET_EN_DET_COMPLETE			0x00
#define REG07_SGM41542_IINDET_EN_FORCE_DET			BIT(7)
#define REG07_SGM41542_BATFET_DIS_MASK				BIT(5)
#define REG07_SGM41542_BATFET_DIS_ON				BIT(5)
#define REG07_SGM41542_BATFET_DIS_OFF				0x00
#define REG07_SGM41542_BATFET_DLY_MASK				BIT(3)
#define REG07_SGM41542_BATFET_DLY_IMMEDIATELY			0x00
#define REG07_SGM41542_BATFET_DLY_DEFAULT			BIT(3)

#define SGM41542_BATFET_RST_ENABLE				1
#define SGM41542_BATFET_RST_DISABLE				0

#define REG07_SGM41542_BATFET_RST_EN_MASK			BIT(2)
#define REG07_SGM41542_BATFET_RST_EN_SHIFT			2

/* Address:08h */
#define REG08_SGM41542_ADDRESS					0x08

#define REG08_SGM41542_VBUS_STAT_MASK				(BIT(7) | BIT(6) | BIT(5))
#define REG08_SGM41542_VBUS_STAT_UNKNOWN				0x00
#define REG08_SGM41542_VBUS_STAT_SDP				BIT(5)
#define REG08_SGM41542_VBUS_STAT_CDP				BIT(6)
#define REG08_SGM41542_VBUS_STAT_DCP				(BIT(6) | BIT(5))
#define REG08_SGM41542_VBUS_STAT_OCP				(BIT(7) | BIT(5))
#define REG08_SGM41542_VBUS_STAT_FLOAT				(BIT(7) | BIT(6))
#define REG08_SGM41542_VBUS_STAT_OTG_MODE			(BIT(7) | BIT(6) | BIT(5))

#define REG08_SGM41542_CHG_STAT_MASK				(BIT(4) | BIT(3))
#define REG08_SGM41542_CHG_STAT_NO_CHARGING			0x00
#define REG08_SGM41542_CHG_STAT_PRE_CHARGING			BIT(3)
#define REG08_SGM41542_CHG_STAT_FAST_CHARGING			BIT(4)
#define REG08_SGM41542_CHG_STAT_CHG_TERMINATION			(BIT(4) | BIT(3))

#define REG08_SGM41542_POWER_GOOD_STAT_MASK			BIT(2)
#define REG08_SGM41542_POWER_GOOD_STAT_NOT_GOOD			0x00
#define REG08_SGM41542_POWER_GOOD_STAT_GOOD			BIT(2)

/* Address:09h */
#define REG09_SGM41542_ADDRESS					0x09

#define REG09_SGM41542_WDT_FAULT_MASK				BIT(7)
#define REG09_SGM41542_WDT_FAULT_NORMAL				0x00
#define REG09_SGM41542_WDT_FAULT_EXPIRATION			BIT(7)

#define REG09_SGM41542_OTG_FAULT_MASK				BIT(6)
#define REG09_SGM41542_OTG_FAULT_NORMAL				0x00
#define REG09_SGM41542_OTG_FAULT_ABNORMAL			BIT(6)

#define REG09_SGM41542_CHG_FAULT_MASK				(BIT(5) | BIT(4))
#define REG09_SGM41542_CHG_FAULT_NORMAL				0x00
#define REG09_SGM41542_CHG_FAULT_INPUT_ERROR			BIT(4)
#define REG09_SGM41542_CHG_FAULT_THERM_SHUTDOWN			BIT(5)
#define REG09_SGM41542_CHG_FAULT_TIMEOUT_ERROR			(BIT(5) | BIT(4))

#define REG09_SGM41542_BAT_FAULT_MASK				BIT(3)
#define REG09_SGM41542_BAT_FAULT_NORMAL				0x00
#define REG09_SGM41542_BAT_FAULT_BATOVP				BIT(3)

#define REG09_SGM41542_NTC_FAULT_MASK				(BIT(2) | BIT(1) | BIT(0))
#define REG09_SGM41542_NTC_FAULT_NORMAL				0x00
#define REG09_SGM41542_NTC_FAULT_WARM				BIT(1)
#define REG09_SGM41542_NTC_FAULT_COOL				(BIT(1) | BIT(0))
#define REG09_SGM41542_NTC_FAULT_COLD				(BIT(2) | BIT(0))
#define REG09_SGM41542_NTC_FAULT_HOT				(BIT(2) | BIT(1))

/* Address:0Ah */
#define REG0A_SGM41542_ADDRESS					0x0A

#define REG0A_SGM41542_BUS_GD_MASK				BIT(7)
#define REG0A_SGM41542_BUS_GD_NO				0x00
#define REG0A_SGM41542_BUS_GD_YES				BIT(7)

#define REG0A_SGM41542_VINDPM_INT_MASK				BIT(1)
#define REG0A_SGM41542_VINDPM_INT_ALLOW				0x00
#define REG0A_SGM41542_VINDPM_INT_NOT_ALLOW			BIT(1)

#define REG0A_SGM41542_IINDPM_INT_MASK				BIT(0)
#define REG0A_SGM41542_IINDPM_INT_ALLOW				0x00
#define REG0A_SGM41542_IINDPM_INT_NOT_ALLOW			BIT(0)

/* Address:0Bh */
#define REG0B_SGM41542_ADDRESS					0x0B

#define REG0B_SGM41542_REG_RST_MASK				BIT(7)
#define REG0B_SGM41542_REG_RST_KEEP				0x00
#define REG0B_SGM41542_REG_RST_RESET				BIT(7)

#define REG0B_SGM41542_PN_MASK				(BIT(6) | BIT(5) | BIT(4) | BIT(3))
#define REG0B_SGM41542_PN				BIT(4)
#define REG0B_SY6974B_PN				BIT(6)

/* Address:0Dh */
#define REG0D_SGM41542_ADDRESS	0x0d

#define REG0D_SGM41542_DP_VSEL_MASK       (BIT(4) | BIT(3))
#define REG0D_SGM41542_DP_VSEL_SHIFT		3
#define REG0D_SGM41542_DP_600MV				0x2
#define REG0D_SGM41542_DM_VSEL_MASK       (BIT(2) | BIT(1))
#define REG0D_SGM41542_DM_VSEL_SHIFT		1
#define REG0D_SGM41542_DPDM_VSEL_MASK     (BIT(4) | BIT(3) | BIT(2) | BIT(1))
#define REG0D_SGM41542_DPDM_VSEL_SHIFT		1
#define REG0D_SGM41542_DP_600MV_DM_HIZ		0x8
#define REG0D_SGM41542_DP_3300MV_DM_600MV	0xe

/* Address:0Eh */
#define REG0E_SGM41542_ADDRESS							0x0E
#define REG0E_SGM41542_REG_INPUT_DET_MASK					BIT(7)

/* Address:0Fh */
#define REG0F_SGM41542_ADDRESS							0x0F
#define REG0F_SGM41542_VINDPM_THRESHOLD_OFFSET_MASK                             GENMASK(1, 0)
#define REG0F_SGM41542_VINDPM_THRESHOLD_OFFSET_SHIFT                            (BIT(1) | BIT(0)))
#define REG0F_SGM41542_VINDPM_THRESHOLD_OFFSET_3900MV				0
#define REG0F_SGM41542_VINDPM_THRESHOLD_OFFSET_5900MV                           BIT(0)
#define REG0F_SGM41542_VINDPM_THRESHOLD_OFFSET_7500MV				BIT(1)
#define REG0F_SGM41542_VINDPM_THRESHOLD_OFFSET_10500MV                          (BIT(1) | BIT(0)))

/* Other */
#define SGM41542_FIRST_REG						        0x00
#define SGM41542_DUMP_MAX_REG						        0x0F
#define SGM41542_LAST_REG						        0x0F
#define SGM41542_REG_NUMBER						        0x15
#define WPC_PRECHARGE_CURRENT					480

enum SGM4154x_VINDPM_OS {
	VINDPM_OS_3900mV,
	VINDPM_OS_5900mV,
	VINDPM_OS_7500mV,
	VINDPM_OS_10500mV,
};

extern int oplus_battery_meter_get_battery_voltage(void);
extern int get_rtc_spare_oplus_fg_value(void);
extern int set_rtc_spare_oplus_fg_value(int value);
extern void mt_set_chargerid_switch_val(int value);
extern int mt_get_chargerid_switch_val(void);
extern void oplus_mt6789_usbtemp_set_cc_open(void);
extern void oplus_mt6789_usbtemp_set_typec_sinkonly(void);
extern void oplus_mt_usb_connect(void);
extern void oplus_mt_usb_disconnect(void);
extern void Charger_Detect_Init(void);
extern void Charger_Detect_Release(void);
extern bool oplus_get_otg_online_status(void);
extern int qpnp_get_battery_voltage(void);
extern int oplus_chg_enable_qc_detect(void);
extern void oplus_get_usbtemp_volt(struct oplus_chg_chip *chip);
extern void oplus_set_typec_sinkonly(void);
extern bool oplus_usbtemp_condition(void);
extern void oplus_set_typec_cc_open(void);
extern void oplus_set_pd_active(int active);
extern int oplus_get_adapter_svid(void);
extern void oplus_wake_up_usbtemp_thread(void);
extern void set_charger_ic(int sel);
extern int qpnp_get_prop_charger_voltage_now(void);
extern int oplus_chg_get_battery_btb_temp_cal(void);
extern void oplus_sgm41542_enable_gpio(bool enable);
extern int get_vbus_voltage(int *val);
#endif /*__SGM41542_HEADER__*/
