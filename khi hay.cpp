#include<bits/stdc++.h> 
using namespace std ;
int main() { 
    int t ; 
    cin >> t ; 
    while(t--) { 
       string s ; 
       getline(cin,s) ; 
       int n,k ; 
       cin >> n >> k ;  
       string l ="Bac" ; 
       string r="Nam" ; 
       int x = k / 30    ; 
	   if(s == l) { 
	       if( x >= 2 && x <= 4) { 
	           cout <<"Xuan" << endl; 
		   } 
		   if(x >= 5 && x <= 7) cout << "He" << endl ; 
		   if(x >= 8 && x <= 10) cout <<"Thu" << endl ; 
		   if( x>= 11 && x <= 1) cout <<"Dong" << endl ; 
	   } 
	   if(s == r) { 
	      if(x >= 11 && x <= 4) cout <<"Mua" << endl ; 
	      else cout << "Kho" << endl;  
	   }
	}
}
