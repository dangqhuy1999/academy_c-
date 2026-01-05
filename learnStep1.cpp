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
// &*p2 = p2 
int main()
{
    std::vector<int> vec{1,4,5,3,7};
    int a = 1000000000;
    long long x = a * a;
    int b = 34;
    int *p = &a;
    int **p1 = &p;
    int **p1_1 = &*p1;
    int ***p2 = &p1;
    cout << &*p << endl<< &**p1 << endl<<  &***p2 << endl<< &**p1_1 << endl<< &p << endl<< &p1 << endl<< &p2 << endl<< &p1_1 << endl;
    cout<<"NOLE\n";
    cout << p << endl<< p1 << endl<< p2 << endl<< p1_1 << endl;
    cout<<"NOLE2\n";
    cout << &a << endl;
    cout << a << endl;

    cout << x << endl;
}

// done