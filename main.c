#include "main.h"
/**
 * main - A Program that calculates Colony Forming UNit (CFU)
 * 
 * Returns: always (0)
 */
int main(void)
{
    int status, exit = 1;
    int c_count, tube_no;
    float vol_cp, FDF, CFU;
    float vol_dil, vol_stock;

    do
    {
        clear();

        printf ("\t\t\t============ COLONY FORMING UNIT (CFU) CALCULATOR ==========\t\t\t\n\n\n");

        c_count = 0;
        do
        {    
            printf("Input the COLONY COUNT (colony count must be between 30 and 300)=> ");
            c_count = char_error (stdin);
            if (c_count == 0)
                printf("Invalid number entered (N/B: colony count must be between 30 and 300)\n\n" );

            else
            {
                if (c_count < 30)
                    printf("Colony Count too few to count (N/B: colony count must be between 30 and 300)\n\n");
                else if (c_count > 300)
                    printf("Colony Count too Numerous to count (N/B: colony count must be between 30 and 300)\n\n");
            }

        } while(c_count < 30 || c_count > 300);

        printf("\n\nInput the VOLUME OF CULTURE PLATE in (ml) => ");
        scanf("%f", &vol_cp);

        printf("\n\nInput DILUTION FACTOR if already determined \nOR\nPress 1 to determine the DILUTION FACTOR\n");
        scanf("%d", &status);
        if (status == 1)
        {
            printf("\n\nTo determine your dilution factor input the following: \n");
            printf("\n 1. VOLUME OF DILUTIENT in (ml) => ");
            scanf("%f", &vol_dil);
            printf("\n 2. VOLUME STOCK SOLUTION in (ml) => ");
            scanf("%f", &vol_stock);
            printf("\n 3. The position number of the test-tube used to innoculate, to obtain colony count => ");
            scanf("%d", &tube_no);
            FDF = dil_factor(vol_dil, vol_stock, tube_no);
            printf ("\nDILUTION FACTOR IS => %.1e", FDF);
        }
        else
            FDF = (float)status;

        CFU = calc_cfu(FDF, c_count, vol_cp);

        printf("\n\nTHE COLONY FORMING UNIT (CFU) is ==> %.1e CFU/ml\n", CFU);

        printf ("\n1.PRESS 0 TO EXIT\n2.PRESS 1 TO CONTINUE\n");
        scanf("%d", &exit);
    } while (exit != 0);
    
    printf("\t\t\t=====Thanks for using this version of CFU calculator=====\t\t\t\n\n");
    return(0);
}
