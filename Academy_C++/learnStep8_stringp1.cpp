/*
INPUT:
 assbhhhhsssrsss
OUTPUT:
 as2bh4s3rs3
*/
#include <iostream>
#include <string>

int main() {
    std::string input{""};

    std::cin >> input;
    std::cout << input[0] << std::endl;
    std::string result = "";
    char k=input[0]; 
    int count=1;
    int n = input.length();
    for (int i = 1; i < n; i++){
        if (input[i] == k){
            count+=1;
            k = input[i];
        }
        else {
            if (count>1){
                result+= k+std::to_string(count);
            }
            else {
                result+= k;
            }
            count=1;
            k = input[i];
        }
    }
    std::cout<< result << std::endl;

    return 0;
}