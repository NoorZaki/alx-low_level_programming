#include <unistd.h>
/**
 * main - entry point
 *
 * description: -A C program that prints aline to the standard error
 *
 * Return: Always 1 (success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
