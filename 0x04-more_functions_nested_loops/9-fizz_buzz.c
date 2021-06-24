#include "holberton.h"
#include <stdio.h>
/**
 * main - Entry point
 * Description: Print numbers from 1-100,
 * multiples of 3 should print Fizz,
 * multiples of 5 should print Buzz,
 * multiples of 3 and 5 should print FizzBuzz.
 * Return: Always (0)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 != 0))
		printf(" Fizz");
		else if ((a % 5 == 0) && (a % 3 != 0))
		printf(" Buzz");
		else if ((a % 5 == 0) && (a % 3 == 0))
		print(" FizzBuzz");
		else
		printf(" %d", a);
	}
	printf('\n');
return (0);
}
