#include <stdio.h>
/**
 *main - Entry data
 *Description: Print single digit only with putchar
 *Return= Always (0) Success
 */
int main(void)
{
int a;
for (a = '0' ; a <= '9' ; a++)
putchar (a);
putchar ('\n');
return (0);
}
