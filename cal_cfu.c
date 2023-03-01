/**
 * calc_cfu - calculates the CFU
 * @FDF: the final dilution factor
 * @c_count: colony count
 * @vol_cp: volume of the inoculum
 * 
 * Returns: the value of CFU in (CFU/ml)
 */
float calc_cfu(float FDF, int c_count, float vol_cp)
{
    float CFU;
     CFU = (c_count * FDF)/ vol_cp;

     return (CFU);
}