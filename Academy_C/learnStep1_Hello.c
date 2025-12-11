#include <stdio.h> // Standard input/output, printf, scanf, etc.
#include <string.h> // String Handling, manipulation functions with strlen, strcpy, strcat, strcmp, etc.
#include <math.h> // Mathematical functions like sqrt, pow, sin, cos, etc.
#include <stdlib.h> // Standard library functions like memory allocation(malloc, free),
                    // process control(exit), conversions(atoi, atof), etc.

int main() 
{ 	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT 
    In this challenge, 
    we will learn some basic concepts of C
    that will get you started with the language.
    you will need to use the same syntax 
    to read input and 
    write output in many C challenges.
    
    Task:
    This challenge requires you to 
    print `Hello, World!` on a single line,
    and then print 
    the already provided input string to stdout.
    If you are not familiar with C,
    you may want to read about the printf() command.

    Example:
    s = "Life is beautiful"
    The required output is:
    ```
    Hello, World!
    Life is beautiful
    ```

    Function Description:
    Complete the 'main' function has the following input:
    - string s: a string
    Prints
    - *two strings:* "Hello, World!" on one line
    and the input string on the next line.
    
    Input Format:
    There is one line of text s.
    Sample input 0:
    ```
    Welcome to C programming.
    ```

    Sample output 0:
    ```
    Hello, World!
    Welcome to C programming.
    ```
    */ 
   
    char s[100];
    scanf("%[^\n]%*c", &s);
    printf("Hello, World!\n.");
    printf("%s\n", s);

    return 0;
}