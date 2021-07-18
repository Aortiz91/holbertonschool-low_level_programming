# 0x01. C - Variables, if, else, while

```
0-positive_or_negative.c -Complete the source code in order to print whether the number stored in the variable n is positive or negative.: Modified the code to add statements if and else, with funciton printf to print if the value n was +, - or 0

1-last_digit.c -Complete the source code in order to print the last digit of the number stored in the variable n.: Modified the code adding header <stdio.h>, the modular %10 to obtain the last digit of the value n, and with statements if and else and function printf printed the desire string according to the value of n.

2-print_alphabet.c -Write a program that prints the alphabet in lowercase, followed by a new line.: declarated variable abc and used for loop to print the alphabet using the values in ACSII table as reference to print only lowercase from a - z

3-print_alphabets.c -Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.: Used variable abc with for loop and putchar function to print all lowercase characters from a-z, also, used a new variable ABC with for loop and putchar function to print all uppercase letters from A-Z.

4-print_alphabt.c -Write a program that prints the alphabet in lowercase except "q" and "e", followed by a new line.:Declared variable abc, with for loop and conected to a conditional if that will print the value of abc if it is different (!=) than "q" and "e".

5-print_numbers.c -Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.: Single numbers of base 10 are from 0-9, declared my integer variable a and used for and putchar to print the value of a indicated it goes from '0' to '9' with increment of one.

6-print_numberz.c-Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.: Used the same code from 5

7-print_tebahpla.c -Write a program that prints the lowercase alphabet in reverse, followed by a new line.: Used the same code from 3 but starting with 'z' and ending on 'a' with decrement of one value (--)

8-print_base16.c -Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.: base 16 goes from 0-9 but also add the following 6 charactes a-f. Used for and putchar to print indicated characters as integers. 

9-print_comb.c -Write a program that prints all possible combinations of single-digit numbers separated by ", ".: Combination of single digits are the single digits itself,declared intefer variable comb, used for loop to print with putchar the values from 0 to 9, also used conditional if to indicate that if the character was different than 9 (!= 9) the program should print also ", " after the number.

100-print_comb3.c -Write a program that prints all possible different combinations of two digits separated by "," followed by a space, the two digits must be different, 01 and 10 are considered the same, and print only the smallest combination.: Declared variables a and b, used one for loop from 0-9 combined with another for loop from 0-9 within it, also, combined with a conditional if to exclude all values in which a is bigger or equal to b (!(a > b || a == b)) and by last, another conditional if, to indicate that all values different than 8 and 9 must be printed with ", ".

101-print_comb4.c -Write a program that prints all possible different combinations of three digits, separated by "," and followed by a space, also the three digits must be different and print only the smallest combination.: Used three chained for loops from 0-9, with a conditional if excluding all values of a > b, a == b, b > c and b == c, also the last printed number must be 789 as all of the following cominations are not the smallest. Used conditional if to print ", " after all combination except when a = 7, b = 8 and c =9.
```
