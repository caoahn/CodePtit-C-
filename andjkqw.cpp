#include <iostream>

int main() {
    // Nh?p s? nguyên duong N t? ngu?i dùng
    int N;
    std::cout << "Nh?p m?t s? nguyên duong N: ";
    std::cin >> N;

    int position = -1;
    int maxDigit = -1;
    int currentPosition = 0;

    while (N > 0) {
        int digit = N % 10; 
        if (digit > maxDigit) {
            maxDigit = digit;
            position = currentPosition; 
            currentPosition++;
        }

        N /= 10; 
    }
    if (position != -1) {
        std::cout << "Ch? s? l?n nh?t là " << maxDigit << " ? v? trí t? trái sang ph?i th? " << position << std::endl;
    } else {
        std::cout << "S? không có ch? s? nào." << std::endl;
    }

    return 0;
}
