#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ; 
   cin >> t ; 
   cin.ignore() ;  
   while(t--) { 
      string s ; 
      getline(cin,s) ; 
      int k ; 
      cin >> k ; 
      set<int> se ;  
      cin.ignore();
      for(auto x: s) { 
         se.insert(x) ; 
	  } 
	  int p = 26 - se.size() ; 
	  if(p <= k ) { 
	     cout <<"1" << endl ; 
	  } 
	  else cout <<"0" << endl ; 
   }
}
