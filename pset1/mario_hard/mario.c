#include <stdio.h>
#include <cs50.h>

// These are our prototypes so that C knows how to use them when called later
void printSpaces(int num);
void printHashes(int num);
void createLevels(int numberOfSteps);

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
    createLevels(user_input);
}

/*
This function creates the levels/steps for our program. If we are creating the first level then we will do something special. Otherwise we call the two functions 'printSpaces'
& 'printHashes' in order to create the steps. This function essentially links the two together rather than calling everything in the main function.

*/
void createLevels(int numberOfSteps)
{
    for (int i = 0; i < numberOfSteps; i++)
    {
        if (i == 0)
        {
            printSpaces(numberOfSteps - i - 1);
            printHashes(numberOfSteps - (numberOfSteps - 1));
            printSpaces(2);
            printHashes(numberOfSteps - (numberOfSteps - 1));
            printf("\n");
        }
        else
        {
            printSpaces(numberOfSteps - i - 1);
            printHashes(numberOfSteps - (numberOfSteps - i - 1));
            printSpaces(2);
            printHashes(numberOfSteps - (numberOfSteps - i - 1));
            printf("\n");
        }
    }
}

/*
This function prints our Spaces based off the number of spaces parameter
*/
void printSpaces(int num)
{
    for (int i = 0; i < num; i++)
    {
        printf(" ");
    }
}

/*
This function prints our Hashes based off of the number of hashes parameter
*/
void printHashes(int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("#");
    }
}