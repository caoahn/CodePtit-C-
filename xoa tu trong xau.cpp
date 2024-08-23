#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   string s ; 
   getline(cin,s) ; 
   string tmp ; 
   cin >> tmp ; 
   stringstream ss(s) ;
   string token ;  
   while(ss >> token) { 
      if(token != tmp) { 
         cout << token <<" " ; 
	  }
   }  
   cout << endl ; 
   return 0 ; 
}
