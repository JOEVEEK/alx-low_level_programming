#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter.
 * @str: string to be copied
 *
 * Return: NULL if error occurs, pointer to allocated space
 */

char *_strdup(char *str)
{
	char *cpy;
	int index, lens;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		index++;
	cpy = malloc(sizeof(char) * (lens + 1));

	if (cpy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		cpy[index] = str[index];
	}

	cpy[lens] = '\0';

	return (cpy);
}
