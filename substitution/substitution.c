#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    /*for (int i = 0; i < argc; i++)
    {
        if (isspace(argv[i]))
        {
            printf("Usage: ./substitution key\n");
            return 1;
        }

    }*/

    //check for too many arguments
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    //check for correct character length of 26
    else if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    else
    {
        //check for valid key
        for (int i = 0; i < 26; i++)
        {
            if (isalpha(argv[1][i]))
            {
                //iterates through array to check for duplicate characters
                for (int j = 0; j < 26; j++)
                {
                    if (j != i)
                    {
                        if (argv[1][i] == argv[1][j])
                        {
                            return 1;
                        }
                    }

                }
                continue;
            }
            else
            {
                return 1;
            }
        }
        //debug print cipher string
        /*for (int i = 0; i < 25; i++)
        {
            printf("%c", argv[1][i]);

        }*/


        //get plain text input from user
        string plaintext = get_string("plaintext: ");
        char ciphertext[26];
        int cipherValue = 0;
        printf("ciphertext: ");

        //cipher transform the characters
        for (int i = 0; i < strlen(plaintext); i++)
        {
            if (isalpha(plaintext[i]))
            {


                if (isupper(plaintext[i]))
                {
                    //calculate index value of letter based on ascii value (upper case)
                    cipherValue = (int) plaintext[i] - 65;
                    printf("%c", toupper(argv[1][cipherValue]));
                }
                else
                {
                    //calculate index value of letter based on ascii value (lower case)
                    cipherValue = (int) plaintext[i] - 97;
                    printf("%c", tolower(argv[1][cipherValue]));
                }


            }
            else
            {
                printf("%c", plaintext[i]);
            }
        }
        printf("\n");
    }

}