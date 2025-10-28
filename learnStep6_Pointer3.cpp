/*
Request: Create a dynamic array of interger to store points of students.
*/

#include <iostream> // std::cin, std::cout
#include <vector>   // std::vector
#include <string>   // std::string
struct newStruct {
int an = 10;
std::string bn;
};

void create_new_array(newStruct* x);
void create_new_array_alt(newStruct* x);



int main(){

    newStruct st1 = {12, "Huy Dang"};
    create_new_array(&st1);
    std::cout<<st1.an << " " << st1.bn<< std::endl;
    return 0;
}

// Hàm được sửa
void create_new_array(newStruct* a) {
    a->an = 1; // Corrected: Gán an = 1 (Không phải +1)
    a->bn += "\nLet's see!";
}

// Hàm được sửa (Nếu bạn sử dụng *)
void create_new_array_alt(newStruct* a) {
    (*a).an = 1; // Corrected: Gán an = 1
    (*a).bn += "\nLet's see!";
}