#include "main.h"

/*
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: a pointer to the name of the file
 * @letters: number of letter the function should read and print
 *
 * Return: if filename is NULL return 0
 * o/w actua; number of bytes the function can read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters)
		if (buffer == NULL)
			return (0);
}
