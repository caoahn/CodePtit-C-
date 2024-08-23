#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   	int n,m ;  
   	cin >> n >> m  ; 
   	int p = 2*n-2 ; 
   	int q= 2*m -2 ; 
   	int a[p][q] ; 
   	for(int i=0; i <p;i++) { 
   	  for(int j=0;j <q ;j++) { 
   	      a[i][j] = -5    ; 
		 }
   } 
   // 4x4 + 5x2 + 4x2 
   for(int i=1;i<p-1;i++) { 
     for(int j=1;j<q-1;j++) { 
         cin >> a[i][j] ; 
	 }
   }  
   int cnt = 0 ; 
   	for(int i=1; i <p-1;i++) { 
   	   for(int j=1;j<q-1;j++) { 
   	        if(a[i][j] == -1) { 
   	             if(a[i][j-1] >=0)  { 
   	                ++cnt ; 
					} 
				  if(a[i-1][j] >=0 ) { 
				     ++cnt ; 
				  } 
				  if(a[i+1][j] >=0) ++cnt;  
				  if(a[i][j+1] >=0 ) ++cnt ; 
				  if(a[i+1][j+1] >=0 ) ++cnt ; 
				  if(a[i+1][j-1] >=0) ++cnt ; 
				  if(a[i-1][j+1] >=0 ) ++cnt ; 
				  if(a[i-1][j-1] >=0) ++cnt ; 
			   }
		  }
	   } 
	   cout << cnt << endl ; 
}
