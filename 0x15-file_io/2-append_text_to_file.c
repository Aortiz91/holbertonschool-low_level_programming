#include "main.h"
/**
 * append_text_to_file - Write a function that appends text at the
 * end of a file.
 * @filename: Name of the file to be created.
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 Sucess or -1 Failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, length;

	if (filename == NULL)
		return (-1);
	if (text_content)
	{
		for (length = 0; text_content[length]; length++)
		;
	}
	else
		length = 0;
	o = open(filename, O_CREAT | O_RDWR, 0600);
	w = write(o, text_content, length);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
