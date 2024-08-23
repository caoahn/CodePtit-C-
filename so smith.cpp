#include<bits/stdc++.h> 
using namespace std ; 
int tong(int n) { 
  int sum =0 ; 
  while(n != 0 ) { 
    sum += n % 10 ; 
    n /= 10 ; 
  } 
  return sum ; 
}  
int nt(int n) { 
  for(int i=2 ; i <=sqrt(n) ; i++) { 
     if(n % i == 0) return 0 ; 
  } 
  return n > 1 ; 
}
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
     int n ; 
     cin >> n  ;  
     int m = n ; 
     int res = 0 ; 
     for(int i=2 ; i<= sqrt(n) ; i++) { 
       while(n % i == 0) { 
         res += tong(i) ; 
         n /= i ; 
	   }
	 } 
	 if( n!= 1) res += tong(n) ; 
	 if(!nt(m) && tong(m) == res) cout << "YES" << endl ; 
	 else cout << "NO" << endl ; 
   } 
   return 0 ; 
}
