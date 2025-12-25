#include <stdio.h>

// pass by value
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

// pass by reference
void swap();
int main() {

    return 0;
}