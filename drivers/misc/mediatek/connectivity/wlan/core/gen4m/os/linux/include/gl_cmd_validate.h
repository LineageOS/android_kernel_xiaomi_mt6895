/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright (c) 2022 MediaTek Inc.
 */

/*! \file gl_cmd_validate.h
 *   \brief The file contains the declaration of Mediatek private command
 *          and NL80211 string commands, and the declaration of validation
 *          functions.
 */

#ifndef _WSYS_CMD_HANDLER_DRIVER_H
#define _WSYS_CMD_HANDLER_DRIVER_H

/*****************************************************************************
*                    E X T E R N A L   R E F E R E N C E S
******************************************************************************
*/

/*****************************************************************************
*                              C O N S T A N T S
******************************************************************************
*/
/*------------------------------------------------------------------------------
 *  Mediatek ioctl private commnad
 *------------------------------------------------------------------------------
 */
#define CMD_START		"START"
#define CMD_STOP		"STOP"
#define CMD_SCAN_ACTIVE		"SCAN-ACTIVE"
#define CMD_SCAN_PASSIVE	"SCAN-PASSIVE"
#define CMD_RSSI		"RSSI"
#define CMD_LINKSPEED		"LINKSPEED"
#define CMD_RXFILTER_START	"RXFILTER-START"
#define CMD_RXFILTER_STOP	"RXFILTER-STOP"
#define CMD_RXFILTER_ADD	"RXFILTER-ADD"
#define CMD_RXFILTER_REMOVE	"RXFILTER-REMOVE"
#define CMD_BTCOEXSCAN_START	"BTCOEXSCAN-START"
#define CMD_BTCOEXSCAN_STOP	"BTCOEXSCAN-STOP"
#define CMD_BTCOEXMODE		"BTCOEXMODE"
#define CMD_SETSUSPENDOPT	"SETSUSPENDOPT"
#define CMD_SETSUSPENDMODE	"SETSUSPENDMODE"
#define CMD_P2P_DEV_ADDR	"P2P_DEV_ADDR"
#define CMD_SETFWPATH		"SETFWPATH"
#define CMD_SETBAND		"SETBAND"
#define CMD_GETBAND		"GETBAND"
#define CMD_AP_START		"AP_START"

#if CFG_SUPPORT_NAN
#define CMD_NAN_START "NAN_START"
#define CMD_NAN_GET_MASTER_IND "NAN_GET_MASTER_IND"
#define CMD_NAN_GET_RANGE "NAN_GET_RANGE"
#define CMD_FAW_RESET "FAW_RESET"
#define CMD_FAW_CONFIG "FAW_CONFIG"
#define CMD_FAW_APPLY "FAW_APPLY"
#endif

#if CFG_SUPPORT_QA_TOOL
#define CMD_GET_RX_STATISTICS	"GET_RX_STATISTICS"
#endif
#define CMD_GET_STAT		"GET_STAT"
#define CMD_GET_BSS_STATISTICS	"GET_BSS_STATISTICS"
#define CMD_GET_STA_STATISTICS	"GET_STA_STATISTICS"
#define CMD_GET_WTBL_INFO	"GET_WTBL"
#define CMD_GET_MIB_INFO	"GET_MIB"
#define CMD_GET_STA_INFO	"GET_STA"
#define CMD_SET_FW_LOG		"SET_FWLOG"
#define CMD_GET_QUE_INFO	"GET_QUE"
#define CMD_GET_MEM_INFO	"GET_MEM"
#define CMD_GET_HIF_INFO	"GET_HIF"
#define CMD_GET_TP_INFO		"GET_TP"
#define CMD_GET_STA_KEEP_CNT    "KEEPCOUNTER"
#define CMD_STAT_RESET_CNT      "RESETCOUNTER"
#define CMD_STAT_NOISE_SEL      "NOISESELECT"
#define CMD_STAT_GROUP_SEL      "GROUP"

#define CMD_SET_TXPOWER			"SET_TXPOWER"
#define CMD_COUNTRY			"COUNTRY"
#define CMD_CSA				"CSA"
#define CMD_GET_COUNTRY			"GET_COUNTRY"
#define CMD_GET_CHANNELS		"GET_CHANNELS"
#define CMD_P2P_SET_NOA			"P2P_SET_NOA"
#define CMD_P2P_GET_NOA			"P2P_GET_NOA"
#define CMD_P2P_SET_PS			"P2P_SET_PS"
#define CMD_SET_AP_WPS_P2P_IE		"SET_AP_WPS_P2P_IE"
#define CMD_SETROAMMODE			"SETROAMMODE"
#define CMD_MIRACAST			"MIRACAST"
#define CMD_SETCASTMODE			"SET_CAST_MODE"

#if (CFG_SUPPORT_DFS_MASTER == 1)
#define CMD_SET_DFS_CHN_AVAILABLE	"SET_DFS_CHN_AVAILABLE"
#define CMD_SHOW_DFS_STATE		"SHOW_DFS_STATE"
#define CMD_SHOW_DFS_HELP		"SHOW_DFS_HELP"
#define CMD_SHOW_DFS_CAC_TIME		"SHOW_DFS_CAC_TIME"
#define CMD_SET_DFS_RDDREPORT		"RDDReport"
#define CMD_SET_DFS_RADARMODE		"RadarDetectMode"
#define CMD_SET_DFS_RADAREVENT		"RadarEvent"
#endif
#if CFG_SUPPORT_IDC_CH_SWITCH
#define CMD_SET_IDC_BMP		"SetIdcBmp"
#endif

#define CMD_PNOSSIDCLR_SET	"PNOSSIDCLR"
#define CMD_PNOSETUP_SET	"PNOSETUP "
#define CMD_PNOENABLE_SET	"PNOFORCE"
#define CMD_PNODEBUG_SET	"PNODEBUG"
#define CMD_WLS_BATCHING	"WLS_BATCHING"

#define CMD_OKC_SET_PMK		"SET_PMK"
#define CMD_OKC_ENABLE		"OKC_ENABLE"

#define CMD_SETMONITOR		"MONITOR"

#define CMD_GET_CH_RANK_LIST	"GET_CH_RANK_LIST"
#define CMD_GET_CH_DIRTINESS	"GET_CH_DIRTINESS"

#if CFG_CHIP_RESET_HANG
#define CMD_SET_RST_HANG                 "RST_HANG_SET"

#define CMD_SET_RST_HANG_ARG_NUM		2
#endif


#define CMD_EFUSE		"EFUSE"

#if (CFG_SUPPORT_TWT == 1)
#define CMD_SET_TWT_PARAMS	"SET_TWT_PARAMS"
#endif

#define CMD_CCCR		"CCCR"

/* miracast related definition */
#define MIRACAST_MODE_OFF	0
#define MIRACAST_MODE_SOURCE	1
#define MIRACAST_MODE_SINK	2

#ifndef MIRACAST_AMPDU_SIZE
#define MIRACAST_AMPDU_SIZE	8
#endif

#ifndef MIRACAST_MCHAN_ALGO
#define MIRACAST_MCHAN_ALGO     1
#endif

#ifndef MIRACAST_MCHAN_BW
#define MIRACAST_MCHAN_BW       25
#endif

#define	CMD_BAND_TYPE_AUTO	0
#define	CMD_BAND_TYPE_5G	1
#define	CMD_BAND_TYPE_2G	2
#define	CMD_BAND_TYPE_ALL	3

/* Mediatek private command */
#define CMD_SET_MCR		"SET_MCR"
#define CMD_GET_MCR		"GET_MCR"
#define CMD_SET_NVRAM	"SET_NVRAM"
#define CMD_GET_NVRAM	"GET_NVRAM"
#define CMD_SET_DRV_MCR		"SET_DRV_MCR"
#define CMD_GET_DRV_MCR		"GET_DRV_MCR"
#define CMD_SET_SW_CTRL	        "SET_SW_CTRL"
#define CMD_GET_SW_CTRL         "GET_SW_CTRL"
#define CMD_SET_CFG             "SET_CFG"
#define CMD_GET_CFG             "GET_CFG"
#define CMD_SET_EM_CFG          "SET_EM_CFG"
#define CMD_GET_EM_CFG          "GET_EM_CFG"
#define CMD_SET_CHIP            "SET_CHIP"
#define CMD_GET_CHIP            "GET_CHIP"
#define CMD_SET_DBG_LEVEL       "SET_DBG_LEVEL"
#define CMD_GET_DBG_LEVEL       "GET_DBG_LEVEL"
#define CMD_ADD_TS		"addts"
#define CMD_DEL_TS		"delts"
#define CMD_DUMP_TS		"dumpts"
#define CMD_RM_IT		"RM-IT"
#define CMD_DUMP_UAPSD		"dumpuapsd"
#define CMD_FW_EVENT		"FW-EVENT "
#define CMD_GET_WIFI_TYPE	"GET_WIFI_TYPE"
#define CMD_SET_PWR_CTRL        "SET_PWR_CTRL"
#define PRIV_CMD_SIZE 512
#define CMD_SET_FIXED_RATE      "FixedRate"
#define CMD_GET_VERSION         "VER"
#define CMD_SET_TEST_MODE	"SET_TEST_MODE"
#define CMD_SET_TEST_CMD	"SET_TEST_CMD"
#define CMD_GET_TEST_RESULT	"GET_TEST_RESULT"
#define CMD_GET_STA_STAT        "STAT"
#define CMD_GET_STA_STAT2       "STAT2"
#define CMD_GET_STA_RX_STAT	"RX_STAT"
#define CMD_SET_ACL_POLICY      "SET_ACL_POLICY"
#define CMD_ADD_ACL_ENTRY       "ADD_ACL_ENTRY"
#define CMD_DEL_ACL_ENTRY       "DEL_ACL_ENTRY"
#define CMD_SHOW_ACL_ENTRY      "SHOW_ACL_ENTRY"
#define CMD_CLEAR_ACL_ENTRY     "CLEAR_ACL_ENTRY"
#define CMD_SET_RA_DBG		"RADEBUG"
#define CMD_SET_FIXED_FALLBACK	"FIXEDRATEFALLBACK"
#define CMD_GET_STA_IDX         "GET_STA_IDX"
#define CMD_GET_TX_POWER_INFO   "TxPowerInfo"
#define CMD_TX_POWER_MANUAL_SET "TxPwrManualSet"
#define CMD_GET_HAPD_CHANNEL       "HAPD_GET_CHANNEL"

#if (CFG_SUPPORT_POWER_THROTTLING == 1)
#define CMD_SET_PWR_LEVEL	"SET_PWR_LEVEL"
#define CMD_SET_PWR_TEMP	"SET_PWR_TEMP"
#define CMD_THERMAL_PROTECT_ENABLE	"thermal_protect_enable"
#define CMD_THERMAL_PROTECT_DISABLE	"thermal_protect_disable"
#define CMD_THERMAL_PROTECT_DUTY_CFG	"thermal_protect_duty_cfg"
#define CMD_THERMAL_PROTECT_STATE_ACT	"thermal_protect_state_act"
#endif

#define CMD_SET_USE_CASE	"SET_USE_CASE"

#if (CFG_SUPPORT_ICS == 1)
#define CMD_SET_SNIFFER         "SNIFFER"
#endif /* CFG_SUPPORT_ICS */

#ifdef CFG_SUPPORT_SNIFFER_RADIOTAP
#define CMD_SET_MONITOR         "MONITOR"
#endif

/* neptune doens't support "show" entry, use "driver" to handle
 * MU GET request, and MURX_PKTCNT comes from RX_STATS,
 * so this command will reuse RX_STAT's flow
 */
#define CMD_GET_MU_RX_PKTCNT	"hqa_get_murx_pktcnt"
#define CMD_RUN_HQA	"hqa"
#define CMD_CALIBRATION	"cal"

#if CFG_WOW_SUPPORT
#define CMD_WOW_START		"WOW_START"
#define CMD_SET_WOW_ENABLE	"SET_WOW_ENABLE"
#define CMD_SET_WOW_PAR		"SET_WOW_PAR"
#define CMD_SET_WOW_UDP		"SET_WOW_UDP"
#define CMD_SET_WOW_TCP		"SET_WOW_TCP"
#define CMD_GET_WOW_PORT	"GET_WOW_PORT"
#endif
#define CMD_SET_ADV_PWS		"SET_ADV_PWS"
#define CMD_SET_MDTIM		"SET_MDTIM"

#define CMD_SET_DBDC		"SET_DBDC"
#define CMD_SET_STA1NSS		"SET_STA1NSS"

#define CMD_SET_AMPDU_TX        "SET_AMPDU_TX"
#define CMD_SET_AMPDU_RX        "SET_AMPDU_RX"
#define CMD_SET_BF              "SET_BF"
#define CMD_SET_NSS             "SET_NSS"
#define CMD_SET_AMSDU_TX        "SET_AMSDU_TX"
#define CMD_SET_AMSDU_RX        "SET_AMSDU_RX"
#define CMD_SET_QOS             "SET_QOS"
#if (CFG_SUPPORT_802_11AX == 1)
#define CMD_SET_BA_SIZE         "SET_BA_SIZE"
#define CMD_SET_RX_BA_SIZE      "SET_RX_BA_SIZE"
#define CMD_SET_TX_BA_SIZE      "SET_TX_BA_SIZE"
#define CMD_SET_TP_TEST_MODE    "SET_TP_TEST_MODE"
#define CMD_SET_MUEDCA_OVERRIDE "MUEDCA_OVERRIDE"
#define CMD_SET_TX_MCSMAP       "SET_MCS_MAP"
#define CMD_SET_TX_PPDU         "TX_PPDU"
#define CMD_SET_LDPC            "SET_LDPC"
#define CMD_FORCE_AMSDU_TX		"FORCE_AMSDU_TX"
#define CMD_SET_OM_CH_BW        "SET_OM_CHBW"
#define CMD_SET_OM_RX_NSS       "SET_OM_RXNSS"
#define CMD_SET_OM_TX_NSS       "SET_OM_TXNSTS"
#define CMD_SET_OM_MU_DISABLE   "SET_OM_MU_DISABLE"
#define CMD_SET_TX_OM_PACKET    "TX_OM_PACKET"
#define CMD_SET_TX_CCK_1M_PWR   "TX_CCK_1M_PWR"
#define CMD_SET_PAD_DUR	        "SET_PAD_DUR"
#endif /* CFG_SUPPORT_802_11AX == 1 */

#define CMD_GET_CNM		"GET_CNM"
#define CMD_GET_CAPAB_RSDB "GET_CAPAB_RSDB"

#ifdef UT_TEST_MODE
#define CMD_RUN_UT		"UT"
#endif

#if CFG_SUPPORT_ADVANCE_CONTROL
#define CMD_SW_DBGCTL_ADVCTL_SET_ID 0xa1260000
#define CMD_SW_DBGCTL_ADVCTL_GET_ID 0xb1260000
#define CMD_SET_NOISE		"SET_NOISE"
#define CMD_GET_NOISE           "GET_NOISE"
#define CMD_SET_POP		"SET_POP"
#define CMD_SET_ED		"SET_ED"
#define CMD_SET_PD		"SET_PD"
#define CMD_SET_MAX_RFGAIN	"SET_MAX_RFGAIN"
#endif

#if CFG_SUPPORT_WIFI_SYSDVT
#define CMD_WIFI_SYSDVT         "DVT"
#define CMD_SET_TXS_TEST        "TXS_TEST"
#define CMD_SET_TXS_TEST_RESULT "TXS_RESULT"
#define CMD_SET_RXV_TEST        "RXV_TEST"
#define CMD_SET_RXV_TEST_RESULT        "RXV_RESULT"
#if CFG_TCP_IP_CHKSUM_OFFLOAD
#define CMD_SET_CSO_TEST        "CSO_TEST"
#endif /* CFG_TCP_IP_CHKSUM_OFFLOAD */
#define CMD_SET_TX_TEST          "TX_TEST"
#define CMD_SET_TX_AC_TEST       "TX_AC_TEST"
#define CMD_SET_SKIP_CH_CHECK   "SKIP_CH_CHECK"

#if (CFG_SUPPORT_DMASHDL_SYSDVT)
#define CMD_SET_DMASHDL_DUMP    "DMASHDL_DUMP_MEM"
#define CMD_SET_DMASHDL_DVT_ITEM "DMASHDL_DVT_ITEM"
#endif /* CFG_SUPPORT_DMASHDL_SYSDVT */
#endif /* CFG_SUPPORT_WIFI_SYSDVT */

#define CMD_SET_SW_AMSDU_NUM      "SET_SW_AMSDU_NUM"
#define CMD_SET_SW_AMSDU_SIZE      "SET_SW_AMSDU_SIZE"

#define CMD_SET_DRV_SER           "SET_DRV_SER"

#define CMD_GET_WFDMA_INFO      "GET_WFDMA_INFO"
#define CMD_GET_PLE_INFO        "GET_PLE_INFO"
#define CMD_GET_PSE_INFO        "GET_PSE_INFO"
#define CMD_GET_DMASCH_INFO     "GET_DMASCH_INFO"
#define CMD_SHOW_TXD_INFO       "SHOW_TXD_INFO"

#if (CFG_SUPPORT_CONNAC2X == 1)
#define CMD_GET_FWTBL_UMAC      "GET_UMAC_FWTBL"
#endif /* CFG_SUPPORT_CONNAC2X == 1 */
/* Debug for consys */
#define CMD_DBG_SHOW_TR_INFO			"show-tr"
#define CMD_DBG_SHOW_PLE_INFO			"show-ple"
#define CMD_DBG_SHOW_PSE_INFO			"show-pse"
#define CMD_DBG_SHOW_CSR_INFO			"show-csr"
#define CMD_DBG_SHOW_DMASCH_INFO		"show-dmasch"

#if CFG_SUPPORT_EASY_DEBUG
#define CMD_FW_PARAM				"set_fw_param"
#endif /* CFG_SUPPORT_EASY_DEBUG */

#define CMD_SET_WHOLE_CHIP_RESET "SET_WHOLE_CHIP_RESET"
#define CMD_SET_WFSYS_RESET      "SET_WFSYS_RESET"

#define CMD_SET_SW_WFDMA         "SET_SW_WFDMA"

/*------------------------------------------------------------------------------
 *  nl80211 vendor string command
 *------------------------------------------------------------------------------
 */
#define CMD_TDLS_PS				"tdls-ps"
#define CMD_NEIGHBOR_REQUEST			"NEIGHBOR-REQUEST"
#define CMD_BSS_TRAN_QUERY			"BSS-TRANSITION-QUERY"
#define CMD_OSHARE				"OSHAREMOD"
#define CMD_EXAMPLE				"CMD_EXAMPLE"
#define CMD_ADD_ROAM_SCN_CHNL			"ADDROAMSCANCHANNELS_LEGACY"
#define CMD_SET_AX_BLACKLIST                    "SET_AX_BLACKLIST"
#ifdef CFG_SUPPORT_ANT_SWAP
#define CMD_ANT_SWAP_WEAK_RCPI			"AntSwapWeakRcpi"
#define CMD_ANT_SWAP_DELTA_RCPI			"AntSwapDeltaRcpi"
#define CMD_ANT_SWAP_WEAK_SLOT			"AntSwapWeakSlot"
#define CMD_ANT_SWAP_EX_SLOT_INC		"AntSwapExSlotInc"
#define CMD_ANT_SWAP_ANT_MODE			"AntSwapAntMode"
#endif
#if CFG_SUPPORT_NCHO
/* NCHO related command definition. Setting by supplicant */
#define CMD_NCHO_ROAM_TRIGGER_GET		"GETROAMTRIGGER"
#define CMD_NCHO_ROAM_TRIGGER_SET		"SETROAMTRIGGER"
#define CMD_NCHO_ROAM_DELTA_GET			"GETROAMDELTA"
#define CMD_NCHO_ROAM_DELTA_SET			"SETROAMDELTA"
#define CMD_NCHO_ROAM_SCAN_PERIOD_GET		"GETROAMSCANPERIOD"
#define CMD_NCHO_ROAM_SCAN_PERIOD_SET		"SETROAMSCANPERIOD"
#define CMD_NCHO_ROAM_SCAN_CHANNELS_GET		"GETROAMSCANCHANNELS"
#define CMD_NCHO_ROAM_SCAN_CHANNELS_SET		"SETROAMSCANCHANNELS"
#define CMD_NCHO_ROAM_SCAN_CHANNELS_ADD		"ADDROAMSCANCHANNELS"
#define CMD_NCHO_ROAM_SCAN_CONTROL_GET		"GETROAMSCANCONTROL"
#define CMD_NCHO_ROAM_SCAN_CONTROL_SET		"SETROAMSCANCONTROL"
#define CMD_NCHO_MODE_SET			"SETNCHOMODE"
#define CMD_NCHO_MODE_GET			"GETNCHOMODE"
#endif

/*****************************************************************************
*                             D A T A   T Y P E S
******************************************************************************
*/
typedef int(*PRIV_CMD_FUNCTION) (
	struct net_device *prNetDev,
	char *pcCommand,
	int i4TotalLen);

typedef int(*STR_CMD_FUNCTION) (
	struct wiphy *wiphy,
	struct wireless_dev *wdev,
	char *pcCommand,
	int i4TotalLen);

enum ARG_NUM_POLICY {
	VERIFY_MIN_ARG_NUM	= 0,
	VERIFY_EXACT_ARG_NUM	= 1,
};

struct CMD_VALIDATE_POLICY {
	uint8_t  type;
	uint16_t len;
	uint32_t min;
	uint32_t max;
};

struct PRIV_CMD_HANDLER {
	uint8_t *pcCmdStr;
	PRIV_CMD_FUNCTION pfHandler;
	enum ARG_NUM_POLICY argPolicy;
	uint8_t ucArgNum; /* include CMD */
	struct CMD_VALIDATE_POLICY *policy;
	uint32_t u4PolicySize;
};

struct STR_CMD_HANDLER {
	uint8_t *pcCmdStr;
	STR_CMD_FUNCTION pfHandler;
	enum ARG_NUM_POLICY argPolicy;
	uint8_t ucArgNum; /* include CMD */
	struct CMD_VALIDATE_POLICY *policy;
	uint32_t u4PolicySize;
};

/*******************************************************************************
 *                  F U N C T I O N   D E C L A R A T I O N S
 *******************************************************************************
 */
PRIV_CMD_FUNCTION get_priv_cmd_handler(uint8_t *cmd, int32_t len);
STR_CMD_FUNCTION get_str_cmd_handler(uint8_t *cmd, int32_t len);

#endif /* _WSYS_CMD_HANDLER_DRIVER_H */
