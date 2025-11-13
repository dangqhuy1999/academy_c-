#include<bits/stdc++.h>
using namespace std;

/* 
NHỮNG LỢI ÍCH CỦA VIỆC SỬ DỤNG THAM CHIẾU(REFFERENCE):

1. Truyền đối số vào hàm hiệu quả: (Pass by reference)
Đây là tác dụng quan trọng nhất của tham chiếu.
Khi bạn truyền một biến vào hàm bằng tham chiếu,
bạn tránh được việc sao chép toàn bộ giá trị của biến đó.

Ví dụ: Bạn có một đối tượng `std::vector` rất lớn
(chứa hàng triệu tỉ phần tử).
Nếu bằng truyền bằng giá trị (pass by value),
toàn bộ dữ liệu đó sẽ được sao chép khi hàm được gọi,
tốn rất nhiều thời gian và bộ nhớ.
Ngược lại, nếu bạn truyền bằng tham chiếu,
(ví dụ: `void process(std::vector<int>& data)`),
bạn chỉ truyền địa chỉ của vector đó.
Hàm có thể truy cập 
và làm việc trực tiếp trên dữ liệu gốc,
mà không tốn chi phí sao chép.

2. Sửa đổi giá trị của biến gốc bên trong hàm:
Nếu muốn thay đổi giá trị biến khi truyền vào 
thì nên dùng tham chiếu hoặc con trỏ.
```
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int x = 5, y = 10;
	swap(x, y);
	// Bây giờ x là 10 và y là 5
	return 0;
}
```

3. Trả về một tham chiếu từ hàm:
Tương tự như truyền đối số vào hàm,
bạn có thể trả về một tham chiếu từ hàm
để tránh sao chép đối tượng lớn khi trả về.
ví dụ:

```
int& getElement(std::vector<int>& vec, size_t index) {
	return vec[index]; // Trả về tham chiếu đến phần tử trong vector
}
int main() {
	std::vector<int> myVec = {1, 2, 3, 4, 5};
	getElement(myVec, 2) = 10; // Thay đổi phần tử thứ 3 thành 10
	return 0;
}
```

`getElement(myVec,2) = 10` giống như `myVec[2] = 10`

4. Tạo bí danh(Alias) cho biến:

```
int a = 10;
int& refA = a; // refA là một bí danh cho a
refA = 20; // Bây giờ a cũng trở thành 20
```

Như ví dụ vừa rồi,
`refA` là một tên gọi khác của biến `a`. 

Điều này đôi khi giúp mã dễ đọc hơn, 
đặc biệt là với các tên biến dài hoặc phức tạp.

5. Lặp qua các bộ sưu tập hiệu quả(Range-based for loops):

```
std::vector<int> numbers = {1, 2, 3, 4, 5};
for (int& num : numbers) {
	num *= 2; // Nhân đôi mỗi phần tử trong vector
}
```

Tóm lại, tham chiếu là một công cụ mạnh mẽ 
để `cải thiện hiệu suất` (thời gian chạy và bộ nhớ)
Khi làm việc với các kiểu dữ liêu lớn,
và để cho phép các hàm tương tác 
và thay đổi dữ liệu gốc một cách trực tiếp.

*/

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
/*

1. Tóm tắt về hàm trả về tham chiếu

- Khi không dùng tham chiếu (Sao chép từng phần tử)
Tốn kém: Mất thời gian để sao chép từng cuốn sách và tốn thêm một thùng carton mới (bộ nhớ).
Độc lập: Nếu người nhận làm rách một cuốn sách trong thùng của họ, thùng sách gốc của bạn vẫn nguyên vẹn.

- Khi dùng tham chiếu (Không sao chép)
Hiệu quả: Không tốn thời gian hay bộ nhớ cho việc sao chép.
Chia sẻ: Cả hai cùng nhìn vào một thùng sách. Nếu người đó làm rách một cuốn sách, cuốn sách gốc trong thùng của bạn cũng bị rách theo.

Cả hai đều giúp tiết kiệm bộ nhớ khi xử lý lượng lớn dữ liệu:
C++ Reference: Tiết kiệm bộ nhớ bằng cách không sao chép một đối tượng lớn đã tồn tại.
Python Yield: Tiết kiệm bộ nhớ bằng cách không tạo ra hàng loạt đối tượng lớn ngay từ đầu, mà rải rác theo thời gian.

*/