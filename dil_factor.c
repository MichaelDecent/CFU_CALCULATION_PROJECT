/**
* dil_factor - calculates dilution factor
* @vol_dil: volume of diluent in (ml)
* @vol_stick: volme of stcok solution in (ml)
* @tube_no: postion no of the test-tube inoculated, to obtain colony count
* 
* Return: the value of dilution factor
*/
float dil_factor(float vol_dil, float vol_stock, int tube_no)
{
    int i;
    float FDF;
    float mul_factor;
    float final_vol;

    final_vol = vol_dil + vol_stock; /*calculates final volume*/

    /*calcultes the dilution factor of a particular test tube*/
    mul_factor = (vol_stock / final_vol);
    for (i = 0; i < tube_no; i++)
    {
        FDF = (vol_stock / final_vol);
        vol_stock = (vol_stock * mul_factor); 
    }
    FDF = (1/ FDF); /*inverse of dilution factor*/

    return(FDF);

}