#include<bits/stdc++.h> 
using namespace std ; 
long long f[93] ; 
const long long du = 1e9+7 ; 
long long check(int n)  { 
   if(n == 0) return 0 ; 
   else if(n == 1) return 1 ; 
   else if( n == 2) return 1 ; 
   else return 2*check(n-1) + 3*check(n-2) ; 
}
int main() { 
   int n ; 
   cin >> n ;   
   cout << check(n) % du << endl ;  
   return 0 ; 
}
