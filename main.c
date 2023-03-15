#include "main.h"
/**
 * main - A Program that calculates Colony Forming UNit (CFU)
 * 
 * Returns: always (0)
 */
int main(void)
{
    int status, exit = 1, c_count;
    float vol_cp, FDF, CFU;


    do
    {
        clear();

        printf ("\t\t\t============ COLONY FORMING UNIT (CFU) CALCULATOR ==========\t\t\t\n\n\n");
        c_count = get_colony_count();

        vol_cp = culture_plate_vol();

        FDF = get_dilution_factor();

        CFU = calc_cfu(FDF, c_count, vol_cp);

        printf("\n\nTHE COLONY FORMING UNIT (CFU) is ==> %.1e CFU/ml\n", CFU);

        printf ("\n1.PRESS 0 TO EXIT\n2.PRESS 1 TO CONTINUE\n");
        scanf("%d", &exit);
    } while (exit != 0);
    
    printf("\t\t\t=====Thanks for using this version of CFU calculator=====\t\t\t\n\n");
    return(0);
}
