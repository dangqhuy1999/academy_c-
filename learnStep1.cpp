#include <bits/stdc++.h>
#include <exception>
#include <string>
using namespace std;

class badLengthException : public std::exception{
    private:
        std::string fullname_length;
    
    public:
        badLengthException(int length_){
            fullname_length = "Have error at: " + std::to_string(length_);
        }

};

void do_something(vector<int> a)
{
    cout << "Hello world";
}

int main(){
    int a = 1000000000;
    long long x = a * a;
    cout << x << endl;
}