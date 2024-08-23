#include <iostream>
#include <vector>

void lietKeTowHopChapK(int n, int k) {
    std::vector<int> combination(k, 0);

    // H�m in t? h?p
    auto inToHop = [&]() {
        for (int i = 0; i < k; ++i) {
            std::cout << combination[i] << " ";
        }
        std::cout << std::endl;
    };

    // Thi?t l?p gi� tr? ban d?u
    for (int i = 0; i < k; ++i) {
        combination[i] = n - i;
    }

    while (true) {
        inToHop();

        int i = k - 1;
        while (i >= 0 && combination[i] == i + 1) {
            --i;
        }

        if (i < 0) {
            // �� li?t k� t?t c? c�c t? h?p
            break;
        }

        --combination[i];

        for (int j = i + 1; j < k; ++j) {
            combination[j] = n - (k - j) + 1;
        }
    }
}

int main() {
    int n, k;

    // Nh?p gi� tr? c?a n v� k
    std::cout << "Nhap n: ";
    std::cin >> n;
    std::cout << "Nhap k: ";
    std::cin >> k;

    // Ki?m tra d?u v�o
    if (n < k || n <= 0 || k <= 0) {
        std::cout << "Nhap n va k phai la so nguyen duong, va n >= k." << std::endl;
        return 1;
    }

    // Li?t k� t? h?p ch?p k c?a n theo th? t? gi?m d?n
    std::cout << "Cac to hop chap " << k << " cua " << n << " theo thu tu giam dan la:" << std::endl;
    lietKeTowHopChapK(n, k);

    return 0;
}

