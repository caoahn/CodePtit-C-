#include<bits/stdc++.h> 
using namespace std ; 
int check(int n) {  
    
   if(  n <= 445) return -1;  
   if( n >= 450 && n <= 520) return 7 ; 
   if( n>= 525 && n<= 595) return 8 ; 
   if(n >= 600 && n<= 725) return 9 ; 
   if(n >= 730) return 10 ; 
}
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
       int n ; 
       cin >> n ; 
       cout << check(n) << endl ; 	
   }
}
