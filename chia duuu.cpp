#include<bits/stdc++.h> 
using namespace std ; 
int main() {  
   int t ; 
   cin >> t ; 
   while(t--) { 
     int a,m ; 
     int x = 0 ; 
     cin >> a >> m ; 
     int check = 0 ; 
     while(x < m) {  
        if(a*x % m == 1)  { 
           check = 1 ;
           break ; 
		}
        ++x ; 
	 } 
	if(check == 1) { 
	    cout << x << endl ; 
	} 
	else cout << "-1" << endl ; 
   }
}
