#include <stdio.h> // Use for printf, scanf, i o 
#include <stdint.h> // using uint8_t


// QUEUE (FIFO)
// The basis of queue is put each task into waiting rows
// and wait to its turn to perform task itself follow priority
// to manage data structure better

// TASK: Design a program that collect data for node from sensor nodes has communicate with CAN network.
// with this tassk we will user using ADC interrupt
// when sensors completely convert data , 
// we will read data(read and save adc status using queue), processing , and transmit through UART 

// front / rear is represent for 2 pointer  to begin and end of Queue 
// We initialize front and rear by -1
// push / pop is 2 the most important actions of queue
// - push-enqueue: will push 1 new value into queue 
//      increase capacity and rear by 1 unit.
//      before we begin, do action isFull() to check
// - pop-dequeue: get a valie out of queue. 
//      descrease capacity and front by 1 unit.
//      before we begin, do action isEmpty() to check

// Pre-Define 
#define TRUE        (1U)
#define FALSE       (0U)

// Step 1 : Create a struct type for Queue.
typedef struct { // allocate for this struct is 8 bytes memory
    int8_t Front, Rear;         // sign data type + and - that represent index in queue
    uint8_t Capacity, Size;     // unsign data type that represent index in queue  
    uint32_t *arrayQueue;      // 2^32 = 4294967296 
} Queue_Types;


int main() {
    // array in RAM (stack)
    // malloc in RAM (heap)

    int a;
    printf("%d", sizeof(a));
    
    return 0;
}
