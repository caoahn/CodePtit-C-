#include<bits/stdc++.h> 
using namespace std ;  
void check(string &s) { 
  for(int i=0; i <s.size() ;i++)  { 
      s[i] = tolower(s[i]) ; 
  }
}
int main() { 
   fstream in ; 
   in.open("VANBAN.in",ios :: in) ; 
    string s ;  
    set<string> se ; 
    while(in >> s) { 
       check(s) ; 
       se.insert(s) ; 
	} 
	for(auto x : se) cout << x << endl ;  
	return 0 ; 
}
