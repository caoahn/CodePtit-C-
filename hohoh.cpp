#include <iostream>

using namespace std;

int countElementsGreaterThanNeighbors(int** arr, int n, int m) {
    int count = 0;

    for (int i = 1; i < n - 1; ++i) {
        for (int j = 1; j < m - 1; ++j) {
            if (arr[i][j] > arr[i - 1][j] && arr[i][j] > arr[i + 1][j] &&
                arr[i][j] > arr[i][j - 1] && arr[i][j] > arr[i][j + 1]) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int n, m;

    cout << "Nhap so hang n: ";
    cin >> n;
    cout << "Nhap so cot m: ";
    cin >> m;

    // Kh?i t?o m?ng 2 chi?u
    int** array2D = new int*[n];
    for (int i = 0; i < n; ++i) {
        array2D[i] = new int[m];
    }

    // Nh?p giá tr? cho m?ng
    cout << "Nhap gia tri cho mang 2D:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << "Nhap arr[" << i << "][" << j << "]: ";
            cin >> array2D[i][j];
        }
    }

    // Ğ?m và in k?t qu?
    int result = countElementsGreaterThanNeighbors(array2D, n, m);
    cout << "So phan tu lon hon cac phan tu lan can: " << result << endl;

    // Gi?i phóng b? nh?
    for (int i = 0; i < n; ++i) {
        delete[] array2D[i];
    }
    delete[] array2D;

    return 0;
}

