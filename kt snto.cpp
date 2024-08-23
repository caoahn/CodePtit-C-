#include<bits/stdc++.h> 
using namespace std ; 
long long nt(long long n) { 
   for(int i=2; i<= sqrt(n);i++) { 
      if(n % i == 0) return 0 ; 
   } 
   return n > 1; 
} 
int main() { 
   long long n ; 
   cin >> n ; 
   if(nt(n)) cout << "YES" << endl ; 
   else cout << "NO" << endl ; 
}
