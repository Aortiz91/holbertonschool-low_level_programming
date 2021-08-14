#include "main.h"
/**
 * main - Write a program that copies the content of a file to another file.
 * @argc: count of arguments 
 * @argv: pointer to arguments
 * Return: 0 Success
 */
void main(int argc, char *argv[])
{
	int o_from, o_to, r, w;
	char buffer[1024];

	if (argc != 3) /*as I will only have 2 more arguments: from and to*/
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	o_from = open(argv[1], O_RDONLY);
	o_to = open(argv[2], O_CREAT | O_WRONLY, 0664);
	if (o_to < 0)
		o_to = open(argv[2], O_TRUNC | O_WRONLY);
	if (o_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while (r)
	{
		r = read(o_from, buffer, 1024);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		w = write(o_to, buffer, r)
		if (w == -1 || w != r)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	close(o_from);
	if (close(o_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o_from), exit(100);
	close(o_to);
	if (close(o_to) == 1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", j), exit(100);
	return (0);
}
