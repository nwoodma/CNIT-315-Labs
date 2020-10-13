
/* Lab1_315 Assignment #1 Hot Tub/Pool
Name: Nick Woodman
Email: nwoodman@purdue.edu
Lab Time: Online 
Description: The primary goal of the Hot Tub/Pool lab is to formulate
a program that prompts the user for dimensions of a pool and a 
hot tub. Then, calculates/displays the volume, gallons of water needed, 
and total cost based on input values. */

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
    double poolW, poolD, poolL, poolDS, poolLD, poolLS, poolWI = 0.0; 
    float WHT, DHT = 0; 
    char proceed = 'y';

    // Outer do while function checks the user's input and repeats entire program if 'y' is stored in proceed variable, but terminates if 'y' is not stored
    do
    {
        printf("POOL DIMENSIONS (FEET)");
        printf("\n---------------------");

        // do while functions are used to verify if the user's input is a valid value
        do 
        {
            // Prompts user to input a value in between 0.0 and 5.0
            printf("\nPlease enter the depth of the shallow end (0 - 5 feet): ");
            scanf("%lf", &poolDS); //scans for user input and stores value in poolDS variable

            // if statement checks the value entered is between 0.0 and 5.0
            if (poolDS > 5.0 || 0.0 > poolDS)
            {
                // Error message displayed if numerical value doesn't fall between 5.0 and 0.0
                printf("THAT IS AN INCORRECT ENTRY, PLEASE ENTER A VALUE BETWEEN 0 AND 5!");
            } 
            // while statement checks if the poolD value is valid, if not it repeats until a valid number is stored (between 0 and 5)
        } while (poolDS > 5.0 || 0.0 > poolDS);

        // do while statement to prompt user for the depth of the deep end of the pool
        do
        {
            // Prompts user to input a value in between 6.0 and 15.0
            printf("\nPlease enter the depth of the deep end (6 - 15 feet): ");
            scanf("%lf", &poolD);

            // if statement checks if input value stored in poolD is valid 
            if (poolD > 15.0 || 6.0 > poolD)
            {
                // if statement prints error message if entry is not between 6 and 15
                printf("THAT IS THE INCORRECT ENTRY, PLEASE ENTER A VALUE BETWEEN 6 AND 15!");
            }

            // while statement checks if the poolD value is valid, if not it repeats until a valid number is stored
        } while (poolD > 15.0 || 6.0 > poolD);
        
        // do while statement to prompt user for the width of the pool
        do
        {
            printf("\nPlease enter the width of the pool (15 - 30 feet): ");
            scanf("%lf", &poolW);

            // if statement checks for any input bigger than 30 or smaller than 15 
            if (poolW > 30.0 || 15.0 > poolW)
            {
                // displays error message if input fails to fall in between 15 and 30
                printf("THAT IS THE INCORRECT ENTRY, PLEASE ENTER A VALUE BETWEEN 15 AND 30!");
            }
            // repeats if variable stored in poolW is invalid 
        } while (poolW > 30.0 || 15.0 > poolW);
        
        // do while statement to prompt user for the length of the pool
        do 
        {
            printf("\nPlease enter the length of the pool (35 - 70 feet): ");
            scanf("%lf", &poolL);

            if (poolL > 70.0 || 35.0 > poolL) // checks if value stored in poolL variable is between 35 and 70
            {
                printf("THAT IS THE INCORRECT ENTRY, PLEASE ENTER A VALUE BETWEEN 30 AND 70!");
            }
            // repeats if while conditions are not met for poolL variable
        } while (poolL > 70.0 || 35.0 > poolL);

        // do while statement to prompt use for the length of the walk in section of the pool
        double maxpoolWI = poolL / 3.0; // finding max for poolWI (max is 1/3 the pool length)
        do 
        {
            printf("\nPlease enter the length of the walk in (5 - %0.1f feet): ", maxpoolWI); // prompts user for input and specifies range of input 
            scanf("%lf", &poolWI);

            // prints error statement if value entered/stored in poolWI variables are NOT between 5 and the maxpoolWI variable
            if (poolWI > maxpoolWI || 5.0 > poolWI)
            {
                printf("THAT IS AN INCORRECT ENTRY, PLEASE ENTER A VALUE BETWEEN 5 AND 1/3 the pool length!");
            } 

        } while (poolWI > maxpoolWI || 5.0 > poolWI);


        double maxpoolLS = poolL / 2.0; // finding the max for the poolLS (max is 1/2 the pool length)
        do
        {
            printf("\nPlease enter the length of the shallow end (10 - %0.1f feet): ", maxpoolLS);
            scanf("%lf", &poolLS);

            if (poolLS > maxpoolLS || 10.0 > poolLS)
            {
                printf("THAT IS AN INCORRECT ENTRY, PLEASE ENTER A VALUE BETWEEN 10 AND 1/2 the pool length!");
            }
        } while (poolLS > maxpoolLS || 10.0 > poolLS);

        double maxpoolLD = poolL / 2.0; //finding the max of the poolLD (max is 1/2 the pool length)
        do
        {
            // prompts user to enter a value in between 12 and the maxpoolLD variable
            printf("\nPlease enter the length of the deep end (12 - %0.1f feet): ", maxpoolLD); 
            scanf("%lf", &poolLD);

            // if statement verifies user input by checking if the value stored in poolLD variables is between 12 and the value stored in maxpoolLD variable
            if (poolLD > maxpoolLD || 12.0 > poolLD)
            {
                printf("THAT IS AN INCORRECT ENTRY, PLEASE ENTER A VALUE BETWEEN 12 AND 1/2 the pool length!"); // error message displayed if variable doesn't fall in between range
            }

        } while (poolLD > maxpoolLD || 12.0 > poolLD);

        printf("\nHOT TUB DIMENSIONS (FEET)");
        printf("\n------------------------");

        // prompts user for width of hot tub
        do
        {
            printf("\nPlease enter the width of the hot tub (8 - 14 feet): ");
            scanf("%f", &WHT);

            if (WHT > 14 || 8 > WHT)
            {
                printf("THAT IS AN INCORRECT ENTRY, PLEASE ENTER A VALUE BETWEEN 8 AND 14");
            }

        } while (WHT > 14 || 8 > WHT);

        // prompts user for depth of hot tub
        do 
        {
            printf("\nPlease enter the depth of the hot tub (3 - 5 feet): ");
            scanf("%f", &DHT);

            if (DHT > 5 || 3 > DHT)
            {
                printf("THAT IS AN INCORRECT ENTRY, PLEASE ENTER A VALUE BETWEEN 3 AND 5");
            }
        } while (DHT > 5 || 3 > DHT);      

        /* CALCULATING POOL VOLUME 
           ======================== */
        printf("\nPOOL VOLUME");
        printf("\n------------------");

        // Declares variables for calculation Pool Volume and Gallons Needed
        double v1, v2, v3, v4, vTotal, gallonP = 0.0;
        v1 = (poolD * poolLD) * poolW; // finds the volume of the deepest part of the pool 
        v2 = (poolD + poolDS)/2.0 * poolW; // finds the volume of the truncated part of the pool
        v3 = (poolDS * poolWI)/2.0 * poolW; // finds the volume of the walk in section
        v4 = (poolLS * poolDS) * poolW; // finds the volume of the small section after the truncated section
        vTotal = v1 + v2 + v3 + v4; // calculates the total volume for the pool


        // Calculates the gallons needed to fill pool
        gallonP = 7.481 * vTotal; 

        // by putting 0.1 it only includes one number left of the decimal point      
        printf("\nTotal volume of pool: %0.1f", vTotal); // displays the total volume to the nearest one decimal point
        printf("\nGallons of water to fill: %0.1f", gallonP); // displays the gallons of water needed to fill pool

        /* CALCULATING HOT TUB VOLUME 
           ======================== */
        printf("\n\nHOT TUB VOLUME");
        printf("\n------------------");

        // declares variables needed to compute hot tube calculations
        float VHT, gallonHT, gallonTotal, totalCost, r = 0.0;
        r = WHT/2.0; // calculates the radius of the hot tube
        VHT = r * r * M_PI * DHT; // calculates the volume of the hot tube and stores value in VHT variable
        gallonHT = 7.481 * VHT; // calculates the cost of water to fill the hot tub

        printf("\nTotal volume of hot tub: %0.1f", VHT); // displays total volume of the hot tub (nearest decimal place)
        printf("\nGallons of water to fill: %0.1f", gallonHT); // displays the gallons of water needed to fill hot tub (nearest decimal place)

        gallonTotal = gallonP + gallonHT; // calculates the total gallons of water needed to fill both pool and hot tube
        totalCost = gallonTotal * 0.28; // calculates the total cost of filling both pool and hot tub
        printf("\nTotal gallons for both: %0.1f", gallonTotal); // prints total gallons needed
        printf("\nTotal cost for both: %0.1f", totalCost); // prints total cost needed to fill both

        // prompts user if they want to continue/input more values or not by entering 'y' for yes or 'n' for no
        printf("\n\nDo you want to calculate another POOL or HOT TUB configuration?");
        printf("\nPlease enter 'y' for YES, 'n' for NO: "); // program terminates if 'n' is stored in proceed variable
        scanf(" %c", &proceed);
    } while(proceed == 'y'); 


    return 0;
}