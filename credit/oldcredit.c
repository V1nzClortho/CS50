#include <stdio.h>
#include <cs50.h>
#include <math.h>

//int number[16];

long getNumber()
{


    long int ccNumber = get_long("Number: ");
    printf ("%ld", ccNumber);




    //initialize array elements to 0
    /*

    for ( int i = 0; i < 16; i++)
    {
        number[i] = 0;
    }

    //input card number
    printf("Input Credit Card Number: ");

    for ( int i = 0; i < 16; i++)
    {
        scanf("%1d", &number[i]);

    }
    printf("\n");

    //print credit card number
    /*for ( int i = 0; i < 16; i++)
    {
        printf("%d", number[i]);
    }
    printf("\n");
    */



}

void checkNumber()
{
    /*//check for general credit card-ness
    for ( int i = 0; i < 16; i++)
    {


    }

    //check for VISA
    if ( number[0] == 4)
        printf("VISA\n");

    //check for AMEX
    else if ( number[0] == 3 )
    {
        if ( number[1] == 4 || number[1] == 7)
            printf("AMEX\n");
    }

    //check for MasterCard Numbers
    else if ( number[0] == 5)
    {
        if ( number [1] == 1 || number [1] == 2 || number[1] == 3 || number[1] == 4 || number[1] == 5)
            printf("MASTERCARD\n");
    }

    else
        printf("INVALID\n"); */

}

int main(void)
{

    getNumber();
    //checkNumber();

}
