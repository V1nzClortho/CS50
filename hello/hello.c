#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //prompts user to input name
    string name = get_string("Enter your name: ");
    //greets user based on name entered
    printf("Hello, %s\n", name);

}