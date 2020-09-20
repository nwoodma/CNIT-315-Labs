// Lab1_315 Assignment #1 Hot Tub/Pool //
#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI acos(-1.0)
#endif

int main() 
{
    /* 
        POOL INPUTS:                                 INPUTS OF HOT TUB:
        Width (W)                                    Width of Hot Tub(WHT)
        Depth(D)                                     Depth of Hot Tub(DHT)
        Length(L)
        Depth of shallow part(DS)
        Length of deep end(LD)
        Length of the shallow end(LS)
        Length of the walk in section(WI)
    */

    // Defining variables for pool and hot tub //
    int poolW, poolD, poolL, poolDS, poolLD, poolLS, poolWI; 
    int WHT, DHT; 
    char proceed = 'y';

    // Getting input values for POOL /
    do
    {
        printf("POOL DIMENSIONS (FEET)");
        printf("\n---------------------");

        do 
        {
            printf("\nPlease enter the depth of the shallow end (0 - 5 feet): ");
            scanf("%d", &poolDS);

            if (poolDS > 5 || 0 > poolDS)
            {
                printf("THAT IS AN INCORRECT ENTRY, PLEASE ENTER A VALUE BETWEEN 0 AND 5!");
            } 

        } while (poolDS > 5 || 0 > poolDS);

        do
        {
            printf("\nPlease enter the depth of the deep end (6 - 15 feet): ");
            scanf("%d", &poolD);

            if (poolD > 15 || 6 > poolD)
            {
                printf("THAT IS THE INCORRECT ENTRY, PLEASE ENTER A VALUE BETWEEN 6 AND 15!");
            }

        } while (poolD > 15 || 6 > poolD);
        
        do
        {
            printf("\nPlease enter the width of the pool (15 - 30 feet): ");
            scanf("%d", &poolW);

            if (poolW > 30 || 15 > poolW)
            {
                printf("THAT IS THE INCORRECT ENTRY, PLEASE ENTER A VALUE BETWEEN 15 AND 30!");
            }

        } while (poolW > 30 || 15 > poolW);
        

        do 
        {
            printf("\nPlease enter the length of the pool (35 - 70 feet): ");
            scanf("%d", &poolL);

            if (poolL > 70 || 35 > poolL)
            {
                printf("THAT IS THE INCORRECT ENTRY, PLEASE ENTER A VALUE BETWEEN 30 AND 70!");
            }

        } while (poolL > 70 || 35 > poolL);


        int maxpoolWI = poolL / 3.0; //finding max for poolWI (max is 1/3 the pool length)
        do 
        {
            printf("\nPlease enter the length of the walk in (5 - %d feet): ", maxpoolWI);
            scanf("%d", &poolWI);

            if (poolWI > maxpoolWI || 5 > poolWI)
            {
                printf("THAT IS AN INCORRECT ENTRY, PLEASE ENTER A VALUE BETWEEN 5 AND 1/3 the pool length!");
            } 

        } while (poolWI > maxpoolWI || 5 > poolWI);


        int maxpoolLS = poolL / 2.0; //finding the max for the poolLS (max is 1/2 the pool length)
        do
        {
            printf("\nPlease enter the length of the shallow end (10 - %d feet): ", maxpoolLS);
            scanf("%d", &poolLS);

            if (poolLS > maxpoolLS || 10 > poolLS)
            {
                printf("THAT IS AN INCORRECT ENTRY, PLEASE ENTER A VALUE BETWEEN 10 AND 1/2 the pool length!");
            }
        } while (poolLS > maxpoolLS || 10 > poolLS);

        int maxpoolLD = poolL / 2.0; //finding the max of the poolLD (max is 1/2 the pool length)
        do
        {
            printf("\nPlease enter the length of the deep end (12 - %d feet): ", maxpoolLD);
            scanf("%d", &poolLD);

            if (poolLD > maxpoolLD || 12 > poolLD)
            {
                printf("THAT IS AN INCORRECT ENTRY, PLEASE ENTER A VALUE BETWEEN 12 AND 1/2 the pool length!");
            }

        } while (poolLD > maxpoolLD || 12 > poolLD);

        printf("\nHOT TUB DIMENSIONS (FEET)");
        printf("\n------------------------");

        do
        {
            printf("\nPlease enter the width of the hot tub (8 - 14 feet): ");
            scanf("%d", &WHT);

            if (WHT > 14 || 8 > WHT)
            {
                printf("THAT IS AN INCORRECT ENTRY, PLEASE ENTER A VALUE BETWEEN 8 AND 14");
            }

        } while (WHT > 14 || 8 > WHT);

        do 
        {
            printf("\nPlease enter the depth of the hot tub (3 - 5 feet): ");
            scanf("%d", &DHT);

            if (DHT > 5 || 3 > DHT)
            {
                printf("THAT IS AN INCORRECT ENTRY, PLEASE ENTER A VALUE BETWEEN 3 AND 5");
            }
        } while (DHT > 5 || 3 > DHT);      

        /* CALCULATING POOL VOLUME 
           ======================== */
        printf("\nPOOL VOLUME");
        printf("\n------------------");

    

        /* CALCULATING HOT TUB VOLUME 
           ======================== */
        printf("\nHOT TUB VOLUME");
        printf("\n------------------");



        printf("\nDo you want to calculate another POOL or HOT TUB configuration?");
        printf("\nPlease enter 'y' for YES, 'n' for NO: ");
        scanf(" %c", &proceed);
    } while(proceed == 'y');


    return 0;
}