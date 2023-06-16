#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * description: program prints digit num of base 10 start from 0
 * return: Always 0 (success)
 */
int main(void)
{
int digit = 0;
while (digit <= 9)
{
putchar(digit + '0');
digit++;
}
putchar('\n');
return (0);
}
