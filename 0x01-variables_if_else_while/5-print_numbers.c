#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints all single digit numbers of base 10 starting from 0
 *
 * Rrturn: 0 if successful
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf('\n');

	return (0);
}
