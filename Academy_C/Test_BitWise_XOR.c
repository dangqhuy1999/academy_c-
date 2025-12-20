#include <stdio.h>

int main() {
    int a = 5, b = 7;
    // Print initial values
    printf("Begin: a = %d, b = %d\n", a, b); 
    
    // normal swap 
    int temp = a;
    a = b;
    b = temp;
    printf("After normal swap: a = %d, b = %d\n", a, b);

    // swap using bitwise XOR
    a = a ^ b;  // x = a^b 
    b = a ^ b;  // b = x^b
    a = a ^ b;  // a = x^b
    printf("After XOR swap: a = %d, b = %d\n", a, b);
    return 0;
}