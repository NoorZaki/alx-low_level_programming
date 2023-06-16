#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * description: prints all the numbers of base 16 in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
int n;
char letter;
for (n = 0; n < 10; n++)
putchar((n % 10) + '0');
for (letter = 'a'; letter <= 'f'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
