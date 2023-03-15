#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define clear() printf("\033[H\033[J")

float dil_factor(float vol_dil, float vol_stock, int tube_no);
float calc_cfu(float FDF, int c_count, float vol_cp);
int get_colony_count(void);
float culture_plate_vol(void);
float get_dilution_factor(void);
int char_error(FILE *stream);