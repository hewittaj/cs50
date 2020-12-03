#include <stdio.h>
#include <cs50.h>

/*
In this solution for the hello problem in pset1 we have the following:
- Prompt for a name from the user
- Print out the name of that user back to them
- CS50 library does some checking for us, so I don't have to
*/

int main(void)
{

    printf("Hello, %s!\n", get_string("What is your name? ")); // get_string is a cs50 component in the library, not standard C
}