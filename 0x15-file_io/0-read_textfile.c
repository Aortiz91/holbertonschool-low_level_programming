#include "main.h"
/**
 * read_textfile - Write a function that reads a text file and prints it to the
 * POSIX standard output. 
 * @filename: Name of the file
 * @letters: number of letters the program should read and print
 * Return: Actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *size;

	if (filename == NULL)
		return (0);

	size = malloc(sizeof(char) * letters);
	if (size == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, size, letters);
	w = write(STDOUT_FILENO, size, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(size);
		return (0);
	}
	free(size);
	close(o);

	return (w);
}
