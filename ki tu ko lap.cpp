#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ; 
   cin >> t ;  
   cin.ignore() ; 
   while(t--) { 
       string s  ; 
       cin >> s ; 
       int b[256] = {0} ; 
       int n = s.size() ; 
      for(int i=0; i<n;i++) { 
         b[s[i]]++ ; 
	  }
	   for(int i=0; i < s.size() ; i++) { 
	     if(b[s[i]] == 1) { 
	       cout << s[i] ; 
		 }
	   }
	   cout << endl ; 
   } 
   return 0 ; 
}
