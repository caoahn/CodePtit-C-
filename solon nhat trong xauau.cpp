#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
  int t ;
  cin >> t ;
  while(t--) { 
     string s ; 
     cin >> s ; 
     int max = -1e9-1 ;
     int sum = 0 ; 
     for(int i=0; i < s.size() ; i++) { 
       if(isdigit(s[i])) { 
           sum = sum*10 + s[i] -'0' ; 
           if(sum > max) max = sum ; 
	   } 
	   else { 
	      sum = 0 ; 
	   }
	 } 
	 cout << max << endl ; 
  }
}
