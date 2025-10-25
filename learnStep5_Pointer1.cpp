#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

void increment(int *a, int *b) {
    int a1 = *a;
    int b1 = *b;
    
    *a = a1 + b1;
    *b = std::abs(a1-b1);  
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b;
    std::cin>> a >> b;
    
    increment(&a, &b);
    
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    
    return 0;
}
