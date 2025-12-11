#include <iostream>
#include <iomanip> 

int main() {
    /* 
    Learn more exclude decimal we also have binary, hexadecimal, and octal representations

    Given a text file with 
    many lines of numbers to format and print,
    For each row of 3 space-seperated doubles,
    format and print the numbers using the specifications
    in the Output Format section below.
    
    **Input Format:** 
    The first line contains an integer,
    T, the number of test cases.
    Each of the T subsequent lines
    describes a test case as 
    3 space-separated floating-point numbers: A,B and C.
    
    **Output Format:** 
    For each test case, 
    print 3 lines containing 
    the formatted A, B and C, respectively. 
    Each A,B, and C must be formatted as follows: 
    1. A: Strip its decimal(i.e truncate it)
        and print its hexadecimal representation
        (including the 0x prefix)
        in a lower case letters.
    2. B: Print it to a scale of 2 decimal places,
        preceded by a + or - sign
        (indicating if it's positive or negative)
        right justified, 
        and left-padded with underscores
        so that the printed result 
        is exactly 15 characters wide.
    3. C: Print it to a scale 
        of exactly nine decimal places,
        expressed in scientific notation
        using upper case.
    
    Cheat Sheet:

    ---------------|--------------------|--------------|--------------
    Nhóm chức năng |Lệnh(ví dụ)         |Cần include   |Mục đích
    ---------------|--------------------|--------------|--------------
    Hệ cơ số       | std::hex,          |              |Chuyển đổi giữa hệ thập lục phân, 
                   | std::dec, std::oct | <iostream>   |thập phân, bát phân.
    ---------------|--------------------|--------------|--------------
    Chỉnh định dạng| std::setw(n)       | <iomanip>    |Đặt độ rộng tối thiểu cho lần in tiếp theo
                   | std::setfill(c)    |              |Đặt ký tự điền vào để lấp đầy độ rộng
    ---------------|--------------------|--------------|--------------
    Căn lề         | std::left          | <iostream>   |Căn lề trái
                   | std::right         |              |Căn lề phải
                   | std::internal      |              |Căn giữa dấu hiệu và số
    ---------------|--------------------|--------------|--------------
    Biểu diễn số   | std::scientific    | <iomanip>    |Định dạng số theo ký hiệu khoa học(1.23E+04)
                   | std::fixed         |              |Định dạng số theo dấu thập phân cố định(12345.67)
                   | std::setprecision(n)|             |Đặt số chữ số thập phân hiển thị
                   | std::showpos       |              |Hiển thị dấu cộng cho số dương, dấu trừ cho số âm
                   | std::noshowpos     |              |Không hiển thị dấu 
    ---------------|--------------------|--------------|--------------
    Tiền tố số     | std::showbase      | <iostream>   |Hiển thị tiền tố hệ cơ số [0x(hex), 0b(bin), 0(oct)]
                   | std::noshowbase    |              |Không hiển thị tiền tố hệ cơ số
    ---------------|--------------------|--------------|--------------
    Ẩn hiện        | std::uppercase     | <iostream>   |Hiển thị chữ hoa (A-F, E)
    chữ hoa        | std::nouppercase   |              |Hiển thị chữ thường (a-f, e)
    ---------------|--------------------|--------------|--------------
    */ 

    int T; std::cin >> T;
	std::cout << std::setiosflags(std::ios::uppercase);
	std::cout << std::setw(0xf) << std::internal;
	while(T--) {
		double A; std::cin >> A;
		//double B; std::cin >> B;
		//double C; std::cin >> C;
        long long truncatedA = static_cast<long long>(A);
        std::cout   << std::dec << std::noshowbase << std::setw(2); 
        std::cout   << std::hex // Set Output to hexadecimal
                    << std::showbase // Show the "0x" prefix 
                    << std::nouppercase // Lowercase letters
                    << truncatedA // The truncated number
                    << std::endl;
	}               
	return 0;
}
