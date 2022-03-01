#include <stdio.h>
#include <cs50.h>
#include <math.h>

//int number[16];

long getNumber()
{


    long int ccNumber = get_long("Number: ");
    //printf ("%ld", ccNumber);

    return ccNumber;


}

bool checkSum(long int number)
{


    int count = 0;
    int numDigits = 0;
    long int tempNumber = number;

    while (tempNumber != 0)
    {
        numDigits++;
        tempNumber /= 10;

    }

    count = numDigits;
    long int numArray[numDigits];
    long int sumArray[numDigits];

    while (number)
    {

        count--;
        numArray[count] = number % 10;
        sumArray[count] = 0;

        number /= 10;

    }

    int sum = 0;
    //int j = 1;

    for (int i = numDigits - 2; i >= 0; i -= 2)
    {
        if (numArray[i] < 5)
        {
            sumArray[i] = numArray[i] * 2;
        }
        else
        {
            sumArray[i] = (numArray[i] * 2) - 9;
        }


        //printf("%ld\n", sumArray[i]);

        sum = sum + sumArray[i];
        //j+=2;
    }

    int j = 0;
    if (numDigits == 13 || numDigits == 15)
    {
        j = 0;
    }

    else if (numDigits == 14 || numDigits == 16)
    {
        j = 1;
    }

    while (j < numDigits)
    {
        sum = sum + numArray[j];
        j += 2;
    }



return sum % 10 == 0;



}

void cardType(long int number)
{

    int numArray[16];
    int count = 15;
    long int checkNum = number;

    while (number)
    {

        numArray[count] = number % 10;
        count--;
        number /= 10;
    }

    int n = 1;

    if (numArray[0] == 0)
    {

        while (numArray[n] == 0)
        {
            n = n + 1;
        }

        if (numArray[n] == 3)
        {
            if ((numArray[n + 1] == 4 || numArray[n + 1] == 7) && checkSum(checkNum))
            {
                printf("AMEX\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
            else if ( numArray[n] == 4 && checkSum(checkNum))
            {
                printf("VISA\n");
            }
            else
            {
                printf("INVALID\n");
            }

    }

    else if (numArray[0] == 4)
    {
        if (checkSum(checkNum))
        {
            printf("VISA\n");
        }

        else
        {
            printf("INVALID\n");
        }

    }
    else if (numArray[0] == 5)
    {
        if ((numArray[1] == 1 || numArray[1] == 2 || numArray[1] == 3 || numArray[1] == 4 || numArray[1] == 5) && checkSum(checkNum))
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }

    }



}

int main(void)
{

    long int number;
    number = getNumber();
    cardType(number);

}
