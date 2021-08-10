#include "main.h"
/**
 * main - Write a program that copies the content of a file to another file.
 * @argc: 
 * @argv:
 * Return: Nothing
 */
void main(int argc, char *argv[])
{
	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_RDWR | 0664);:x


}
