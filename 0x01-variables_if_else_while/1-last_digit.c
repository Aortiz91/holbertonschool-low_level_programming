#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry data
 * Return: Always (0) Success
 */
int main(void)
{
	int n;
int a = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (a > 5)
{
	printf("Last digit of %d is %d and is greather than 5\n", n, a);
}
else if (a == 0)
{
printf("Last digit of %d is %d and is 0\n", n, a);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
}
return (0);
}
