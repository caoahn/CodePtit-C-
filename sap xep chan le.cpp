#include<bits/stdc++.h> 
using namespace std ;
int main() { 
   int t ;
   cin >> t  ; 
   while(t--) { 
      int n ; 
      cin >> n ; 
      int a[n] ;
      for(int i=0 ; i < n ; i++) { 
        cin >> a[i]  ; 
	  } 
	  int b[n] ; 
	  int k = 0 ;  
	  sort(a,a+n) ; 
	  for(int i = 0 ; i < n ; i+= 2) { 
	     b[i] = a[k++] ; 
	  } 
	  for(int i=1; i < n ; i+= 2) { 
	    b[i] = a[k++] ; 
	  } 
	  for(int x : b) cout << x << " " ; 
	  cout << endl ; 
   }
}
