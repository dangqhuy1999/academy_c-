#include <stdio.h>

int main() {
    unsigned int a = 8; // 0x5
    // Check if `a` is power of 2 or not
    if ((a & (a-1)) == 0){
        printf("%d is power of 2", a);
    }
    else{
        printf("%d is not power of 2", a);
    }
    return 0;
}