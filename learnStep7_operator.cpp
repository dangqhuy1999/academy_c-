/*
Learn C++ Programming use Operators
*/
#include <iostream>

int main() {
    int a =4;
    int y = a++;
    std::cout << y << std::endl;
    std::cout << a << std::endl;
    int soLuongSV = 5;
    a+=soLuongSV;
    std::cout << a << std::endl;

    /*
    int y = ++a;
    std::cout << y << std::endl;
    std::cout << a << std::endl;
    int soLuongSV = 5;
    a+=soLuongSV;
    std::cout << a << std::endl;
    */
    return 0;
}