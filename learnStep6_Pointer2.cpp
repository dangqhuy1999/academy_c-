/*
Request: Create a dynamic array of interger to store points of students.
*/

#include <iostream> // std::cin, std::cout
#include <vector>   // std::vector

void func0(int x);
void func1(int &x);
void func2(int *x); 
void func3(int* &ref, int soluong);

int main(){

    int c = 10;
    func0(c);

    int a = 10;
    int &r = a; // r is a reference to a
    func1(a);
    std::cout << a << std::endl;
 
    int b = 10;
    int *p = &b; // p is a pointer to b
    func2(&b);
    std::cout << b << std::endl;

    int soluong = 3;
    int *ptr = nullptr;
    int* &ref = ptr; // refPtr is a reference to ptr
    func3(ptr, soluong);

    int n = 123;
    int *pN = &n;
    int* &refPtr = pN; // refPtr is a reference to pN
    int **ppN = &pN; // ppN is a pointer to pN
    std::cout << *refPtr << std::endl;
    
    return 0;
}

void func0(int x){
    x = x + 5;
}
void func1(int &x){
    x = x + 5;
}
void func2(int *x){
    *x = *x + 5;
}
void func3(int* &ref, int soluong){
    ref = new int[soluong];
    for(int i=0; i<soluong; i++){
        ref[i] = i*10;
        std::cout << ref[i] << " ";
    }
}
