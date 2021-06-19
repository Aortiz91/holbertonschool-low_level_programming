#include <stdio.h>
/**
 * main - Entry data
 * Description: Print reversed lower case alphabet
 * Return: Always (0) Success
 */
int main(void)
{
int abc;
for (abc = 'z' ; abc >= 'a' ; abc--)
putchar (abc);
putchar ('\n');
return (0);
}
