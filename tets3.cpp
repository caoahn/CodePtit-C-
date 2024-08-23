#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int n ; 
   cin >> n ; 
   long long x ; 
   cin >> x  ; 
   long long a[n][n] ; 
   int cnt = 0 ;    
   for(int i=0 ; i< n;i++) { 
     for(int j=0 ; j < n;j++) { 
        if( x == (long long)(i+1)*(j+1) )    
        ++cnt;
	 }
   }  
   cout << cnt << endl ;
}
