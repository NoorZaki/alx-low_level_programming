#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
*/
void print_alphabet_x10(void)
{
char k;
int c = 0;
while (c++ <= 9)
{
for (k = 'a'; k <= 'z'; k++)
_putchar(k);
_putchar('\n');
}
}
