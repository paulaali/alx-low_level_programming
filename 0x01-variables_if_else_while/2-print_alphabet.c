#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int lowerCase = 'a';
while (lowerCase <= 'z')
{
putchar (lowerCase);
lowerCase += 1;
}
putchar('\n');
return (0);
}
