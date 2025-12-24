#include <stdio.h>
#include <stdint.h>

// Un-Initalized Global Variable
// uint32_t Array[5]; // Zero [0,0,0,0,0]

int main() {
    // uint32_t Array[5]; // Garbage 
    // uint32_t Array[5] = {3,5,2,5,6};
    uint32_t Array[5] = {0};
    //uint32_t Array[] = {34,1,3}; // No declare size of array

    //printf("%d", sizeof(Array));
    // printf("%d %d %d %d %d", Array[0],Array[1], Array[2], Array[3], Array[4]);
    // Address of array's elements
    //printf("%d %d %d %d %d", &Array, &Array[0],&Array[1], &Array[2], &Array[3], &Array[4]);
    
    // Array - Accesing an element
    // *(Array+2) = 10;
    // printf("%d %d %d %d %d", Array[0],Array[1], Array[2], Array[3], Array[4]);
    
    //String in C

    //char str[] = "Hello"; // "Hello\0"
    

    //char str[] = "Hello dsfafdasytreytreuythgfdyytrtrefd"; // "Hello\0"

    //char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};

    // size of stack is small, easy stackoverflow if str about 200 bytes
    const char* str = "Hello dsfafdasytreytreuythgfdyytrtrefd";
    // str = poiter -> stack
    // "Hello dsfafdasytreytreuythgfdyytrtrefd" -> text code (.const)

    /*
    Nếu lưu hết vào RAM (Stack)(can Read and Write): 
    RAM của Pi Pico rất nhỏ (chỉ 264KB), 
    nó sẽ bị đầy ngay lập tức và treo máy.

    Lưu vào Text Code (Flash) (Read-only when runtime): 
    Flash của Pico lên tới 2MB (lớn hơn RAM rất nhiều). 
    Việc để những thứ "không bao giờ thay đổi" 
    ở Flash là một chiến thuật cực kỳ thông minh để tiết kiệm tài nguyên.

    The error 
    "ISO C++ forbids 
    converting a string constant to 'char*' 
    [-Wwrite-strings]" 
    occurs because in C++, 
    string literals (text in double quotes) 
    string literals (text in double quotes) 
    are `constant` by default 
    and cannot be assigned to 
    a non-constant char* pointer. 
    Modifying a string literal results 
    in undefined behavior 
    or a potential crash 
    because they might be stored in read-only memory. 
     */

    
    //printf("%s", str);
    printf("%d", sizeof(str)); // sum bytes

    return 0;
}