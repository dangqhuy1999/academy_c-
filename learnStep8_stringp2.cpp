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


int main() {
    std::vector<char> vecChar;
    std::string input{""};
    std::cin >> input;
    for(char c : input){
        vecChar.push_back(c);
    }
    std::reverse(vecChar.begin(), vecChar.end());
    std::string right{""};
    for(char c : vecChar){
        right+=c;
    }
    if (input == right){
        std::cout << input << std::endl;
    }
    else {
        std::cout << "Not Symmetry"<< std::endl;
    }
    return 0;
}