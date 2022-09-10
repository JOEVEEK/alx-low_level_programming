#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 if successful
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)

		putchar(low);
	for (low = 'A'; low <= 'z'; low++)

	putchar(low);
	printf("\n");

return (0);
}
