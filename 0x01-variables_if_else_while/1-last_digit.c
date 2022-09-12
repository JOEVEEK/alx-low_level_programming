#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints if number is positive, zero or negative
 *
 * description: using main function
 * This program prints "programming is positive, zero or negative"
 * Return: 0
 */
int main(void)
{
	int n;
	int c;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	c = n % 10;

	if (c > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, c);
	}
	else if (c == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, c);
	}
	else if (c < 6)
	{
		printf("Last digit of %d is %d is less than 6 and is not 0\n", n, c);
	}
	return (0);
}
