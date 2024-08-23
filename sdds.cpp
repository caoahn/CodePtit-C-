#include<bits/stdc++.h> 
using namespace std ;
int main() { 
    int t ; 
    cin >> t ; 
    while(t--) { 
       long long n ; 
       cin >> n ; 
       long long a[n] ; 
       for(int i=0 ; i < n;i++) { 
         cin >> a[i] ; 
	   }
        long long b[n] ;  
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
	   for(int x : b ) cout << x << " " ;  
	   cout << endl ; 
	}
}

