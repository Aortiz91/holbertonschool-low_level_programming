#include <stdio.h>
/**
 * main - Entry Point
 * Description: Program that finds and prints the largest
 * prime factor of a number
 */
int main(void)
{
long a;
long b = 612852475143;
	for (a = 2; a < b; a++)
	{
		if (b % a == 0)
		b = (b / a);
	}
	printf("%li\n", b);
	return (0);
}
