#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ; 
   cin >> t; 
   while(t--) { 
     int n ; 
     cin >> n ;  
     int a[n] ; 
     for(int &x : a) cin >> x  ; 
	 int max = -1e9-1 ; 
	 int hieu= 0 ;  
	 int ok = 0 ; 
	 for(int i=0;i<n-1;i++) { 
	   for(int j=i+1 ; j <n;j++) { 
	     if(a[j] > a[i]) { 
	       hieu = a[j]- a[i] ; 
	       if(hieu > max ) { 
	        max = hieu ;  
		   } 
		   ok = 1 ;  
		 } 
	   }
	 } 
	 if(ok == 1) cout << max << endl ; 
	 else cout << "-1" << endl ;  
   }
}
