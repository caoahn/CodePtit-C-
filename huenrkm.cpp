#include <iostream>
#include <cmath>
#include <string>
using namespace std;
string last_k_digits_of_power(int N, int M, int K) {
    int result = 1;
    for (int i = 0; i < M; ++i) {
        result = (result * N) % (int)pow(10, K);
    }
    string resultString = to_string(result);
    return resultString.substr(max(0, (int)resultString.length() - K));
}
int main() {
    int N, M, K;
    cin >> N;
    cin >> M;
    cin >> K;
    string result = last_k_digits_of_power(N, M, K);
    cout << result << endl;
    return 0;
}

