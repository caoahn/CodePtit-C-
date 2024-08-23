#include<bits/stdc++.h> 
using namespace std ; 
long long gcd(long long a,long long b) {  
    if(b == 0) return a ; 
    return gcd(b,a%b) ; 
} 
long long lcm(long long  a,long long b) { 
  return a*b / gcd(a,b) ; 
} 
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
     long long n ; 
     cin >> n ; 
     int c = 1; 
     for(int i=1;i <= n;i++) { 
       c = lcm(i,c) ; 
	 } 
	 cout << c << endl ; 
   }
}
