#include <stdio.h>

int main() {
    int a = 5, b = 7;

    printf("Begin: a = %d, b = %d\n", a, b); // Print initial values
    // normal swap 
    int temp = a;
    a = b;
    b = temp;
    printf("After normal swap: a = %d, b = %d\n", a, b);

    // swap using bitwise XOR
    a = a ^ b;  
    b = a ^ b;
    a = a ^ b;
    printf("After XOR swap: a = %d, b = %d\n", a, b);
    return 0;
}