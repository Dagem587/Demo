#include<stdio.h>
#include<stdlib.h>

/**
 * main - runs product for natural numbers
 * @num1: the first integer input
 * @num2: the second integer input
 * Return: 0 on success
 */

int main(int num1, int num2)
{
	printf("input num1: %d\n", num1);
	scanf("%d", &num1);
	printf("input num2: %d\n", num2);
	scanf("%d", &num2);

	int p = num1 * num2;
	int s = num1 + num2;
	int d = num1 - num2;
	int q = num1 / num2;
	int r = num1 % num2;
	
	printf("\n");
	printf("\n");
	printf("the product is: %d\n", p);
	printf("\n");
	printf("the sum is: %d\n", s);
	printf("\n");
	printf("the difference is: %d\n", d);
	printf("\n");
	printf("the quotient is: %d\n", q);
	printf("\n");
	printf("the remainder is: %d\n", r);
	printf("\n");

	return (0);
}
