#include<bits/stdc++.h> 
using namespace std ; 
long long f[1000] ; 
const long long du = 1e9+7 ; 
void check() { 
   f[1] = 1 ; 
   f[2] = 1 ; 
   for(int i=3 ; i <= 1000 ; i++) { 
      f[i] = 2*f[i-1] + 3*f[i-2] ; 
      f[i] %= (int)du ; 
   }
}
int main() { 
   int n ; 
   cin >> n ;  
   check() ; 
   cout << f[n] << endl ; 
   return 0 ; 
}
