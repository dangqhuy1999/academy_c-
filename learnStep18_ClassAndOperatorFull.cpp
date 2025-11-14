#include<bits/stdc++.h>

using namespace std;

//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : D:\IT-Only\C_C++\Project_ConceptC++\learnStep12_stringstream.cpp

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

/*
More details about overloading operator:

Design a class named Box 
whose dimensions are integers 
and private to the class. 
The dimensions are labelled:
length l, breadth b 
and height h.
The default constructor of the class 
should initialize l,b,and h to 0.
The parameterized constructor Box
(int length, int breadth, int height)
should initialize Box's l,b and h 
to length , breadth and height.
The copy constructor Box(Box B)
Should set l,b and h 
to B's l,b,and h, respectively.
Apart from the above,
the class should have 4 functions;
- int getLength() - Return box's length
- int getBreadth () - Return box's breadth
- int getHeight () - Return box's height
- long long CalculateVolume() - Return the volume of the box

Overload the operator < and << and others;

Tell me about friend function:
Từ khóa friend (bạn) 
cho phép một hàm hoặc một lớp bên ngoài 
truy cập vào các thành viên 
private và protected của một lớp khác

Why we have std::ostream& operator<<(ostream& out, Box& B)?
`ostream& operator<<` is the signature 
for the insertion operator in C++(like std::cout).

It is fundamental for allowing objects 
of custom data types
to be printed in a readable format.
Here's a breakdown:
- ostream&: 
  The function returns a reference 
  to an `ostream` object. 
  This is crucial 
  because it allows 
  for chaining of output operations,
  multiple insertion operations together. 
  such as `std::cout << "Hello" << " World!";`
- operator<<:
  This is the function name 
  for the insertion operator.
- The function typically takes two parameters:
  - An `ostream&` reference 
  	(usually named `os` or `out`),
	which is the stream 
	to which the data will be written.
	(like std::cout).
  - A const reference 
  	to the data type being outputted.
	
Nếu em có hàm int& huydang(){} 
thì nó có tương tự cách thực thi 
của hàm std::ostream& operator<<(ostream& out, Box& B) không?
Câu trả lời ngắn gọn là: 
Về mặt kỹ thuật, có thể.
Bạn có thể định nghĩa 
các hàm trả về tham chiếu 
(int& hay bất kỳ kiểu nào khác)
và sử dụng chúng theo cách 
tương tự như cách `ostream`& operator<<` 
cho phép các chuỗi hoạt động
Tuy nhiên,
trong thực tế C++, 
hàm `int& huydang()` không có mục đích 
hay cách dùng phổ biến và hữu ích như 
`ostream& operator<<`. Dưới đây là phân tích chi tiết.
1. Sự tương tự
(Về cú pháp và cơ chế tham chiếu)
Cả hai đều trả về một tham chiếu(reference)
- `ostream& operator<<` trả về tham chiếu 
  đến một đối tượng `ostream`.
- `int& huydang()` trả về tham chiếu đến một biến kiểu `int`.
Cơ chế trả về tham chiếu cho phép bạn:
- Chỉnh sửa giá trị gốc:
Vì hàm trả về một tham chiếu ,
Bạn có thể gán giá trị mới 
cho đối tượng mà bạn tham chiếu đó đang trỏ tới.
- Xâu chuỗi(chaining) các thao tác (nhưng theo cách khác):  
```cpp

int a = 10;
int& tham_chieu_a() {
	return a;
}
tham_chieu_a() = 20; // Bây giờ a trở thành 20
std::cout << a; // In ra 20
```
Nếu thấy hơi khó hiểu thì:

Hàm thông thường (int ham()): 
Trả về một giá trị tạm thời(R-value), giống như số 5.
Em không thể gán giá trị  cho số 5(5 = 10; là lỗi).
Hàm trả về Tham chiếu (int& tham_chieu_a(int& a)):
Trả về một biệt danh(L-value),
giống như tên của một biến.
Khi em viết `tham_chieu_a(a) = 20;`, trình biên dịch hiểu rằng:
"Tham chiếu trả về từ hàm
là một tên gọi khác của biến gốc `a`."
Vậy, hãy gán 20 vào chính biến `a` đó.

Đây là một kĩ thuật mạnh mẽ,
thường được dùng để tạo các hàm "setter"
(hàm thiết lập giá trị) 
hoặc để overload `operator[]` 
(giúp em dùng `vector[i] = 20` một cách tự nhiên).

2. Sự khác biệt cốt lõi()
*/ 


class Box{
    private:
        int l,b, h;
    public:
		//constructor 
        Box() : l{0},b{0}, h{0} {}
        Box(int length, int breadth, int height) : l{length},b{breadth}, h{height} {}
        Box(const Box& B) : l{B.l},b{B.b}, h{B.h} {}
        
		// getters
        int getLength() const {
            return this->l;
        } 
        int getBreadth() const {
            return this->b;
        }
        int getHeight() const {
            return this->h;
        }
        
		// other methods
        long long CalculateVolume() const {
            return (long long)l * b * h;;
        }
        
		// overload operator <
        bool operator<(Box& b) const {
            if(this->l < b.l){
                return true;
            }
            else if(this->b < b.b && this->l == b.l ){
                return true;
            }
            else if(this->b == b.b && this->l == b.l && this->h < b.h ){
                return true;
            }
            return false;
        }

};

// overload operator <<
ostream& operator<<(ostream& out, Box& B){
    out << B.getLength() << " "<< B.getBreadth() << " "<< B.getHeight() << " ";
    return out;
}
 
void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<"\n";
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<"\n";
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<"\n";
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<"\n";
		}

	}
}

int main()
{
	check2();
}