#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * description: print the alphabet without q and e.
 * Return: Alawys 0 (success)
 */
int main(void)
{
for (i = 97; i < 123; i++)
{
if (i != 101 && i != 113)
{
putchar(i);
}
}
putchar('\n');
return (0);
}
