#include <stdio.h>
#include <stdint.h>
// pass by value
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

// pass by reference
void swap();

typedef struct {

    uint8_t A[100];
    uint8_t B;
    uint8_t C;
    uint8_t D;
}Time_t ;
int main() {
    uint32_t Var = 0x0A0B0C0D;

    Time_t * ptr = &Var;
    
    printf("%x", ptr);
    ptr ++;
    printf("%x", ptr);

    return 0;
}