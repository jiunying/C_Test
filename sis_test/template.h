//-------------------------------------
// FWinfo
//-------------------------------------
#define BUILD_COUNT 0
#define TASK_ID 0000
#define FW_SETTING_ID 0000
//#define _OFFLINE
#define MAX_W_SIZE 50
#define MAX_H_SIZE 50
#define MAX_WH_SIZE 100
//#define _TOUCH_PID_LOCK
#define TOUCH_PID 0x09050009
//#define _PEN_PID_LOCK
//#define _CS_PID_LOCK

//-------------------------------------
// SelfSense
//-------------------------------------
#define DMA_QRX_ENABLE         0
#define DMA_QRX_16BIT          1
#define SENSING_EN_QRX       0x0
#define SENSING_EN_FRX       0x0

#define QM_MODE             0x00
#define QM_LOOP             0x04
#define QM_RX_VREF_SEL      0x05

#define HV_R_CV             0x10
#define HV_R_CUR          0x0100

//#define _INCLUDE_SELF_OPEN_SHORT
#define SELF_REF_CHARGETIME 0xf00
#define TENDER_CHARGE          0
//#define _INCLUDE_SELF_OPEN_SHORT_DEBUG

//-------------------------------------
// MutualSense
//-------------------------------------
#define DMA_MRX_16BIT 1
#define DMA_MRX_AUTO_DIFF 0
#define DMA_MRX_RESULT_SEL 4
#define DMA_MRX_CONST 0x1

//#define _MUTUAL_DIF_16BIT_EN
#define SENSING_EN_MRX 0x1

#define TPCMQ_EN   0x1
#define DIFF_MODE  0x1

//#define _AUTO_HW_DIFF
//#define _USE_SIS9202
//#define _USE_SIS9203

#define LDO_R 5
#define MM_INT_NEG 1
#define MM_INT_POS 0
#define MM_INT_ILOOP 3

#define TX_MUT_S3_CYCLE_0  110
#define TX_MUT_D3_CYCLE_0  110

#define MM_PGA_GCF 0x6

#define RX_CYCLE 0x20
#define RX_PHASE 0x10

//#define _TX_NUM_OVER_128

//-------------------------------------
// Cali
//-------------------------------------
//#define _MEAN_SHIFT_BASE
#define MEAN_SHIFT_NOW_RATIO 8
#define MEAN_SHIFT_PRE_RATIO 8
#define MEAN_SHIFT_BASE_NUM  5
//#define _CALI_ENABLE
#define MAX_CALI_NUM 20
//#define _USE_CYCLE_ARRAY
#define RX_CYCLE_MAX 0x50
#define RX_CYCLE_MIN 0x1
#define RX_CYCLE_STP 0x2
#define TARGET_VOLTAGE 0xc00
#define TARGET_RANGE_HI 0x50
#define TARGET_RANGE_LO 0x50
#define CALI_PGA_GCF 0xf
#define CALI_ILOOP 0
//#define _DYN_LDO_R
#define CALI_LDO_R 12
//#define _CYCLE_NML_WGHT_ADJ_EN
#define CYCLE_PLS_CNT 0
#define CYCLE_MNS_CNT 0
#define CYCLE_NMLZTN 0
#define CYCLE_NML_WGHT 1
#define CYCLE_NML_DVSR 1
//-------------------------------------
// Multichip
//-------------------------------------
//#define   _MULTI_CHIP_EN
//#define   _MTU
//#define   _MC_NEW_STRUCT
//#define   _SPI_MST_SLV_PARAMETER_SYNC
//#define   _PARAMETER_SYNC_FOR_MST_RECEIVER
//#define   _SPI_MST_EN
#define     SPI_SLV_CS_NUM     0x1
#define     SPI_SLV_NUM        0x1
#define     MC_TX_NUM          60
#define     MC_RX_NUM          100
#define     MC_SLV0_START      1
#define     MC_SLV0_RX_NUM     40
#define     MC_SLV1_RX_NUM     40
#define     MUT_MC_AS_SLV      0x0
#define     MUT_MC_SLV_CH      0x0
#define     MUT_MC_SYNC_DIV    0x4
#define     MUT_MC_SYNC_SCYC   0xff0
#define     MUT_MC_SYNC_ECYC   0xf0
//#define  _SPI_SLV_EN
#define     SPI_SLV_CS         0x1
#define     SPI_SLV_INDEX      0x1
#define     _AUTO_DETECT_SPI_SLV_INDEX
//#define   _DIF_TRANSMISSION
#define     TRANSMIT_LINE_NUM  2
//#define   _SMART_BOUNDARY
#define     _BOUNDARY_THRESHOLD
//#define   _POINT_COLLECTION
//#define   _POINT_MERGE
#define     POINT_MERGE_RANGE  96

//-------------------------------------
// Spi
//-------------------------------------
#define SPI_MSTCLK_RATE_MHZ 24
#define SPI_IOCR_MSCS0_LEVEL 3
#define SPI_IOCR_MSCS1_LEVEL 3
#define SPI_IOCR_MSCS2_LEVEL 3
#define SPI_IOCR_MSCK_LEVEL 3
#define SPI_IOCR_MSMISO_LEVEL 3
#define SPI_IOCR_MSMOSI_LEVEL 3

//-------------------------------------
// Timer
//-------------------------------------
#define _TIMER0
#define TIMER0_UNIT_LV0 0x0909092f
//#define _TIMER1
#define TIMER1_UNIT_LV0 0x0000092f
//#define _TIMER_ISR
//#define _WATCHDOG
//#define _TIMECHART
#define   _TIME_OUT_EN
#define   TIME_OUT_COUNT    10000
//-------------------------------------
// MutDetect
//-------------------------------------
#define MAX_TOUCH_NUM 10
#define MUT_THRESHOLD   200
#define MUT_WEIGHT_THRESHOLD    400
//#define _MUT_FIRST_POINT
#define MUT_FIRST_THRESHOLD 300
#define MUT_FIRST_WEIGHT_THRESHOLD 400
//#define _HIGH_PASS_FILTER
#define HIGH_PASS_THRESHOLD 100
//#define _DEHIGH_FILTER
#define DEHIGH_MULTIPLER 1
#define DEHIGH_SHIFT 0
//#define _DIFLOOP_FORWARDING
//#define _ULTRA_DIFMEAN
//#define _DIFMEAN_X
//#define _DIFMEAN_Y
//#define _CROSS_TYPE_MAX
#define CROSS_TYPE_MAX_MULTIPLE 0
#define CROSS_TYPE_MAX_DIVISOR 1
//#define _PARTIAL_CONVERT
#define PARTIAL_THRESHOLD 16
#define PARTIAL_CNT 1
//#define _DIFLOOP_UDM_EN
#define DIFLOOP_UDM_MODIFY_MEAN_S 150
#define DIFLOOP_UDM_MODIFY_MEAN_N 250
//#define _EFT_NOISE_CALCULATE
#define EFT_NOISE_HI 5
#define EFT_NOISE_LO 5
#define EFT_NOISE_DETECT_CNT 15
#define EFT_THRESHOLD_HIGH 100

//-------------------------------------
// SenseFlow
//-------------------------------------
//#define _AB_FLAG
//#define _AB2
#define AB_FLAG_EN 0
//#define _DATA_REMAP_BY_TOOL
//#define _DUMMY_TX
#define DUMMY_TX_NUM 25
//#define _RECOVER_BLOCK_EN
//#define _RECOVER_RECT_LIST_EN
#define RECOVER_BLOCK_POS_TH 16
#define RECOVER_BLOCK_NEG_TH 16
//#define _OVERSAMPLE_ENABLE
#define OVERSAMPLE_NUM 2

//-------------------------------------
// Intp
//-------------------------------------
#define INTP_COM_SQUARE_EN 1
//#define _WEIGHT_CALCULATION_II
#define WEIGHT_CAL_II_M 3
#define WEIGHT_CAL_II_N 1
#define _ADAPTIVE_INTERPOLATION
#define INTERPOLATIONTHRESHOLD  30
#define INTP_X_SIZE 3
#define INTP_Y_SIZE 3
//#define _INTP_ALG_EN
//#define _INTPALG_NLGM_EN
#define INTPALG_NLGM_SX 47
#define INTPALG_NLGM_SY 68
//#define _GAUSSIAN_COORD_CALCULATION
//#define _GAUSSIAN_FIX_SIGMA
#define GAUSSIAN_FIX_SIGMA_VALUE 600


//-------------------------------------
// MutDebug
//-------------------------------------
//#define _MUT_DEBUG
#define MUT_DEBUG_TYPE 2
//#define _DEBUG_USE_INT
//#define _MUT_DEBUG_BOUNDARY
#define MUT_BOUNDARY_SLV_NUM 1

//-------------------------------------
// PowerSave
//-------------------------------------
//#define _POWERSAVE
#define POWERSAVE_IDLE_FRAME 2000
#define POWERSAVE_SLOW_SCAN_RATE 60
#define POWERSAVE_ACTIVE_SCAN_RATE 120

//-------------------------------------
// Thread
//-------------------------------------
//#define _THREAD

//-------------------------------------
// Palm
//-------------------------------------
//#define _PALM_REJECT
#define PALM_REJECT_EN 0
#define CHECKPALMNUM 0
#define PALM_IGNORE_TP_CNT 8
#define REJECT_THRESHOLD 10
#define REJECT_RANGE 10
#define REJECT_2ND_THRESHOLD 10
#define REJECT_2ND_RANGE 10
#define EXPAND_RANGE 5
#define PALM_THRESHOLD_EN 0
#define PALM_THRESHOLD_HI 10
#define PALM_THRESHOLD_WEIGHT 10
//#define _PALM_TREE_SELECT
//#define _TRAINING_DATA_DUMP
#define TRAINING_DATA_DUMP_CLASS 0
//#define _HOLD_FIN_PALM_AREA
//#define _MERGE_PALM_OUTER_RANGE_EN
#define FIRST_OUTER_RANGE_BLOB_THRESHOLD   20
#define MERGE_PALM_OUTER_RANGE_X 2
#define MERGE_PALM_OUTER_RANGE_Y 2
//#define _STEP_PALM_OUTER_RANGE
#define SECOND_OUTER_RANGE_BLOB_THRESHOLD  16
#define SECOND_MERGE_PALM_OUTER_RANGE_X 1
#define SECOND_MERGE_PALM_OUTER_RANGE_Y 1


//#define _DIFMEAN_DISCARD_PALM_AREA
//#define _BOUNDARY_PALM_MERGE
//#define _PALM_TRANSMISSION_IN_MUTUAL_TP
//#define _PRE_PALM_BIRTH_EN
#define PRE_PALM_AREA 20
#define PRE_PALM_BIRTH_COUNTER 7
//#define _AFTER_PALM_BIRTH_EN
#define AFTER_PALM_BIRTH_COUNTER 7

//-------------------------------------
// InitPalm
//-------------------------------------
//#define _DET_INIT_TOUCH
#define REF_BASE_DIF_HI  30
#define REF_BASE_DIF_LO  30
#define BYPASS_OVERLO_AREA 45
#define BYPASS_OVERHI_AREA 45
#define DET_INIT_TOUCH_THRESHOLD 20
#define DET_INIT_TOUCH_RANGE 15
#define DET_INIT_TOUCH_INTERVAL 50
#define DELAY_LEAVE_FRAME_CNT 51
#define DET_INIT_TOUCH_THRESHOLD_HIGH 30
#define DET_INIT_DIFFTIAL_NUM  10

//-------------------------------------
// Water
//-------------------------------------
//#define _WATER_PROOF_LITE
#define WATER_PROOF_LITE_EN 0
#define WATER_PLUS_THRSHOLD 100
#define WATER_MINUS_THRSHOLD 100
#define WATER_DETECT_AREA 10
#define WATER_DETECT_CNT 20
#define WATER_THRESHOLD_EN 0
#define WATER_THRESHOLD_HI 10
#define WATER_THRESHOLD_WEIGHT 10

//-------------------------------------
// USB
//-------------------------------------
#define _USB
//#define _USB_INTIN_ISR
#define _SELECTIVE_SUSPEND
#define _REMOTE_WAKEUP
#define _CDC_USB_TO_UART
//#define _INIT_SET_CDC_MODE
#define USB_VID 0x0457
#define USB_PID 0x6596
#define USB_REV 0x0000
//#define _USB_MOUSE_EN
//#define _USB_PEN_EN
//#define _AREA_INFO
//#define _AREA_WIDTH_HEIGHT
//#define _PRESSURE_INFO
#define PRESSURE_MAX 1024
#define _SCAN_TIME
#define _ALL_DATA_IN_ONE_PACKET
//#define _TOUCH_CONFIDENCE
#define TOUCH_CONFIDENCE_EN 0
//#define _817_DATA_FORMAT
//#define _USB_SERIAL_NUMBER

//-------------------------------------
// I2C
//-------------------------------------
//#define _I2C
#define I2C_SLV_ADDR 0x5c
//#define _I2C_INT
#define I2C_INT_TYPE 0
//#define _HID_OVER_I2C
#define HIDI2C_VID 0x0457
#define HIDI2C_PID 0x0819
#define HIDI2C_REV 0x0000

//-------------------------------------
// Phase3
//-------------------------------------
#define _PHASE3
#define _GUITAR_ID
//#define _BOUNDARY_DRAW
#define BOUNDARY_DRAW_BOUNDARY 256
#define BOUNDARY_DRAW_VELOCITY 0
//#define _EXCEED_TP_REJECT
#define EXCEED_TP_NUM 17
#define _STEP_AA_CUT_OFF
#define AACUTOFFNUM 10
#define BIRTH_COUNTER 2
#define DEATH_COUNTER 5
//#define _STEP_BIRTH
#define STEP_BIRTH_TPNUM_1 2
#define STEP_BIRTH_TPNUM_2 3
#define STEP_BIRTH_1 1
#define STEP_BIRTH_2 5
#define STEP_BIRTH_3 8
//#define _HCK_STEP_DEATH
#define STEP_DEATH_TPNUM 2
#define NORMALDEATH 5
#define STEP_DEATH 1
#define MAX_TP 10
#define PREDICT_POS_MULTIPLE 5
#define LINK_DISTANCE_MULTIPLE 7
#define LINK_DISTANCE_BASE 350
#define STICKY_ENABLE 1
#define STICKY_COUNTER 5
#define STICKY_DISTANCE 64
#define STICKY_WEIGHT 16
#define STICKY_SHIFT_NUM 4
//#define _STEP_STICKY
#define STICKYCOUNTERSTEP1 5
#define STICKYCOUNTERSTEP2 10
#define STICKYCOUNTERSTEP3 5
#define STICKYTPSTEP 0x32
//#define _STEP_STICKY_DISTANCE
#define STICKYSTEPDISTANCE1 64
#define STICKYSTEPDISTANCE2 16
#define STICKYSTEPDISTANCE3 64
//#define _STICKY_FIRST
#define STICKY_FIXED_DISTANCE 96
//#define _STICKY_FIRST_HOLD
#define STICKY_FIRST_HOLD_TPNUM 1
#define STICKY_FIRST_HOLD_FRAME 16
//#define _EDGE_STICKY_FIRST
//#define _OLD_STICKY_DIST
#define REJECT_ENABLE 1
#define REJECT_DISTANCE 192
//#define _DYNAMIC_REJECT_DISTANCE
#define REJECT_TPCNT 12
#define PRE_REJECT_DISTANCE 192
#define AFTER_REJECT_DISTANCE 270
//#define _ANTI_JITTERED_LINE
#define ANTI_JITTERED_TP_NUM 11
#define MAX_STP_VALUE 1024
#define VEL_STP_LEVEL 24
#define VEL_STP_BASE 0
#define OPERATED_DIST 60
#define JITTERED_GAIN_PRE 1
#define JITTERED_GAIN_NOW 1
#define JITTERED_WEIGHT 1
//#define _ANTI_STEP_JITTERED_LINE
#define STEP_JITTERED_NUM 4
#define STEP_VEL_STP_LEVEL 24
#define STEP_OPERATED_DIST 60
#define STEP_JITTERED_GAIN_PRE 3
#define STEP_JITTERED_GAIN_NOW 1
#define STEP_JITTERED_WEIGHT 2
//#define _FIRST_PIXEL
#define FIRST_PIXEL_LINK_DISTANCE 1024
#define FIRST_PIXEL_BOUNDARY 256
//#define _BOUNDARY_BIRTH
#define BOUNDARY_BIRTH_COUNTER 3
#define FIRST_PIXEL_GAIN 2
#define FIRST_PIXEL_WEIGHT 0
#define FIRST_PIXEL_LIMIT 0
//#define _FIRST_PIXEL_BOUNDARY_NOLIMIT
//#define _ANTI_HOOK
#define _ANTI_HOOK_FIXED
//#define _ANTI_HOOK_FIXED_AFTER_SECOND_DEATH
#define _EXTRA_INPUT_BEHAVIOR
//#define _BIRTH_COORDINATE_MEANSHIFT
//#define _MATCH_MUCH
//#define _MATCH_HUNGARIAN
//#define _FAST_MATCH
//#define _LATENCY_GESTURE
//#define _HCK_SEPARATION_EN
#define PITCH_X 650
#define PITCH_Y 650
#define TYPE_ERR_THRESHOLD 500
#define REPAIR_5TP_FRAMES 3
#define REPAIR_5TP_LEARN_FRAMES  10
#define REPAIR_5TP_REBIRTH_LINK_DISTANCE_BASE 400
//#define _MI_TOUCH_GESTURE
#define DEVIATION_CNT 20
#define DEVIATION_PERCENT 10
#define START_POSITION_FORM 0
#define START_POSITION_RNAGE 20
#define END_POSITION_FORM  100
#define END_POSITION_RANGE 200

//-------------------------------------
// AAAB Filter
//-------------------------------------
//#define _AA_FILTER
#define DYNAMICCOEFF 6
#define TURBO_0 5
#define TURBO_1 10
#define TURBO_2 20
#define TURBO_3 25
#define TURBO_4 35
#define AA_R0 1024
#define AA_R1 1024
#define AA_R2 1024
#define AA_R3 1024
#define AA_R4 1024
//#define _CONSTANT_1FING_COEF
#define FING_1_AACOEF 512
//#define _CONSTANT_2FING_COEF
#define FING_2_AACOEF 512
//#define _CONSTANT_5FING_COEF
#define FING_5_AACOEF 512
//#define _AB_FILTER
#define INIT_ALPHA 384
//#define _CONSTANT_1FING_ABCOEF
#define INIT_ALPHA_1FING 512
//#define _CONSTANT_2FING_ABCOEF
#define INIT_ALPHA_2FING 384
//#define _CONSTANT_5FING_ABCOEF
#define INIT_ALPHA_5FING 128
//#define _DYN_AB
#define DYN_AB_TURBO_0 1024
#define DYN_AB_TURBO_1 4096
#define DYN_AB_TURBO_2 16348
#define DYN_AB_R0 64
#define DYN_AB_R1 128
#define DYN_AB_R2 256
#define DYN_AB_STEP_0 4
#define DYN_AB_STEP_1 48

//-------------------------------------
// Resample
//-------------------------------------
//#define _RESAMPLE
#define RESAMPLE_INTERVAL 5
//#define _RESAMPLE_PREDICT_EN
#define RESAMPLE_PREDICT 0

//-------------------------------------
// Base
//-------------------------------------
#define _ULTRA_CALI
#define ULTRA_CALI_EN 1
#define ULTRA_CALI_FRAME 20
#define ULTRA_CALI_STEP 8
//#define _INIT_ULTRA_CALI
#define INIT_UCALI_FRAME 8
#define INIT_UCALI_TIMES 10
//#define _INIT_ULTRA_CALI_THRESHOLD
#define INIT_UCALI_THRESHOLD_HIGH 220


//-------------------------------------
// Uart
//-------------------------------------
//#define _VT100
#define   VT100_VALUE_MAX 800

//-------------------------------------
// Coord
//-------------------------------------
#define REVERSE_DIF_Y 0
#define COORD_SWAP 0
#define COORD_INV_X 0
#define COORD_INV_Y 0
#define RESOLUTION_MIN_X 0
#define RESOLUTION_MAX_X 4095
#define RESOLUTION_MIN_Y 0
#define RESOLUTION_MAX_Y 4095
#define BOUNDARY_SHIFT_X 128
#define BOUNDARY_SHIFT_Y 128
#define OUTSIDE_REGION_RIGHT 128
#define OUTSIDE_REGION_LEFT 128
#define OUTSIDE_REGION_TOP 128
#define OUTSIDE_REGION_BOTTOM 128
#define BOUNDARY_GAIN_START_X 1
#define BOUNDARY_GAIN_START_Y 1
#define BOUNDARY_GAIN_END_X 1
#define BOUNDARY_GAIN_END_Y 1
#define BOUNDARY_WEIGHT 0
//#define _EDGE_BIAS
#define DEVIATION_X 18
#define DEVIATION_Y 21
#define BIAS_RANGE_X 50
#define BIAS_RANGE_Y 60
//#define _DYNAMIC_CORNER_GAIN
#define CORNER_GAIN_X_START 1
#define CORNER_GAIN_X_END 1
#define CORNER_GAIN_Y_START 1
#define CORNER_GAIN_Y_END 1
#define CORNER_WEIGHT 0
//#define _CORNER_CALI_POSITION
#define CORNER_SHIFT_X 36
#define CORNER_SHIFT_Y 60
#define VELOCITY_THRESHOLD 50
//#define _CALIBRATION_FROM_USB
//#define _PJT_ADJUST_CMD


//-------------------------------------
// FreqHop
//-------------------------------------
//#define _MEAN_SHIFT
#define MEAN_SHIFT_NUM 1
#define MEAN_SHIFT_CUR 1
#define MEAN_SHIFT_PRE 1
//#define _FREQ_HOP
#define FREQ_HOP_EN 0
#define FH_NOISE_TH     2000
#define FH_PARTIAL_TH   4000
#define FH_NOISE_LO     100
#define FH_FREQ_START   100
#define FH_FREQ_END     150
#define FH_COARSE_STEP  10
#define FH_IDLE_NUM     1000
#define FH_NOISE_SHOW_IN_DIF 0


//-------------------------------------
// Button
//-------------------------------------
//#define _BUTTON_EN
#define BUTTON_TX_NUM 0
#define BUTTON_RX_NUM 0

//-------------------------------------
// Adonit
//-------------------------------------
//#define _ADONIT_ACPEN
#define ACPEN_ULTRA_DIFMEAN_VAL_HI 40
#define ACPEN_POINT_MERGE_RANGE 164
////

#define ACPEN_MAX_BIT_NUM 5
#define ACPEN_TRIGGER_SHIFT 1
#define ACPEN_BLOCK_LEN_X 4
#define ACPEN_BLOCK_LEN_Y 3
#define ACPEN_IDBLK_TH_SUMNEG_WT_HI 60

#define ACPEN_TH_PT_HI 100
#define ACPEN_TH_PT_LOW 9
#define ACPEN_TH_WEIGHT_HI 60
#define ACPEN_TH_WEIGHT_LOW 30
#define ACPEN_DIFLV_TH_2ND_MAX_PT_LOW 8
#define ACPEN_TH_IDBLK_SHIFT_1ST_LINE_WT_LOW 8
////
//#define _ADONIT_ACPEN_ZOMBIE_AREA
#define ACPEN_ZOMBIE_AREA_LIFESPAN_FRMAE 30
#define ACPEN_ZOMBIE_AREA_RADIUS 3
#define ACPEN_ZOMBIE_AREA_STEP 1
////
//#define _ACPEN_PRESSURE_INFO
#define ACPEN_PRESSURE_MAX 250
#define ACPEN_PRESSURE_MIN 20
#define ACPEN_PRESSURE_RAWDATA_MAX 800
#define ACPEN_PRESSURE_RAWDATA_MIN 100
#define ACPEN_TH_EXTEND_LIFT_DISTANCE 15
#define ACPEN_ERASE_BLK_TX_EXPEND 1
#define ACPEN_ERASE_BLK_RX_EXPEND 1

//#define _ACPEN_IDDECODER_ABS_ROW_DIF_EN
#define ACPEN_TH_IDDECODER_ABSWT_1 63
#define ACPEN_TH_IDDECODER_NEGWT_1 11
#define ACPEN_TH_IDDECODER_ABSWT_2 1024
#define ACPEN_TH_IDDECODER_NEGWT_2 1024
////
//#define _ACPEN_UART_DEBUG

//-------------------------------------
// AdonitPenSetting
//-------------------------------------
#define ADONIT_ACPEN_ID 21
#define ADONIT_ACPEN_FUNC_ID 7
#define ADONIT_ACPEN_ID_LEN 5
#define ADONIT_ACPEN_DELAY 50
#define ADONIT_ACPEN_DURATION 225
#define ADONIT_ACPEN_FREQUENCY 47
#define ADONIT_ACPEN_TRI_WIDTH 40
#define ADONIT_ACPEN_TRI_VARIANCE 10
#define ADONIT_ACPEN_ID_TIMES 10
#define ADONIT_ACPEN_FUNC_TIMES 20
#define ADONIT_ACPEN_MAX_PRESSURE 1200
#define ADONIT_ACPEN_PRESSURE_STEP 10
#define ADONIT_ACPEN_PRESSURE_TH 100
#define ADONIT_ACPEN_MODE 0
#define ADONIT_ACPEN_POLLING_TIME 10
#define ADONIT_ACPEN_GAIN 0
#define ADONIT_ACPEN_DC_OUT_1 0
#define ADONIT_ACPEN_FW_VERSION 118

//-------------------------------------
// GPIO_SYNCH
//-------------------------------------
//#define _DEVICES_COOPERATIVE_GPIO_SYNCH
#define GPIO_PEN_ALERT 0
#define GPIO_PEN_SYNC 1
#define CNST_LOCKING_TIME 200
#define CRIT_LOCKING_TIME 100
#define CNST_RELEASE_TIME 100
#define CRIT_RELEASE_TIME 2400
#define MAX_NORM_LOCKING_TIME 1000
#define MAX_EX_LOCKING_TIME 2400
#define CNST_COOPERATIVE_CYCLE_TIME 100
#define MAX_CMD_RELEASE_TIME 100
#define VALID_SENSING_TIME 40
//#define _GPIO_GESTURE
#define GPIO_GES_PIN 3
#define GPIO_GES_FRM_CNT 0
#define GPIO_GES_START_X 0
#define GPIO_GES_START_Y 0
#define GPIO_GES_END_X 3000
#define GPIO_GES_END_Y 3000

//-------------------------------------
// MemLayout
//-------------------------------------
//#define _MEMORY_LAYOUT_S0_8K

//-------------------------------------
// ITO_DEF
//-------------------------------------
#define     PANEL_WIDTH             220
#define     PANEL_HEIGHT            150
#define     MAX_ITO_LINE            22
#define     TX_NUM                  22
#define     RX_NUM                  15


short SenseOrder[] = {

    66,67,71,69,68,64,61,62,63,60,
    56,57,59,58,55,53,54,52,51,50,
    49,48,

    81,82,83,84,85,86,87,88,89,
    90,91,92,93,94,95,
    };





