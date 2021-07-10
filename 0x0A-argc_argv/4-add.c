#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Write a program that adds positive numbers
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, sum;

	sum = 0;
	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			for (b = 0; argv[a][b]; b++)
			{
				if (!isdigit(argv[a][b]))
				{
					printf("Error\n");
					return (1);
				}
			}
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
