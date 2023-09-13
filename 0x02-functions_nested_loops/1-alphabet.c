#include "stdio.h"

/**
* print_alphabet - Prints the lowercase alphabet followed by a newline.
*/
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
}

