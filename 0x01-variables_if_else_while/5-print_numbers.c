#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * description: prints numbers from 0 to 9.
 * Return: Always 0 (success)
 */
int main(void)
{
int digit = 0;
while (digit <= 9)
{
printf("%i", digit);
digit++;
}
printf("\n");
return (0);
}
