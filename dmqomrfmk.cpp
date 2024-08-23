#include <iostream>
#include <string>

std::string compressString(const std::string& s) {
    std::string compressed;
    
    int count = 1;
    for (int i = 1; i <= s.length(); ++i) {
        if (i < s.length() && s[i] == s[i - 1]) {
            // N?u ký t? hi?n t?i gi?ng v?i ký t? tru?c dó, tang bi?n d?m
            ++count;
        } else {
            // Ngu?c l?i, thêm ký t? và s? l?n xu?t hi?n vào chu?i nén
            compressed += s[i - 1] + std::to_string(count);
            count = 1;  // Reset bi?n d?m cho ký t? m?i
        }
    }

    return compressed;
}

int main() {
    std::string inputString;
    std::cout << "Nh?p xâu ký t? S: ";
    std::getline(std::cin, inputString);

    std::string compressedString = compressString(inputString);

    std::cout << "Xâu ký t? sau khi nén: " << compressedString << std::endl;

    return 0;
}

