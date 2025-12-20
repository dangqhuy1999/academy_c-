#include <stdio.h>

int main() {
    unsigned int x = 0x89ABCDEF;
    // In số thập phân thông thường
    printf("Thập phân: %d\n", x);       // Kết quả: 255

    // In số Hex chữ thường
    printf("Hex thường: %x\n", x);      // Kết quả: ff

    // In số Hex chữ hoa và có 0x phía trước
    printf("Hex chuẩn nhúng: %#X\n", x); // Kết quả: 0XFF

    x = ((x & 0xFFFF) << 16 | (x & 0xFFFF0000) >> 16);
    // In số thập phân thông thường
    printf("Thập phân: %d\n", x);       // Kết quả: 255

    // In số Hex chữ thường
    printf("Hex thường: %x\n", x);      // Kết quả: ff

    // In số Hex chữ hoa và có 0x phía trước
    printf("Hex chuẩn nhúng: %#X\n", x); // Kết quả: 0XFF
    return 0;
}