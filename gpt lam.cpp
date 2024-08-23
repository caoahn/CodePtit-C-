#include <iostream>
long long countOccurrences(int n, long long x) {
    long long count = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i * j == x) {
                ++count;
            }
        }
    }

    return count;
}

int main() {
    int n; 
    long long x ; 
    cin >> n >> x ; 
    std::cin >> n;
    std::cin >> x;
    int result = countOccurrences(n, x);
    std::cout  << result << std::endl;
    return 0;
}

