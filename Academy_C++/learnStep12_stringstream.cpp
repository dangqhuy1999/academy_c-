#include <iostream>
#include <vector>
#include <sstream>
#include <cmath> 

std::vector<int> func1(const std::string& str) {
    std::vector<int> numbers;
    std::stringstream ss(str);
    int number;
    char ch; 
    while (ss >> number) { // read an integer
        numbers.push_back(number);
        ss >> ch; // to consume the comma
    }

    return numbers;
}

int main() {
    std::string input;
    // std::cin >> input; // Read only one word (token) from Input.
    std::getline(std::cin, input); // Read the entire Input line (including spaces).
    /*
     Problems Arising When Input Has White Spaces
     Although in the example 10,20,30,40,50
     both work the same, but if your Input has extra spaces:
     Input
     10, 20, 30, 40, 50
     The result of std::cin >> input
     input just"10,"
     The result of std::getline
     input To be "10, 20, 30, 40, 50"
    */
    
    int n = 8* std::pow(10,5); //
    if (input.length() < n) { // just a sample condition
        std::vector<int> arr = func1(input);
        
        for (int i : arr) {
            std::cout << i << "\n";
        }
    }
    return 0;
}