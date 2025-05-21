#include <iostream>
#include "PhanSo.h"

int main() {
    PhanSo a, b;

    std::cout << "Nhập phân số a:\n";
    std::cin >> a;

    std::cout << "Nhập phân số b:\n";
    std::cin >> b;

    std::cout << "\na + b = " << (a + b) << "\n";
    std::cout << "a - b = " << (a - b) << "\n";
    std::cout << "a * b = " << (a * b) << "\n";
    std::cout << "a / b = " << (a / b) << "\n";

    std::cout << "a " << (a == b ? "bằng" : "khác") << " b\n";
    std::cout << "a " << (a > b ? "lớn hơn" : (a < b ? "nhỏ hơn" : "bằng")) << " b\n";

    return 0;
}
