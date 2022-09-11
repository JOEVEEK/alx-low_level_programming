#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 always
 */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low++)
		putcha(low);
		putchar('\n');

	return (0);
}
