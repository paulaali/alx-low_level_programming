#include "main.h"

/**
 * jack_bauer - prints every minutes
 */
void jack_bauer(void)
{
	int H, M;

	for (H = 0; H <= 23; H++)
	{
		for (M = 0; M <= 59; M++)
		{
			_putchar((H / 10) + '0');
			_putchar((H % 10) + '0');
			_putchar(':');
			_putchar((M / 10) + '0');
			_putchar((M % 10) + '0');
			_putchar('\n');
		}
	}
}
