#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int  n ;
   cin >> n ; 
   int a[n][n] ;  
    int x[n*n] ;  
     int c[n][n] ; 
   int cnt = 0 ; 
   int cnt1= 0 ; 
   for(int i=0;i<n;i++) { 
     for(int j=0;j<n;j++) { 
       cin >> a[i][j] ; 
	 }
   }
   for(int i=0; i<n;i++) { 
     for(int j=0; j < n ; j++) { 
        x[cnt] = a[j][i] ;  
        ++cnt ; 
	 } 
	  sort(x,x+cnt) ;  
	  for(int k=0 ; k < n ;k++) { 
	     a[k][i] = x[cnt1] ; 
	     ++cnt1 ; 
	  } 
	  memset(x,0,sizeof(x)) ; 
	  cnt =0 ; 
	  cnt1 = 0 ;  
   }  
    for(int i=0 ; i<n;i++) { 
      for(int j=0; j < n ; j ++) { 
        cout << a[i][j] <<" " ; 
	  } 
	  cout << endl ; 
	}
}  
//4 
//4 5 6 7
//3 4 5 6
//2 3 4 5
//7 8 9 3
