#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string s = "123 456 789";
    stringstream ss(s);
    int a, b, c;
    ss >> a >> b >> c;
    cout << a << ' ' << b << ' ' << c << endl;
    return 0;
}
