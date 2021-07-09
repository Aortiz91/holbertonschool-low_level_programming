#include <stdio.h>
#include <stdlib.h>
/**
 * main - Write a program that multiplies two numbers
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	if (argc == 3)
	{
		a = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", a);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (0);
	}
}
