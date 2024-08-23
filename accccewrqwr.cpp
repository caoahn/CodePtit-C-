#include<bits/stdc++.h> 
using namespace std ; 
int check(string s) { 
   int sum = 0 ; 
   for(int i=0; i < s.size() ; i++) { 
      sum += s[i] -'0' ;  
   } 
   if(sum == 9) return 1 ; 
  while(sum >= 9) { 
     int ss = 0 ; 
     while (sum ) { 
         ss += sum % 10 ; 
		 sum  /= 10 ;  
	 } 
	 if(ss == 9) return 1 ; 
	 sum = ss ; 
  }
 return 0 ; 
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
