#include <iostream>

int main() {
    // Nh?p s? nguy�n duong N t? ngu?i d�ng
    int N;
    std::cout << "Nh?p m?t s? nguy�n duong N: ";
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
        std::cout << "Ch? s? l?n nh?t l� " << maxDigit << " ? v? tr� t? tr�i sang ph?i th? " << position << std::endl;
    } else {
        std::cout << "S? kh�ng c� ch? s? n�o." << std::endl;
    }

    return 0;
}
