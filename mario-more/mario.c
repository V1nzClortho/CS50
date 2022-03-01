#include <stdio.h>
#include <cs50.h>

void printBlock(int n)
{
    for (int i=1; i<=n; i++)
    {
        //indentation spaces
        for (int k = n - i; k > 0; k--)
        {
            printf(" ");
        }

        //first hash group
        for(int m = 0; m < i; m++)
        {
            printf("#");
        }

        //space between L/R
        printf("  ");

        //second hash group
        for(int k = 0; k < i; k++)
        {
            printf("#");
        }

        //new row
        printf("\n");
    }
}

int main(void)
{
    int tiers = 0;
    tiers = get_int("Enter Number of Tiers: ");
    while (tiers <=0 || tiers >=9)
    {
        printf("Invalid entry.\n");
        tiers = get_int("Enter Number of Tiers: ");
    }

    printBlock(tiers);
}