#include <stdio.h>
/*
Consider a compiled C program named myprogram.
Command:
`./myprogram file.txt arg2 123` // use for run fiel code 

Inside the program:
- argc will be 4.
- argv will be an array containing:
    argv[0]: "./myprogram"
    argv[1]: "file.txt"
    argv[2]: "arg2"
    argv[3]: "123" 
    */
int main(int argc, char * argv[]) {
    printf("Number of arguments: %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }
    return 0;
}