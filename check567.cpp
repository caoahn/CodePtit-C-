#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
      string s ; 
      cin >> s;  
      int k ; 
      cin >> k ; 
      set<char> se ; 
      for(int i=0 ; i < s.size() ; i++) { 
         se.insert(s[i]) ; 
	  } 
	  int p = 26 - se.size() ; 
	  if(p <= k) { 
	      cout << "1" << endl ; 
	  } 
	  else cout << "0" << endl ; 
   }
   return 0 ; 
}
