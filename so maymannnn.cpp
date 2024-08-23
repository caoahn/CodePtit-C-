#include<bits/stdc++.h> 
using namespace std ; 
int check(string s) { 
   int sum = 0 ; 
   for(int i=0; i < s.size() ; i++) { 
      sum += s[i] -'0' ;  
   } 
  while(sum > 9) { 
     int k = sum , ss = 0 ; 
     while ( k != 0) { 
         ss += k % 10 ; 
		 k  /= 10 ;  
	 } 
	 sum == ss ; 
  }
  if(sum == 9) return 1 ; 
  else return 0 ; 
} 
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
      string s ; 
      cin >> s ; 
      if(check(s)) cout << 1 << endl ; 
      else cout << 0 << endl ; 
   }
}
