#include<bits/stdc++.h> 
using namespace std; 
int main() { 
   int n ; 
   cin >> n ; 
   int ok = 0;   
   for(int i=2; i <= sqrt(n);i++) { 
      if( n % i == 0) { 
	     int cnt = 0 ;  
         while(n % i == 0) { 
             n/= i ; 
             ++cnt ; 
		 }  
		  if(cnt >= 4) { 
		    ok = 1; 
		    break ; 
		  }
	  }
   } 
   if(ok == 1) cout << "YES" << endl ; 
   else cout << "NO" << endl ; 
}
