#include <iostream>
#include <string>
#include <sstream>
#include <exception>

/* Define the exception here 

You inherited a piece of code that 
performs username validation for 
your company's website. 
The existing function works reasonably well, 
but it throws an exception when 
the username is too short. 
Upon review, 
you realize that 
nobody ever defined the exception.

The inherited code is provided for you 
in the locked section of your editor. 
Complete the code so that, 
when an exception is thrown, 
it prints `Too short: n` 
(where  is the length of the given username).

Sample Input

3
Peter
Me
Arxwwz
Sample Output

Valid
Too short: 2
Invalid

*/

class BadLengthException : public std::exception{
	private:
		std::string full_username_length;
	public:
		BadLengthException(int length){
			std::stringstream ss;
			ss << length;
			full_username_length = ss.str();
		} 
		const char* what() const noexcept override {
			return full_username_length.c_str();
		}
};

bool checkUsername(std::string username) {
	bool isValid = true;
	int n = username.length();
	if(n < 5) {
		throw BadLengthException(n);
	}
	for(int i = 0; i < n-1; i++) {
		if(username[i] == 'w' && username[i+1] == 'w') {
			isValid = false;
		}
	}
	return isValid;
}

int main() {
	int T; std::cin >> T;
	while(T--) {
		std::string username;
		std::cin >> username;
		try {
			bool isValid = checkUsername(username);
			if(isValid) {
				std::cout << "Valid" << '\n';
			} else {
				std::cout << "Invalid" << '\n';
			}
		} catch (BadLengthException e) {
			std::cout << "Too short: " << e.what() << '\n';
		}
	}
	return 0;
}