/*
INPUT:
 aahbhaa
OUTPUT when reversed:
 aahbhaa
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

bool is_symmetry(const std::string &str){
    int n = str.length();
    for(int i=0; i<n/2; i++){
        if (str[i] != str[n-i-1]){
            return false;
        }
    }
    return true;
}

int main() {
    std::string input{""};
    std::cin >> input;
    if (is_symmetry(input)){
        std::cout << input << std::endl;
    }
    else {
        std::cout << "Not Symmetry"<< std::endl;
    }
    return 0;
}