#include<bits/stdc++.h> 
using namespace std ; 
int sphenic(int n) { 
   int distinctPrimeDivisorCount = 0;
for (int s = sqrt(n), i = 2; i <= s; ++i) {
    if (n % i == 0) {
	n /= i;
	distinctPrimeDivisorCount++;
}
    if (n % i == 0) return false; 
}
return distinctPrimeDivisorCount + (n != 1) == 3; 
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
