#include "main.h"

/**
 * main - check the code
 *@n the number
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	 int ld = n % 10;
	return (ld);
}
