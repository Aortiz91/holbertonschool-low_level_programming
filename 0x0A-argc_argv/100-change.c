#include <stdio.h>
#include <stdlib.h>
/**
 * main - Write a program that prints the minimum number
 * of coins to make change for an amount of money.
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: 1 if less than 0, otherwise 0
 */
int main(int argc, char *argv[])
{
	int a, cents;
	int coins[] = {25, 10, 5, 2, 1};
	int total;

	total = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (a = 0; a < 5 && cents > 0; a++)
	{
		while (cents >= coins[a])
		{
			cents -= coins[a];
			total++;
		}
	}
	printf("%d\n", total);
	return (0);
}
