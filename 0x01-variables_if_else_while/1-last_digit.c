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
	int L;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	L = n % 10;

	if (n > 5)
		printf("%s %d is %d and is greater than 5\n", str, n, L);
	else if (L == 0)
		printf("%s %d is %d and is 0\n", str, n, L);
	else if (L < 6)
		printf("%s %d is %d is less than 6 and is not 0\n", str, n, L);

	return (0);
}
