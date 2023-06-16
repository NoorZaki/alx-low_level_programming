#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * description:print the alphabet.
 * Return: Alawys 0 (success)
 */
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i = 0; i < 52; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}
