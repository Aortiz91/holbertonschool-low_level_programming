#include <stdio.h>
#include "holberton.h"
/**
 * main - Write a program that computes and prints the sum of all
 * the multiples of 3 or 5 below 1024 (excluded)
 * Return: (0)
 */
int main(void)
{
	long unsigned int a, sum;
	long unsigned int n = 0, m = 0;

	for (a = 1; a < 1024; a++)
		if (a % 3 == 0)
			m = m + a;
		else if (m % 5 == 0)
			n = n + a;
	sum = n + m;
	printf("%lu\n", sum);
	return (0);
}
