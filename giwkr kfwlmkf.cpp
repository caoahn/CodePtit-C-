#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int n, d ; 
   cin >> n >> d ; 
   long long  a[n] ;  
   for(int i=0; i < n ; i++) { 
     cin >> a[i] ; 
   } 
   long long cnt = 0 ;
   for(int i=0 ; i < n-1; i++) { 
      if(a[i] > a[i+1]) { 
         long long ans = a[i] - a[i+1] + 1 ;   
         int k = ans % d ; 
		 long long tt ;  
         if(k != 0) { 
            tt = (ans/d) + 1 ;  
		 } 
		 else {
	      tt = ans/d ;
      }    
         cnt += tt ; 
		 a[i+1] += tt * d ;  
	  }
   } 
   cout << cnt << endl ;  
}
