#include<bits/stdc++.h> 
using namespace std ; 
int main() {  
   long long  n ; 
   cin >> n ; 
   long long f[n] ; 
   f[1] = 1 ; 
   f[2] = 1 ; 
   for(int i=3 ; i<= n ; i++) { 
     f[i]= 2*f[i-1] + 3*f[i-2]   ; 
     f[i] %= 1000000007;
   } 
   cout << f[n] << endl ; 
}
