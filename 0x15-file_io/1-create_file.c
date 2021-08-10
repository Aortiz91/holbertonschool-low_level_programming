#include "main.h"
/**
 * create_file - Create a function that creates a file.
 * @filename: Name of the file to be created.
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 Sucess or -1 Failure
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, length;

	if (filename == NULL)
		return (-1);
	if (text_content)
	{
		for (length = 0; text_content[length]; length++)
		;
	}
	o = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	w = write(o, text_content, length);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
