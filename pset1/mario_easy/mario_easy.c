#include <stdio.h>
#include <cs50.h>

// These are our prototypes so that C knows how to use them when called later
void createSteps(int);
void printHashes(int numOfHashes);
void printSpaces(int numOfSpaces);

/*
Our main program that initializes our user_input to 0 at the beginning. While user input is not in the bounds it will continue to request until we get the appropriate
response.
*/
int main(void)
{
    int user_input = 0;
    do
    {
        user_input = get_int("Height: \n");
    }
    while (user_input < 1 || user_input > 8); // While not inbetween the bounds we are looking for
    createSteps(user_input); // Creates the steps for Mario

}

/*
This function creates the steps for our program. If we are creating the first level then we will do something special. Otherwise we call the two functions 'printSpaces'
& 'printHashes' in order to create the steps. This function essentially links the two together rather than calling everything in the main function.

*/
void createSteps(int levels)
{
    for (int i = 0; i < levels; i++)
    {
        if (i == 0)
        {
            printSpaces(levels - 1);
            printHashes(levels - (levels - 1));
        }
        else
        {
            printSpaces(levels - i - 1);
            printHashes(levels - (levels - i - 1));
        }
    }
}

/*
This function prints our Hashes based off of the number of hashes parameter
*/
void printHashes(int numOfHashes)
{
    for (int i = 0; i < numOfHashes; i++)
    {
        if (i + 1 == numOfHashes)
        {
            printf("#\n");
        }
        else
        {
            printf("#");
        }
    }
}

/*
This function prints our Spaces based off the number of spaces parameter
*/
void printSpaces(int numOfSpaces)
{
    for (int i = 0; i < numOfSpaces; i++)
    {
        printf(" ");
    }
}