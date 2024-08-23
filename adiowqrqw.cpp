#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   string s,t ; 
   getline(cin,s) ; 
   getline(cin,t) ;    
   string tmp ;
   stringstream ss(s) ; 
   while(ss >> tmp) { 
      if(tmp != t) { 
        cout << tmp  << endl ; 
	  }
   } 
   return 0 ; 
}
