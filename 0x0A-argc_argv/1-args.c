#include <stdio.h>
/**
 * main - Write a program that prints the number of arguments passed into it.
 * array of arguments
 * @argc: count of arguments
 * Return: name of the program
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc -1);
	(void)argv;
	return (0);
}
