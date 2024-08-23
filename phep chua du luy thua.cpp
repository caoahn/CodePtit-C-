#include<bits/stdc++.h> 
using namespace std ; 
long long du(string a,long long m) { 
   long long r = 0 ; 
   for(char x : a) { 
     r= r*10 + x -'0' ; 
     r %= m ; 
   } 
   return r ; 
} 
long long kq(long long a,long long b,long long m) { 
    long long res = 1 ; 
    while(b) { 
       	if(b % 2 == 1) { 
       	      res *= a ; 
       	      res %= m ; 
		   } 
		a *= a ; 
		a %= m ; 
		b /= 2 ; 
	} 
	return res ; 
}
int main() { 
  int t ; 
  cin >> t ;
  while(t--) { 
     string s ; 
     long long b,m ; 
     cin >> s >> b >> m  ;
     long long r = du(s,m) ; 
     cout << kq(r,b,m) << endl ; 
  }
}
