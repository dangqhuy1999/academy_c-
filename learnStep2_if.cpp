#include <iostream> //  use for cin, cout
#include <string> // use for string
#include <map> // use for map
#include <algorithm> // use for find_if
#include <functional> // use for std::ptr_fun and not1
#include <cctype> // use for isspace
#include <cmath> // use for pow

std::string ltrim(const std::string &);
std::string rtrim(const std::string &);

int main()
{
    std::string n_temp;
    getline(std::cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    std::map<int, std::string> dictne = {
        {1,"one"}, {2,"two"}, {3,"three"}, {4,"four"}, {5,"five"}, {6,"six"}, {7,"seven"}, {8,"eight"}, {9,"nine"}
    };
    
    if(n>=1 && n<= std::pow(10,9)){
        if (n>=1 && n<=9) {
            std::cout << dictne[n] << std::endl;
        }
        else{
            std::cout << "Greater than 9" << std::endl;
        }
    }
    else{
        std::cout << "Nothing" << std::endl;
    }
    return 0;
}

std::string ltrim(const std::string &str) {
    std::string s(str);

    s.erase(
        s.begin(),
        std::find_if(s.begin(), s.end(), [](unsigned char ch){ return !std::isspace(ch); })
    );

    return s;
}

std::string rtrim(const std::string &str) {
    std::string s(str);

    s.erase(
        std::find_if(s.rbegin(), s.rend(), [](unsigned char ch){ return !std::isspace(ch); }).base(),
        s.end()
    );

    return s;
}
