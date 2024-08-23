#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
  int t ; 
  cin >> t ; 
  while(t--) { 
     int n ; 
     cin >> n ; 
     if( n < 10) cout << n << endl ;
     else { 
       while(n > 9) { 
           int sum = 0 ; 
           while(n) { 
              sum += n % 10 ; 
              n /= 10; 
		   } 
		   n = sum ; 
	   } 
	   cout << n << endl ; 
	 }
  } 
  return 0 ; 
}
