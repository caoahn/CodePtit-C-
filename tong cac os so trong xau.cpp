#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t; 
   cin >> t; 
   while(t--) { 
      string s ; 
      cin >> s;  
      int sum= 0 ; 
      int ans = 0 ; 
      for(int i=0; i < s.size() ; i++) { 
        if(isdigit(s[i])) { 
          sum = sum*10 + s[i]-'0' ; 
		} 
		else { 
		  ans += sum ; 
		  sum = 0 ; 
		}
	  } 
	  ans += sum ;  
	  cout << ans << endl ; 
   }
}
