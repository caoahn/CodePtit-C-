#include<bits/stdc++.h> 
using namespace std ;
int main() { 
    int t ; 
    cin >> t ; 
    while(t--) { 
       int n ; 
       cin >> n ; 
       int a[n] ; 
       for(int &x : a) cin >> x ; 
       int b[n] ;    
	   for(int i=0; i <n;i++) {   
	      int ok = 1 ; 
		  int  oke = 1 ;  
	      for(int j=0; j<n;j++) { 
	        if( i == a[j]) { 
	          b[i] = a[j] ; 
			  oke = 0 ;   
			} 
			else ok = 0 ; 
		  } 
		if(ok == 0 && oke == 1) { 
		  b[i] = -1 ; 
		}
	   } 
	   for(int x : b ) cout << x << " " ;  
	   cout << endl ; 
	}
}

