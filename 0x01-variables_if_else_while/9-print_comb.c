#include <stdio.h>
/**
 *main - Entry data
 *description: Print all possible combinations of single-digit numbers
 *Return: Always (0) Success
 */
int main(void)
{
int comb;
for (comb = '0' ; comb <= '9' ; comb++)
{putchar (comb);
if (comb != '9')
{
putchar (',');
putchar (' ');
}
}
putchar ('\n');
return (0);
}
