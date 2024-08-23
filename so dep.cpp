#include<bits/stdc++.h> 
using namespace std ;  
int check(string s) { 
   for(auto x : s) { 
       if(x % 2 != 0) { 
         return 0 ; 
	   }
   } 
   string s1 = s ; 
   reverse(s.begin(),s.end()) ; 
   if(s1 != s) { 
     return 0 ; 
   } 
   return 1 ; 
}
int main() { 
  int t ; 
  cin >> t ; 
  cin.ignore() ; 
  while(t--) { 
      string s ; 
      getline(cin,s) ;  
      if(check(s)) cout << "YES" << endl ; 
      else cout << "NO" << endl ; 
  } 
}
