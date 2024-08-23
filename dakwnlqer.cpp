#include <iostream>
#include <vector>

void lietKeCachChia(int n, std::vector<int> &cachChia, int i) {
    if (n == 0) {
        // In ra cách chia hi?n t?i
        std::cout << "Cach chia: ";
        for (int j = 0; j < i; ++j) {
            std::cout << cachChia[j] << " ";
        }
        std::cout << std::endl;
        return;
    }

    for (int j = 1; j <= n; ++j) {
        if (i == 0 || (i > 0 && j <= cachChia[i - 1])) {
            cachChia[i] = j;
            lietKeCachChia(n - j, cachChia, i + 1);
        }
    }
}

int main() {
    int n;

    // Nh?p s? t? nhiên n
    std::cout << "Nhap so tu nhien n: ";
    std::cin >> n;

    // Ki?m tra n
    if (n <= 0) {
        std::cout << "Nhap n phai la so tu nhien lon hon 0." << std::endl;
        return 1;
    }

    // Kh?i t?o m?ng d? luu cách chia
    std::vector<int> cachChia(n);

    // Li?t kê các cách chia
    std::cout << "Cac cach chia " << n << " thanh tong cac so nho hon n:" << std::endl;
    lietKeCachChia(n, cachChia, 0);

    return 0;
}

