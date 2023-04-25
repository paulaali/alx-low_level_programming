#include <stdio.h>
/**
  *main-entry point
  *Return: always 0 (success)
  */
int main(void)
{
	printf("size of a char: %zu byte(s)\n", sizeof(char));
	printf("size of an int: %zu byte(s)\n", sizeof(int));
	printf("size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("size of float: %lu byte(s)", sizeof(float));
	return (0);
}
