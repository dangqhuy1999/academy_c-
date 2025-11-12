#include<bits/stdc++.h>
using namespace std;

// Hàm trả về tham chiếu đến biến a
int& tham_chieu_a(int& a) {
	return a;
}

int main()
{
	int a = 10;
	tham_chieu_a(a) = 20; // Bây giờ a trở thành 20
	std::cout << a; // In ra 20
	return 0;
}


// Hàm trả về tham chiếu đến đối tượng Box
// ostream& operator<<(ostream& out, Box& B){
//     out << B.getLength() << " "<< B.getBreadth() << " "<< B.getHeight() << " ";
//     return out;
// }