#include "stdio.h"
/**
   * modif_my_char_var - Solve me
    *
     * Return: nothing.
      */
void modif_my_char_var(char *c, char d)  
{
	   *c = 'o';
	      d = 'l';
}

/**
   * main - Solve me
    *
     * Return: Always 0.
      */
int main(void)
{
	   char f;
	      char *p;

	         p = &f;
		    f = 'H';
		    printf("Before modif, p is %p\n", p);
		    printf("Before modif, f is %c\n", f);
		       modif_my_char_var(p, f);
		       printf("After modif, p is %p\n", p);
		       printf("After modif, f is %c\n", f);
		          return (0);
}
