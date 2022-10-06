#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: first integer number
 * @max: last integer number
 *
 * Return: pointer to newly allocated memory of NULL if fails
 */

int *array_range(int min, int max)
{
	int i, t;

	int *a

	if (min > max)
		return (NULL);

	t = max - min + 1;
	a = malloc(sizeof(int) * t);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < t; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}
