#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ; 
   cin >> t ; 
   cin.ignore() ;  
   while(t--) { 
     string s ; 
     cin >> s ; 
     string tmp ; 
     stringstream ss(s) ; 
	 int ok = 1 ;   
	 int cnt = 0 ; 
     while(getline(ss,tmp,'.')) { 
	    ++cnt ;  
        int a = stoi(tmp) ; 
        if(a < 0 || a > 255) { 
           ok = 0 ; 
		   break ;  
		}
	 } 
	  cout << cnt << endl ; 
   }
   
}
