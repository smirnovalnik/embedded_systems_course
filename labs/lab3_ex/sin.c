/**
  ******************************************************************************
  * \file  sin.c
  * \brief Sin samples n = 200, min = 0, max = 4095
  ******************************************************************************
  */

#include "sin.h"

uint16_t sin_arr[SIN_LEN] = {
     2047,  2111,  2176,  2240,  2304,  2367,  2431,  2494, 
     2556,  2618,  2680,  2741,  2801,  2860,  2919,  2977, 
     3033,  3089,  3144,  3198,  3250,  3302,  3352,  3401, 
     3449,  3495,  3540,  3583,  3625,  3665,  3703,  3740, 
     3776,  3809,  3841,  3871,  3900,  3926,  3951,  3973, 
     3994,  4013,  4030,  4045,  4058,  4069,  4078,  4085, 
     4090,  4093,  4095,  4093,  4090,  4085,  4078,  4069, 
     4058,  4045,  4030,  4013,  3994,  3973,  3951,  3926, 
     3900,  3871,  3841,  3809,  3776,  3740,  3703,  3665, 
     3625,  3583,  3540,  3495,  3449,  3401,  3352,  3302, 
     3250,  3198,  3144,  3089,  3033,  2977,  2919,  2860, 
     2801,  2741,  2680,  2618,  2556,  2494,  2431,  2367, 
     2304,  2240,  2176,  2111,  2047,  1983,  1918,  1854, 
     1790,  1727,  1663,  1600,  1538,  1476,  1414,  1353, 
     1293,  1234,  1175,  1117,  1061,  1005,   950,   896, 
      844,   792,   742,   693,   645,   599,   554,   511, 
      469,   429,   391,   354,   318,   285,   253,   223, 
      194,   168,   143,   121,   100,    81,    64,    49, 
       36,    25,    16,     9,     4,     1,     0,     1, 
        4,     9,    16,    25,    36,    49,    64,    81, 
      100,   121,   143,   168,   194,   223,   253,   285, 
      318,   354,   391,   429,   469,   511,   554,   599, 
      645,   693,   742,   792,   844,   896,   950,  1005, 
     1061,  1117,  1175,  1234,  1293,  1353,  1414,  1476, 
     1538,  1600,  1663,  1727,  1790,  1854,  1918,  1983, 
    };
