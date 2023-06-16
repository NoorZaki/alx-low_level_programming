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
int n;
for (n = 0; n < 10; n++)
putchar((n % 10) + '0');
putchar('\n');
return (0);
}
