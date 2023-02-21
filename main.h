#include <stdio.h>
#include <math.h>
#define clear() printf("\033[H\033[J")

float dil_factor(float vol_dil, float vol_stock, int tube_no);
float calc_cfu(float FDF, int c_count, float vol_cp);