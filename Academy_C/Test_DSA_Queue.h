// Include Guard ( a mandatory Standard) 
#ifndef _QUEUE_H_
#define _QUEUE_H_

// Include Library
#include <stdio.h> // Use for printf, scanf, I/O 
#include <stdint.h> // using uint8_t

// Pre-Define Macro
// instead <stdbool.h>
#define TRUE                    ((uint8_t)1U)
#define FALSE                   ((uint8_t)0U)
// instead <stdbool.h>

#define QUEUE_EMPTY             ((uint8_t)0U)
#define QUEUE_EMPTY_PEEK_VALUE  ((uint8_t)0U)

// Default size of Queue
#define QUEUE_DEFAULT_SIZE     ((uint8_t)5U)

// Create a Struct type for Queue.
typedef struct { // allocate for this struct is 8 bytes memory
    int8_t Front, Rear;         // sign data type + and - that represent index in queue
    uint8_t Capacity, Size;     // unsign data type that represent index in queue  
    uint32_t *arrayQueue;      // 2^32 = 4294967296 
} Queue_Types;

// Define functions(APIs)

/*
What do you think about that?
I need to perform 2 action:
- Push a task into queue (check isFull())
- Pop a task out of queue (check isEmpty())
- Peek, pop to check not pop out(integrity)
*/

void pushQueue(Queue_Types * queue, uint32_t num);
void popQueue(Queue_Types * queue); 
uint32_t peekQueue(Queue_Types * queue); // Read-only
uint32_t backQueue(Queue_Types * queue); // Read-only
uint8_t isFull(Queue_Types * queue);
uint8_t isEmpty(Queue_Types * queue);

#endif /* _QUEUE_H_ */
