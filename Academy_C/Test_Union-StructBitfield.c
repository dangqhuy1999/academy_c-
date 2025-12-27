#include <stdio.h>
#include <stdint.h> // use for uint8_t, uint32_t

typedef union {
    int time; // 32 bits
    float temp; // 32 bits
    int huminity; // 32 bits
} S_Censor;


int main() {

    S_Censor a;
    S_Censor * pointer = &a;

    // (*pointer).time = 2;
    pointer->time  = 2;

    printf("%d %d", sizeof(a), a.time); // sum bytes

    return 0;
}