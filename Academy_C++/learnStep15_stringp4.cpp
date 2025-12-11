#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    /*
	C++ privides a nice alternative data type 
	to manipulate strings,
	and the data type is conveniently called string.
	Some of its widely used features 
	are the following:

	*/

	std::string a,b;
    std::cin >> a >> b;
    std::cout << a.size() << " " << b.size()<< "\n";
    std::string c = a + b;
    std::cout << c << "\n";
    char temp;
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    std::cout << a  << " " <<b;

    return 0;
}