#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * description: prints lowercase alphabet in reverse.
 * Return: Always 0 (success)
 */
int main(void)
{
char letter;
for (letter = 'z'; letter >= 'a'; letter--)
putchar(letter);
putchar('\n');
return (0);
}
