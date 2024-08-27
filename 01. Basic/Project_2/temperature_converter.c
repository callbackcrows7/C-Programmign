/* 
 * File:    temperature_converter.c
 * version: 1.0
 * Author:  MD. SHAHRIAR AHAMMAD
 *
 * Created on March 17, 2024, 6:16 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(void) {
    // define variables
    int item;
    float c, f, k;

    // run a conditional loop 
    do
    {
        // create a temperature menu
        printf("\n");
        printf("========================\n");
        printf("Temperature Converter\n");
        printf("========================\n");
        printf("1.Celsius to Fahrenheit\n");
        printf("2.Celsius to Kelvin\n");
        printf("3.Fahrenheit to Celsius\n");
        printf("4.Fahrenheit to Kelvin\n");
        printf("5.Kelvin to Celsius\n");
        printf("6.Kelvin to Fahrenheit\n");
        printf("0.Exit\n");
        printf("------------------------\n");

        // read item from user
        printf("Please select an item: ");
        scanf("%d", &item);

        // clean console
        system("cls");

        // check conditions
        switch (item) {
        case 0:
            // do not need to anything just continue
            continue;
            break;
        case 1:
            // temperature Label
            printf("1.Celsius to Fahrenheit\n");
            printf("========================\n\n");

            // read temperature from user
            printf("Please Enter Your Temperature: ");
            scanf("%f", &c);

            // clean console
            system("cls");

            // do some calculations
            f = (c * 1.8) + 32;

            // print temperature
            printf("The Result is:%.2f c = %.2f f\n\n", c, f);
            break;
        case 2:
            // temperature Label
            printf("2.Celsius to Kelvin\n");
            printf("========================\n\n");

            // read temperature from user
            printf("Please Enter Your Temperature: ");
            scanf("%f", &c);

            // clean console
            system("cls");
        
            // do some calculations
            k = c + 273.15;

            // print temperature
            printf("The Result is:%.2f c = %.2f k\n\n", c, k);
            break;
        case 3:
            // temperature Label
            printf("3.Fahrenheit to Celsius\n");
            printf("========================\n\n");

            // read temperature from user
            printf("Please Enter Your Temperature: ");
            scanf("%f", &f);

            // clean console
            system("cls");
        
            // do some calculations
            c = (f - 32) * 5 / 9;

            // print temperature
            printf("The Result is:%.2f f = %.2f c\n\n", f, c);
            break;
        case 4:
            // temperature Label
            printf("4.Fahrenheit to Kelvin\n");
            printf("========================\n\n");

            // read temperature from user
            printf("Please Enter Your Temperature: ");
            scanf("%f", &f);

            // clean console
            system("cls");
        
            // do some calculations
            k = (f - 32) * 5 / 9 + 273.15;

            // print temperature
            printf("The Result is:%.2f f = %.2f k\n\n", f, k);
            break;
        case 5:
            // temperature Label
            printf("5.Kelvin to Celsius\n");
            printf("========================\n\n");

            // read temperature from user
            printf("Please Enter Your Temperature: ");
            scanf("%f", &k);

            // clean console
            system("cls");
        
            // do some calculations
            c = (k - 273.15);

            // print temperature
            printf("The Result is:%.2f k = %.2f c\n\n", k, c);
            break;
        case 6:
            // temperature Label
            printf("6.Kelvin to Fahrenheit\n");
            printf("========================\n\n");

            // read temperature from user
            printf("Please Enter Your Temperature: ");
            scanf("%f", &k);

            // clean console
            system("cls");
        
            // do some calculations
            f = (k - 273.15) * 1.8 + 32;

            // print temperature
            printf("The Result is:%.2f k = %.2f f\n\n", k, f);
            break;
    
        default:
            // if user entered an invalid temperature then print Invalid input
            printf("Invalid input!\n");
            break;
        }
    } while (item != 0);
    
    return 0;
}