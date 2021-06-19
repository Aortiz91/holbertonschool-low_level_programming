#include <stdio.h>
/**
 * main - Entry data
 * Description: Print all numbers of base 16 -lowercase
 * Return: Always (0) Success
 */
int main(void)
{
int num;
int abc;
for (num = '0' ; num <= '9' ; num++)
putchar (num);
for (abc = '0' ; abc <= 'f' ; abc++)
putchar (abc);
putchar ('\n');
return (0);
}
