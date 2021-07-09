#include <stdio.h>
#include <stdlib.h>
/**
 * main - Write a program that adds positive numbers
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, sum;

	sum = 0;
	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			sum += atoi(argv[a]);
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("0\n");
		return (0);
	}
}
