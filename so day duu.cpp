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
     for(int i=0 ; i < s.size(); i++) { 
         if(!isdigit(s[i])) { 
            ok = 1 ;
            break ; 
		 } 
		  mp[s[i]]++ ;   
	 } 
	 if(mp.size() != 10 && ok == 0) { 
	     cout << "NO" << endl ; 
	 } 
	 else if(mp.size() == 10 && ok == 0)  cout << "YES" << endl ; 
	 else cout << "INVALID" << endl  ; 
  }  
}
