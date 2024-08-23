#include<bits/stdc++.h> 
using namespace std ; 
int phenic(int n) { 
   int cnt = 0 ; 
   for(int i=2;i <= sqrt(n);i++) { 
      if(n % i == 0) { 
        ++cnt ; 
        n /= i ; 
	  } 
	  if(n % i == 0) return 0 ; 
   } 
  if( n!=1) ++cnt ; 
  return cnt == 3 ; 
} 
int main() { 
    int t ; 
    cin >> t; 
    while(t--) { 
       int n ; 
       cin >> n ; 
       if(phenic(n)) cout << "1" << endl ; 
       else cout << "0" << endl ; 
	}
}
