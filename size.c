#include<stdio.h>

/**
 * main - prints the size of data types
 * Return: 0 on success
 */

int main(void)
{
	int n = 1;
	int o = 4;
	int p = 4;
	int q = 8;
	int r = 4;

	printf("Size of a char: %d byte(s)\n", n);
	printf("Size of an int: %d byte(s)\n", o);
	printf("Size of a long int: %d byte(s)\n", p);
	printf("Size of a long long int: %d byte(s)\n", q);
	printf("Size of a float: %d byte(s)\n", r);

	return (0);
}
