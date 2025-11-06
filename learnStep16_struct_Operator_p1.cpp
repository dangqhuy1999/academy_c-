#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

/*
    add code for struct here.
    struct is a way 
    to combine multiple fields 
    to represent a composite data structure,
    which further lays the foundation
    for Object Oriented Programming. 
    For example,
    we can store details
    related to a student in a struct 
    consisting of 
    his age(int), 
    first_name(string), 
    last_name(string) 
    and standard(int).

*/

struct Student {
    int age;
    std::string first_name;
    std::string last_name;
    int standard;
};

int main() {
    Student st;
    
    std::cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    std::cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}

/*
#include <iostream>
#include <string> // Bắt buộc phải thêm vì struct dùng std::string
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>

// Định nghĩa struct Student (Thỏa mãn Constraint về Fields)
struct Student {
    int age;
    std::string first_name;
    std::string last_name;
    int standard;
};

// Ràng buộc độ dài tối đa
const size_t MAX_NAME_LENGTH = 50; 

 * @brief Overload the input operator (>>) to read data for a Student object, 
 * including validation for name length.
 * Khi vi phạm ràng buộc độ dài (> 50), sẽ manually set failbit cho stream.

std::istream& operator>>(std::istream& is, Student& s) {
    // ĐỌC VÀ KIỂM TRA LỖI AGE (Lỗi này sẽ bị bắt bởi exception() setting trong main)
    if (!(is >> s.age)) return is;
    
    // Read first_name (second line)
    if (!(is >> s.first_name)) return is;
    
    // 💡 Validation cho first_name (Ràng buộc logic)
    if (s.first_name.length() > MAX_NAME_LENGTH) {
        // Đặt failbit cho stream để kích hoạt catch (thay cho throw runtime_error)
        is.setstate(std::ios::failbit);
        return is;
    }

    // Read last_name (third line)
    if (!(is >> s.last_name)) return is;
    
    // 💡 Validation cho last_name (Ràng buộc logic)
    if (s.last_name.length() > MAX_NAME_LENGTH) {
        // Đặt failbit cho stream để kích hoạt catch
        is.setstate(std::ios::failbit);
        return is;
    }
    
    // Read standard (fourth line)
    is >> s.standard;
    
    return is;
}


 * @brief Overload the output operator (<<) to print student details.

std::ostream& operator<<(std::ostream& os, const Student& s) {
    // Printing all four fields separated by spaces on one line (common output format)
    os << s.age << " " 
       << s.first_name << " " 
       << s.last_name << " " 
       << s.standard;
       
    return os;
}

int main() {
    Student st;

    // 💡 CÀI ĐẶT NGOẠI LỆ CHO STREAM
    // Buộc cin ném ra std::ios_base::failure nếu gặp lỗi kiểu dữ liệu (failbit) 
    // hoặc lỗi I/O khác.
    std::cin.exceptions(std::ios::failbit | std::ios::badbit);

    try {
        std::cout << "Vui lòng nhập 4 thông tin: Tuổi(int), Tên(string), Họ(string), Khóa học(int) (Mỗi dòng một mục):\n";
        
        // 1. Đọc Input:
        std::cin >> st;

        // 2. In Output:
        std::cout << "\nThông tin Hợp lệ:\n";
        std::cout << st << std::endl;

    } catch (const std::ios_base::failure& e) {
        // Bắt lỗi I/O (Lỗi kiểu dữ liệu HOẶC Lỗi độ dài > 50)
        std::cerr << "\nLỖI INPUT: Dữ liệu không hợp lệ. Vui lòng kiểm tra:\n";
        std::cerr << "1. Kiểu dữ liệu: Tuổi và Khóa học phải là số nguyên.\n";
        std::cerr << "2. Độ dài: Tên và Họ không được quá 50 ký tự.\n";

        // Dọn dẹp buffer: Sử dụng hằng số lớn (10000) thay vì numeric_limits
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        return 1;
    } 

    return 0;
}
*/