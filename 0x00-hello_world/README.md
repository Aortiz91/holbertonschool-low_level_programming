#0x00. C - Hello, World

```
0-preprocessor: Write a script that compiles a C file but does not link: used gcc and -E to sop after processing stage. Output was used as input to a new file with -o
1-compiler -Write a script that compiles a C file but does not link: Used -c to stop the process in the link stage and as the output is .o by default, only specified the name which is the same as $CFILE
2-assembler -Write a script that generates the assembly code of a C code and save it in an output file: Used -S to stop the process in Assemble and as the output is .s by default, only specified the name which is the same as $CFILE
3-name -Write a script that compiles a C file and creates an executable named cisfun: Used gcc to run the c file and -o to indicate the output must be used to create a new file
4-puts.c -Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new lin: Usted puts to print string indicated.
5-printf.c -Write a C program that prints exactly "with proper grammar, but the outcome is a piece of art,", followed by a new line: Used function printf to show print the string indicated. 
6-size.c -Write a C program that prints the size of various types on the computer it is compiled and run on: Used function printf and placeholder %zu to read the size of the indicated characters.
100-intel -Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file: Used gcc and -S to interrupt the translation in the assembly stage. and used -masm=intel to indicate that the code must be generated with Intel syntax
```
