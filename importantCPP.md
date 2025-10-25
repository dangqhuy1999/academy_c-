# Concept C++

## Mastering Modern C++ Philosophy

- **RAII (Resource Acquisition Is Initialization)**: Hiểu rằng việc quản lý tài nguyên (bộ nhớ, file, kết nối mạng) phải được thực hiện thông qua các đối tượng (như con trỏ thông minh, `std::fstream`) mà `destructor của chúng tự động giải phóng tài nguyên`.

- **Zero-Overhead Principle**: Hiểu rằng các công cụ hiện đại của C++ (như `STL`, `std::unique_ptr`) được thiết kế để không gây ra chi phí hiệu suất (runtime overhead) so với code viết tay.

- **Preferred over Raw Pointers**: Tuyệt đối ưu tiên sử dụng các container và `con trỏ thông minh của STL` thay vì `con trỏ thô (raw pointers)` hoặc `mảng kiểu C`.

## Mastering Core Modern Tools

