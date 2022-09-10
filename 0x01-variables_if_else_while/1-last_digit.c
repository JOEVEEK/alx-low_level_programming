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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n = 1 % 10;

if (n > 5)
{
	printf("Last dugit of %d is %d and is greater than 5\n", n, 1);
}
else if (1 == 0)
{
	printf("Last dugit of %d is %d and is 0\n", n, 1);
}
else
{
	printf("Last dugit of %d is %d is less than 6 and is not 0\n", n, 1);
}
return (0);
}
