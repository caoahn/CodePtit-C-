#include<bits/stdc++.h> 
using namespace std ; 
int check(string &s) { 
   int n = 0 ;  
   for(char x : s) { 
      n = n*10 + x -'0' ; 
   } 
   return n ; 
} 
int main() { 
    fstream in ; 
    in.open("DATA.in",ios :: in) ; 
    string s ; 
    map<int,int> mp ; 
    while(in >> s) { 
	    int z = check(s) ;  
       mp[z]++ ; 
	} 
	for(auto it : mp) { 
	  cout <<it.first <<" "<< it.second <<endl ; 
	} 
	return 0 ; 
}
