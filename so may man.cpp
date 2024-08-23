#include<bits/stdc++.h> 
using namespace std; 
int main() { 
   int n ; 
   cin >> n ; 
   cin.ignore() ;  
   while(n--) { 
      string s ; 
      getline(cin, s) ; 
      int n = s.size() ; 
	  int ok =0 ;  
      for(int i=0;i<n;i++) { 
        if(s[n-1] == '6' && s[n-2] == '8') { 
           ok = 1 ; 
		}
	  } 
	  if(ok) cout << "1" <<endl ; 
	  else cout << "0" <<endl ; 
   } 
   return 0 ; 
} 
