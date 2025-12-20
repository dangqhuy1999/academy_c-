#include <stdio.h>

int main() {
    int a = 5; // 0x5
    // Turn on 3rd bit
    a = a | (1 << 2); // Set 3rd bit
    printf("After turning on 3rd bit: a = %d\n", a);
    // Turn off 2nd bit
    a = a & ~(1 << 1); // Clear 2nd bit
    printf("After turning off 2nd bit: a = %d\n", a);
    // Toggle 1st bit
    a = a ^ (1<< 0); // Toggle 1st bit
    printf("After togging 1st bit a = %d\n", a); // 0x7
    // Check if 4th bit is set
    if (a & (1 << 3)) {
        printf("4th bit is set\n");
    } else {
        printf("4th bit is not set\n");
    }

    return 0;
}