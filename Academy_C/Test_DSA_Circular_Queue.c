#include <stdio.h>
#include <stdlib.h>

// Định nghĩa cấu trúc Queue
typedef struct {
    int *array;     // Con trỏ trỏ đến mảng động
    int capacity;  // Sức chứa tối đa hiện tại
    int front;     // Chỉ số phần tử đầu hàng
    int rear;      // Chỉ số phần tử cuối hàng
    int size;      // Số lượng phần tử hiện có
} Queue;

// Hàm khởi tạo hàng đợi
Queue* createQueue(int initialCapacity) {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->capacity = initialCapacity;
    queue->front = 0;
    queue->size = 0;
    queue->rear = initialCapacity - 1; 
    queue->array = (int*)malloc(queue->capacity * sizeof(int));
    return queue;
}

// Kiểm tra hàng đợi đầy
int isFull(Queue* queue) {
    return (queue->size == queue->capacity);
}

// Kiểm tra hàng đợi rỗng
int isEmpty(Queue* queue) {
    return (queue->size == 0);
}

// Thêm phần tử (Enqueue)
void enqueue(Queue* queue, int item) {
    if (isFull(queue)) {
        // Tăng gấp đôi kích thước mảng nếu đầy (Tính chất mảng động)
        queue->capacity *= 2;
        queue->array = (int*)realloc(queue->array, queue->capacity * sizeof(int));
        printf("Da mo rong dung luong len: %d\n", queue->capacity);
    }
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->array[queue->rear] = item;
    queue->size = queue->size + 1;
    printf("Da them %d vao hang doi\n", item);
}

// Lấy phần tử ra (Pop/Dequeue)
int pop(Queue* queue) {
    if (isEmpty(queue)) {
        printf("Loi: Hang doi rong!\n");
        return -1;
    }
    int item = queue->array[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size = queue->size - 1;
    return item;
}

// Giải phóng bộ nhớ
void freeQueue(Queue* queue) {
    free(queue->array);
    free(queue);
}

int main() {
    Queue* queue = createQueue(2); // Khởi tạo hàng đợi sức chứa ban đầu là 2

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30); // Vượt quá 2, mảng sẽ tự động mở rộng

    printf("Phan tu lay ra (pop): %d\n", pop(queue));
    printf("Phan tu lay ra (pop): %d\n", pop(queue));
    
    enqueue(queue, 40);
    printf("Phan tu lay ra (pop): %d\n", pop(queue));

    freeQueue(queue);
    return 0;
}
