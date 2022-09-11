#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 always
 */
int main(void)
{
	int c;

	for (c = 32; c <= 41; c++)
	{
		putchar(c);
		if (c != 41)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');

		return (0);
}
