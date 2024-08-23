#include<bits/stdc++.h> 
using namespace std ; 
int loai1(string x) { 
   int l = 0 ; 
   int r = x.size() ;   
   while( l  <= r) { 
     if( x[l] != x[r]) { 
       return 0 ; 
	 } 
	 ++l ;
	 --r ; 
   } 
   return 1 ; 
}
int main() { 
    string s ; 
    getline(cin , s ) ; 
    char a[6] ; 
    int k = 0 ; 
    for(int i=4;i < s.size() ; i++) { 
       a[k] = s[i] ; 
       ++k  ;
	} 
	cout << a << endl ; 
}
