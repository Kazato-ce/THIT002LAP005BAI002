#ifndef PHANSO_H
#define PHANSO_H

#include <iostream>

class PhanSo {
private:
    int tu;
    int mau;

    void rutGon();  // Rút gọn phân số

public:
    // Constructor mặc định và từ số nguyên
    PhanSo(int t = 0, int m = 1);

    // Các toán tử số học
    PhanSo operator+(const PhanSo& other) const;
    PhanSo operator-(const PhanSo& other) const;
    PhanSo operator*(const PhanSo& other) const;
    PhanSo operator/(const PhanSo& other) const;

    // So sánh
    bool operator==(const PhanSo& other) const;
    bool operator<(const PhanSo& other) const;
    bool operator>(const PhanSo& other) const;

    // Nhập / Xuất
    friend std::ostream& operator<<(std::ostream& out, const PhanSo& ps);
    friend std::istream& operator>>(std::istream& in, PhanSo& ps);
};

#endif
