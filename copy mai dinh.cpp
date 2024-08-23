#include <iostream>
#include <cmath>
#include <string>

using namespace std;
string last_k_digits_of_power(int N, int M, int K) {
    int result = 1;
    // Tính N^M modulo 10^K
    for (int i = 0; i < M; ++i) {
        result = (result * N) % (int)pow(10, K);
    }
    // Chuy?n k?t qu? thành chu?i và l?y K ch? s? cu?i cùng
    string resultString = to_string(result);
    return resultString.substr(resultString.length() - K);
}
int main() {
    int N, M, K;
    cout << "Enter the base (N): ";
    cin >> N;
    cout << "Enter the exponent (M): ";
    cin >> M;
    cout << "Enter the number of digits to extract (K): ";
    cin >> K;
    string result = last_k_digits_of_power(N, M, K);
    cout << "Last " << K << " digits of " << N << "^" << M << ": " << result << endl;
    return 0;
}

