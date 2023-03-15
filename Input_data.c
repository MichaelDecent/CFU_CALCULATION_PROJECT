#include "main.h"
/**
 * get_colony_count - A function that gets colony count from the user
 * 
 * Returns: the colony count
*/
int get_colony_count(void)
{
    int c_count = 0;
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
    return (c_count);
}

/**
 * culture_plate_vol - gets the value of the volume of culture plate from the user
 * 
 * Returns: volume of culture plate
*/
float culture_plate_vol(void)
{
    float vol_cp = 0;
    do
    {
        printf("\n\nInput the VOLUME OF CULTURE PLATE in (ml) => ");
        vol_cp = char_error(stdin);
        if (vol_cp == 0)
            printf("Invalid number entered (Enter a number)\n" );

    } while (vol_cp == 0);
    return (vol_cp);   
}

/**
 * get_dilution_factor - Gets the value of dilution factor from the user
 * 
 * Returns: dilution factor
*/
float get_dilution_factor(void)
{
    int status, tube_no;
    float vol_dil, vol_stock, FDF;

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
    return (FDF);
}
