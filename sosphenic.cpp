#include<bits/stdc++.h> 
using namespace std ; 
int sphenic(int n) { 
   int count = 0 ; 
   for (int a = n, i = 2; i * i <= a; i++)
        while (n % i == 0) {
            n /= i;
            if ((!n && count < 2) || ++count > 3) return 0;
        }
    return count + (n != 1) == 3;
} 
int main() { 
    int t ; 
    cin >> t; 
    while(t--) { 
       int n ; 
       cin >> n ; 
       if(sphenic(n)) cout << "1" << endl ; 
       else cout << "0" << endl ; 
	}
}
