#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ; 
   cin >> t ; 
   cin.ignore() ; 
   while(t--) { 
      string a ; 
      string b ; 
      getline(cin,a) ; 
      getline(cin,b) ; 
       set<string> s1 ; 
       set<string> s2 ; 
      string tmp ; 
      stringstream ss(a)  ; 
      while(ss >> tmp) {   
         s1.insert(tmp) ; 
	  } 
	  string tmp1 ; 
	  stringstream sss(b) ; 
	  while(sss >> tmp1) {  
	     s2.insert(tmp1) ; 
	  } 
	 for(auto x : s1 ) { 
	   if(s2.count(x) == 0) { 
	      cout << x << " " ; 
	   }
	 } 
	 cout << endl ; 
   }
}
