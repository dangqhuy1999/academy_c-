#include <stdio.h>
#include <stdint.h> // use for uint8_t, uint32_t


// If you want to storage the difference data type(int, float , char, array), 
// you will hard to create more array
// struct will help you do it

typedef struct {
    int time; // 32 bits
    float temp; // 32 bits
    int huminity; // 32 bits
} S_Censor;


typedef struct {
    uint8_t  A; // 1 byte + 3 bytes padding
    uint32_t B; // 4 bytes - not change follow each OS 
} TestType; // 8 bytes have Alignment Padding

/*
Bank3   Bank2   Bank1   Bank0
B       B       B       B       0x0008
pad     pad     pad     A       0x0004
*/

typedef struct __attribute__((packed)){
    uint8_t  A; // 1 byte
    uint32_t B; // 4 bytes - not change follow each OS 
} TestType; // 5 bytes have not Alignment Padding

/*
Bank3   Bank2   Bank1   Bank0
                        B       0x0008
B       B       B       A       0x0004
*/

// NOTICE: 
//      Use `Packed` when you need to encapsulate data 
//      and send through internet(such as CAN, UART)
//      or save with tiny storage 

int main() {

    S_Censor a; // Un-initiallized variable
    S_Censor b = {1,20.4,4};// Initallized fully variable
    S_Censor c = {.time=2,.temp = 30.41, .huminity= 20 }; // Initallized fully variable with attribute name 
    S_Censor d = {.time = 3, .huminity = 22}; // Initallized partly variable with attribute name

    S_Censor * pointer = &a;

    // (*pointer).time = 2;
    pointer->time  = 2;

    printf("%d %d", sizeof(a), a.time); // sum bytes

    return 0;
}