#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ; 
   cin >> t ;
   while(t--) { 
      string s ; 
      cin >> s ; 
      int sum = 0 ; 
      multiset<char> se  ; 
      for(int i=0; i < s.size() ; i++) { 
        if(isdigit(s[i])) { 
          sum += s[i]-'0' ; 
		} 
		else { 
		   se.insert(s[i]) ; 
		}
	  } 
	  for(auto x : se) { 
	     cout << x ; 
	  } 
	  cout << sum << endl ; 
   }
}
