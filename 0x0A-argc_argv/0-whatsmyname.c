#include <stdio.h>
/**
 * main - Write a program that prints its name, followed by a new line
 * @argv: array of arguments
 * @argc: count of arguments
 * Return: name of the program
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	printf("%s\n", argv[a]);
return (0);
}
