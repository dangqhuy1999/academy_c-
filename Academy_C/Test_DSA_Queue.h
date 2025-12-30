// Include Guard ( a mandatory Standard) 
#ifndef _QUEUE_H_
#define _QUEUE_H_

// Include Library
#include <stdio.h> // Use for printf, scanf, I/O 
#include <stdint.h> // using uint8_t

// Pre-Define Macro
#define TRUE                    (1U)
#define FALSE                   (0U)
#define QUEUE_EMPTY             (0U)
#define QUEUE_EMPTY_PEEK_VALUE  (0U)

// Create a Struct type for Queue.
typedef struct { // allocate for this struct is 8 bytes memory
    int8_t Front, Rear;         // sign data type + and - that represent index in queue
    uint8_t Capacity, Size;     // unsign data type that represent index in queue  
    uint32_t *arrayQueue;      // 2^32 = 4294967296 
} Queue_Types;

// Define functions(APIs)
void Queue_Push();


#endif /* _QUEUE_H_ */