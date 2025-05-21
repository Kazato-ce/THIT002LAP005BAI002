#include "PhanSo.h"
#include <iostream>
#include <numeric>

PhanSo::PhanSo(int t, int m) : tu(t), mau(m == 0 ? 1 : m) {
    if (mau < 0) {
        tu = -tu;
        mau = -mau;
    }
    rutGon();
}

void PhanSo::rutGon() {
    int ucln = std::gcd(tu, mau);
    tu /= ucln;
    mau /= ucln;
}

PhanSo PhanSo::operator+(const PhanSo& other) const {
    return PhanSo(tu * other.mau + other.tu * mau, mau * other.mau);
}

PhanSo PhanSo::operator-(const PhanSo& other) const {
    return PhanSo(tu * other.mau - other.tu * mau, mau * other.mau);
}

PhanSo PhanSo::operator*(const PhanSo& other) const {
    return PhanSo(tu * other.tu, mau * other.mau);
}

PhanSo PhanSo::operator/(const PhanSo& other) const {
    return PhanSo(tu * other.mau, mau * other.tu);
}

bool PhanSo::operator==(const PhanSo& other) const {
    return tu == other.tu && mau == other.mau;
}

bool PhanSo::operator<(const PhanSo& other) const {
    return tu * other.mau < other.tu * mau;
}

bool PhanSo::operator>(const PhanSo& other) const {
    return tu * other.mau > other.tu * mau;
}

std::ostream& operator<<(std::ostream& out, const PhanSo& ps) {
    if (ps.mau == 1)
        out << ps.tu;
    else
        out << ps.tu << "/" << ps.mau;
    return out;
}

std::istream& operator>>(std::istream& in, PhanSo& ps) {
    std::cout << "Nhập tử số: ";
    in >> ps.tu;
    std::cout << "Nhập mẫu số (khác 0): ";
    in >> ps.mau;
    if (ps.mau == 0) ps.mau = 1;
    if (ps.mau < 0) {
        ps.tu = -ps.tu;
        ps.mau = -ps.mau;
    }
    ps.rutGon();
    return in;
}
