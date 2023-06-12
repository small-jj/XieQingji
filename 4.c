#include "MoFtInd.h"  


#if COMPRESS_MONO_FONT

// Compressed mono font:
code BYTE tOSDFont1[] =
{
    // Code 000 [0x00]:
    0x00, 0x0F, 0x00, 0x11, 
    // Code 001 [0x01]:
    0x00, 0x03, 0x04, 0x01, 0x0E, 0x01, 0x1F, 0x01, 0x3F, 0x81, 0x7F, 0xC1, 0xFF, 0xE1, 0xFF, 0xF1, 
    // Code 002 [0x02]:
    0x00, 0x0F, 0x00, 0x01, 
    // Code 003 [0x03]:
    0x00, 0x31, 0x00, 0x71, 0x00, 0xF1, 0x01, 0xF1, 0x03, 0xF1, 0x07, 0xF1, 0x0F, 0xF1, 0x1F, 0xF1, 0x00, 0x01, 
    // Code 004 [0x04]:
    0xFF, 0xFF, 0x00, 0x01, 
    // Code 005 [0x05]:
    0x80, 0x01, 0xC0, 0x01, 0xE0, 0x01, 0xF0, 0x01, 0xF8, 0x01, 0xFC, 0x01, 0xFE, 0x01, 0xFF, 0x01, 0x00, 0x01, 
    // After compressed, size = 64
};
code WORD tMonoFontDataAddr[6] = {
    0x0000, 0x0004, 0x0014, 0x0018, 0x002A, 0x002E, };


#else // No compress

#if 0 
// Mono font: Format 2: 1 word ==> 1 line
code WORD tOSDFont1[108] =
{
    // Code   0 [0x00] (4_0_0):
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0010, 0x0010, 
    // Code   1 [0x01] (4_0_1):
    0x0000, 0x0000, 0x0000, 0x0000, 0x0400, 0x0400, 0x0E00, 0x0E00, 0x1F00, 0x1F00, 0x3F80, 0x3F80, 0x7FC0, 0x7FC0, 0xFFE0, 0xFFE0, 0xFFF0, 0xFFF0, 
    // Code   2 [0x02] (4_0_2):
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    // Code   3 [0x03] (4_1_0):
    0x0030, 0x0030, 0x0070, 0x0070, 0x00F0, 0x00F0, 0x01F0, 0x01F0, 0x03F0, 0x03F0, 0x07F0, 0x07F0, 0x0FF0, 0x0FF0, 0x1FF0, 0x1FF0, 0x0000, 0x0000, 
    // Code   4 [0x04] (4_1_1):
    0xFFF0, 0xFFF0, 0xFFF0, 0xFFF0, 0xFFF0, 0xFFF0, 0xFFF0, 0xFFF0, 0xFFF0, 0xFFF0, 0xFFF0, 0xFFF0, 0xFFF0, 0xFFF0, 0xFFF0, 0xFFF0, 0x0000, 0x0000, 
    // Code   5 [0x05] (4_1_2):
    0x8000, 0x8000, 0xC000, 0xC000, 0xE000, 0xE000, 0xF000, 0xF000, 0xF800, 0xF800, 0xFC00, 0xFC00, 0xFE00, 0xFE00, 0xFF00, 0xFF00, 0x0000, 0x0000, 
};

#else
// Mono font: Format 2: 1 byte ==> 1 line
code BYTE t4_0MonoFont[162] =
{ 
  // Code   0 [0x00] (4_0_0):
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01,  
  // Code   1 [0x01] (4_0_1):
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x00, 0xE0, 0xE0, 0x11, 0xF0, 0xF0, 0x33, 0xF8, 0xF8, 0x77, 0xFC, 0xFC, 0xFF, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF,  
  // Code   2 [0x02] (4_0_2):
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
  // Code   3 [0x03] (4_1_0):
  0x00, 0x03, 0x03, 0x00, 0x07, 0x07, 0x00, 0x0F, 0x0F, 0x00, 0x1F, 0x1F, 0x00, 0x3F, 0x3F, 0x00, 0x7F, 0x7F, 0x00, 0xFF, 0xFF, 0x11, 0xFF, 0xFF, 0x00, 0x00, 0x00,  
  // Code   4 [0x04] (4_1_1):
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00,  
  // Code   5 [0x05] (4_1_2):
  0x88, 0x00, 0x00, 0xCC, 0x00, 0x00, 0xEE, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x80, 0x80, 0xFF, 0xC0, 0xC0, 0xFF, 0xE0, 0xE0, 0xFF, 0xF0, 0xF0, 0x00, 0x00, 0x00, 
};

#endif 

#endif

code BYTE t4_04ColorFont[] =
{
};
code BYTE t4_08ColorFont[] =
{
};



 BYTE code  t4_0Palette[] =
{
		 // 2 color [0x00]  4_0_0
		 CP256_RGB_C(  89,  87,  88), 
		 CP256_RGB_C( 255, 255, 255), 
};



 BYTE code str4_0Window[2][4]=
{
	{	 4_M(0x00), 4_M(0x01), 4_M(0x02), 
	 0},
	{	 4_M(0x03), 4_M(0x04), 4_M(0x05), 
	 0}
};
