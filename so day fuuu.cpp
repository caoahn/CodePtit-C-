#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
  int t ; 
  cin >> t ; 
  cin.ignore() ; 
  while(t--) { 
     string s ; 
     cin >> s ;  
     int ok =  0 ; 
	 map<char,int> mp ;   
	 if(s[0] == 0) oke = 1 ; 
     for(int i=0 ; i < s.size(); i++) { 
         if(!isdigit(s[i]) || s[0] == '0') { 
            ok = 1 ; 
		 } 
	 } 
	 if(ok == 1) cout << "INVALID" << endl ; 
	 else { 
	     for(int i=0; i < s.size() ; i++) { 
	         mp[s[i]]++ ; 
		 } 
		 if(mp.size() != 10) cout << "NO" << endl ; 
		 else cout << "YES" << endl ; 
	 } 
  }  
}
