#include "Test_DSA_Queue.h"
#include <stdlib.h>

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


int main() {
    // array in RAM (stack)
    // malloc in RAM (heap)

    Queue_Types myQueue;
    myQueue.Front = -1;
    myQueue.Rear = -1;
    myQueue.Capacity = 0;
    myQueue.Size = QUEUE_DEFAULT_SIZE;
    myQueue.arrayQueue = (uint32_t *)malloc(myQueue.Size * sizeof(uint32_t));
    
    
    pushQueue(&myQueue, 10);
    pushQueue(&myQueue, 20);
    pushQueue(&myQueue, 30);

    printf("Size: %d\nCapacity: %d\nPeek: %u\n", myQueue.Size, myQueue.Capacity, peekQueue(&myQueue)); // Expected output: 10
    popQueue(&myQueue);
    printf("Peek after pop: %u\n", peekQueue(&myQueue)); // Expected output: 20
    // Free allocated memory
    free(myQueue.arrayQueue);   

    return 0;
}

// function check Queue wonder isFull or not
uint8_t isFull(Queue_Types * queue){
    if(queue->Capacity == queue->Size){
        return TRUE;
    }
    return FALSE;
}

// function check Queue wonder isEmpty or not
uint8_t isEmpty(Queue_Types * queue){
    if(queue->Capacity ==  QUEUE_EMPTY){
        return TRUE;
    }
    return FALSE;
}

//Push data into Queue
void pushQueue(Queue_Types * queue, uint32_t num){
    // Check if queue is full
    if(!isFull(queue)){
        if (queue->Front == -1) {
            queue->Front = 0; // Initialize front if it's the first element
        }
        // Increment front and rear
        queue->Rear ++;
        // Add new element to the queue
        queue->arrayQueue[queue->Rear] = num;
        // increment capacity
        queue->Capacity ++;
    } else {
        printf("Queue is full\n");  
    }
    
}

// Pop data out of Queue
void popQueue(Queue_Types * queue){
    // Check if queue is empty
    if(!isEmpty(queue)){
        // Increment front to remove the element
        queue->Front++;
        // decrement capacity
        queue->Capacity --;
    } else {
        printf("Queue is empty\n");
    }
}
// Peek data at front of Queue
uint32_t peekQueue(Queue_Types * queue){
    // Check if queue is empty
    if(isEmpty(queue)){
        printf("Queue is empty\n");
        return QUEUE_EMPTY_PEEK_VALUE;
    }
    return queue->arrayQueue[queue->Front];
}

uint32_t backQueue(Queue_Types * queue){
    // Check if queue is empty
    if(isEmpty(queue)){
        printf("Queue is empty\n");
        return QUEUE_EMPTY_PEEK_VALUE;
    }
    return queue->arrayQueue[queue->Rear];
}   