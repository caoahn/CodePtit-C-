#include <iostream>
#include <string>

std::string compressString(const std::string& s) {
    std::string compressed;
    
    int count = 1;
    for (int i = 1; i <= s.length(); ++i) {
        if (i < s.length() && s[i] == s[i - 1]) {
            // N?u k� t? hi?n t?i gi?ng v?i k� t? tru?c d�, tang bi?n d?m
            ++count;
        } else {
            // Ngu?c l?i, th�m k� t? v� s? l?n xu?t hi?n v�o chu?i n�n
            compressed += s[i - 1] + std::to_string(count);
            count = 1;  // Reset bi?n d?m cho k� t? m?i
        }
    }

    return compressed;
}

int main() {
    std::string inputString;
    std::cout << "Nh?p x�u k� t? S: ";
    std::getline(std::cin, inputString);

    std::string compressedString = compressString(inputString);

    std::cout << "X�u k� t? sau khi n�n: " << compressedString << std::endl;

    return 0;
}

