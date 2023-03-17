#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main()
{
    for(int x = 'A'; x <= 'Z'; x++) 
    {
        char small = tolower(x);
        putchar(small);
    }
    putchar("\n");
    return 0;
}

