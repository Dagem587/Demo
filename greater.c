#include<stdio.h>

/**
 * main - identifies the greatest number from 3 options
 * Return: 0 on success
 */

int main(void)
{
	float num1;
	float num2;
	float num3;

	printf("Enter the first number: \n");
	scanf("%f", &num1);
	printf("Enter the second number: \n");
	scanf("%f", &num2);
	printf("Enter the third number: \n");
	scanf("%f", &num3);

	if (num1 > num2 && num1 > num3)
	{
		printf("The largest number is %f\n", num1);
	}
	else if (num2 > num1 && num2 > num3)
	{
		printf("The largest number is %f\n", num2);
	}
	else
	{
		printf("The largest number is %f\n", num3);
	}
	return (0);
}
