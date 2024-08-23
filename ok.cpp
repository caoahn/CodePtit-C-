#include <iostream>

int main() {
    int count = 0;

    for (int i = 100000000; i <= 999999999; ++i) {
        int num = i;
        int sum = 0;

        // Tính t?ng các ch? s?
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }

        // Ki?m tra t?ng và tính thu?n ngh?ch
        if (sum == 8) {
            int reverseNum = 0;
            int temp = i;

            while (temp > 0) {
                reverseNum = reverseNum * 10 + temp % 10;
                temp /= 10;
            }

            if (i == reverseNum) {
                count++;
            }
        }
    }

    std::cout << "So luong so thuan nghich co 9 chu so va tong cac chu so bang 8 la: " << count << std::endl;

    return 0;
}

