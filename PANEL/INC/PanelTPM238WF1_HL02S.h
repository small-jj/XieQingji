// for samsung_panel
#define PanelName               "TPM238WF1"

#define PanelDither             8

#define PanelTTL                0
#define PanelTCON               0
#define PanelLVDS               0xFF
#define PanelRSDS               0
#define PanelminiLVDS      		0
#define NormalWhite    			0      // for normal Black panel
//#define PANEL_VCOM_ADJUST        	0xFF		
//#define MINILVDSTCON_DEVICE     	0x50
//#define MAX_VCOM_VALUE          	0x7F
//#define DEF_VCOM_VALUE          	0x40
//#define MIN_VCOM_VALUE          	0x00

#define LVDS_TIMode             0xFF  //Thine mode:disable TI mode
#define PANEL_SWAP_PN           0x00
#define LVDS_TI_BitModeSel      LVDS_TI_8BIT
#define PanelDualPort      		0xFF
#define PanelSwapPort           0x00
#define PanelSwapOddML          0
#define PanelSwapEvenML         0
#define PanelSwapOddRB          0
#define PanelSwapEvenRB         0
#define PanelSwapMLSB           0

#define PanelDClkDelay          0
#define PanelInvDE              0
#define PanelInvDClk            0
#define PanelInvHSync           0
#define PanelInvVSync           0

// driving current setting 0==>4mA, 1==>6mA, 2==>8mA ,3==>12mA
#define PanelDCLKCurrent        1 // Dclk current
#define PanelDECurrent          1 // DE signal current
#define PanelOddDataCurrent     1 // Odd data current
#define PanelEvenDataCurrent    1 // Even data current

#define PanelOnTiming1          20 // time between panel & data while turn on power
#define PanelOnTiming2          550 // time between data & back light while turn on power
#define PanelOffTiming1         250//350//220 // 2005/5/3// time between back light & data while turn off power
#define PanelOffTiming2         20//20//25 // 2005/5/3//10 // time between data & panel while turn off power

#define PanelOffOnDelay         1100 // T4 >= 500ms

#define PanelWidth     			1920
#define PanelHeight     		1080

#define PanelHTotal     		2020
#define PanelVTotal     		1111


#define PanelHSyncWidth         20//48
#define PanelHSyncBackPorch     28//78

#define PanelVSyncWidth         2// 3
#define PanelVSyncBackPorch     14//12

#define PanelHStart                 (PanelHSyncWidth+PanelHSyncBackPorch)
#define PanelVStart                 (PanelVSyncWidth+PanelVSyncBackPorch)

#define PanelMaxHTotal      	2080
#define PanelMinHTotal       	1980 

#define PanelMaxVTotal     		1251
#define PanelMinVTotal          1105

#define PanelDCLK                134
#define PanelMaxDCLK             182
#define PanelMinDCLK             106

// 111003 Rick add
#define PanelVfreq          (600)
#define PanelMaxVfreq   (750+20) // 75Hz
#define PanelMinVfreq   (500-20) // 50Hz

//#define ENABLE_VCOM_ADJUST              1
//#define VCOM_TYPE                   VCOM_RICHTEK

