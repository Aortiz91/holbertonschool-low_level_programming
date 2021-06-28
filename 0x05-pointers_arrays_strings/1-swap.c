#include "holberton.h"
/**
 * swap_int - Entry point
 * @a: integer a 
 * @b: integer b
 * Description:Write a function that swaps the values of two integers.
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
