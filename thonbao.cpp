#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t; 
   cin >> t ; 
   cin.ignore() ; 
   while(t--) { 
      string s ;
      getline(cin,s)  ; 
      if(s.size() < 100) cout << s  ; 
      else { 
            for(int i=0; i < 100;i++) { 
              cout << s[i] ; 
			}
		 } 
		 cout << endl ; 
	  }  
   } 

