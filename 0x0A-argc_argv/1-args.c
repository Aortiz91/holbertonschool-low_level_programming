#include <stdio.h>
/**
 * main - Write a program that prints its name, followed by a new line
 * @argv: array of arguments
 * @argc: count of arguments
 * Return: name of the program
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc);
	argv[0] = 0;
	return (0);
}
