#include<bits/stdc++.h> 
using namespace std; 
long long gcd(long long a,long long b) { 
  if( b == 0) return a ; 
  return gcd(b,a%b) ; 
} 
long long lcm(long long a,long long b) { 
  return (a*b)/gcd(a,b) ; 
} 
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
     int x,y,z,n ; 
     cin >> x >> y >> z >> n ; 
     long long tmp = lcm(lcm(x,y),z) ; 
     long long m = pow(10,n-1) ; 
	 long long res =(long long) ((m + tmp -1)/tmp ) * tmp ;   
	 if(res < (long long) pow(10,n)) { 
	     cout << res << endl ; 
	 } 
	 else cout << "-1" << endl ; 
   } 
   return 0 ; 
}
