#include<bits/stdc++.h> 
using namespace std ;  
int cmp(const void *a,const void *b)  { 
   int *x = (int*)a ; 
   int *y = (int*)b ; 
   return *x - *y ; 
}
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
      int n ; 
      cin >> n ; 
      int a[n] ; 
      for(int i=0;i<n;i++) { 
        cin >> a[i] ; 
	  } 
	  qsort(a,n,sizeof(a[0]),cmp) ;  
	  int min = 1e9+1 ; 
	  for(int i = 0; i < n-1;i++ ) { 
	    if( abs(a[i+1] - a[i] )  < min) { 
	       min = abs(a[i+1] - a[i] ); 
		}
	  } 
	  cout << min << endl ; 
   }  
   return 0 ; 
}
