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
       for(int i = 0 ; i < n ; i++) { 
         b[i] = -1 ; 
	   }
	   for(int i=0; i <n;i++) { 
	      for(int j=0; j<n;j++) { 
	        if( i == a[j]) { 
	         b[i] = a[j] ; 
			} 
		  }
	   } 
	   for(int x : b ) cout << x <<" " ;  
	   cout << endl ; 
	}
}
