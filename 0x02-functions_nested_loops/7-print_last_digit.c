#include "main.h"

/**
 * main - check the code
 *@n the number
 * Return: Always 0.
 */
int print_last_digit(int n)
	int ld = n % 10;

	if (ld < 0)
		ld *= -1

	_putchar(ld + '0');

	return (0);
}
