#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

//function definitions
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string text1 = get_string("Text: ");
    int numLetters = count_letters(text1);
    int numWords = count_words(text1);
    int numSent = count_sentences(text1);
    float index = 0;
    //calculate L and S
    float L = ((float)numLetters / (float)numWords) * 100;
    float S = ((float)numSent / (float)numWords) * 100;
    int grade = 0;

    //calculate index value
    index = 0.0588 * L - 0.296 * S - 15.8;

    //round to nearest int
    grade = round(index);

    //check for extreme values
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }


    /*printf("%i Letters\n", numLetters);
    printf("%i Words\n", count_words(text1));
    printf("%i Sentences\n", count_sentences(text1));*/
}

int count_letters(string text)
{
    //returns int with number of letters in string
    int letters = 0;

    for (int i = 0; i < strlen(text); i++)
    {

        if (isalpha(text[i]))
        {
            letters++;
        }

    }
    return letters;
}

int count_words(string text)
{
    //returns in with number of words in string
    int words = 1;

    for (int i = 0; i < strlen(text); i++)
    {
        if (isspace(text[i]))
        {
            words++;
        }

    }
    return words;
}

int count_sentences(string text)
{
    //returns int with number of sentences in string
    int sentences = 0;

    for (int i = 0; i < strlen(text); i++)
    {

        if ((text[i] == '.') || (text[i] == '?'))
        {
            sentences++;
        }

    }

    return sentences;
}