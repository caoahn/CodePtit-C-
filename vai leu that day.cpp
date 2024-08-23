#include<bits/stdc++.h> 
using namespace std; 
int main() { 
   string s ; 
   cin >> s;     
   int sum = 0 ; 
   int max = -1e9-1 ;   
   for(int i=0; i < s.size() ; i++) {   
      if( isdigit(s[i])) { 
         sum = sum*10 + s[i] -'0' ; 
	  } 
	  else  { 
	      if(sum > max) max = sum ; 
	      sum = 0 ;     
	  }  
   } 
    if(sum > max) max = sum ; 
    cout << max << endl ; 
}
