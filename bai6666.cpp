#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
  int n,m; 
  cin >> n >> m  ; 
  int a[n+2][m+2] ; 
  for(int i=0; i< n+2;i++) { 
    for(int j=0; j < m+2; j++) { 
       a[i][j] = -5 ; 
	}
  } 
  for(int i=0;i<n;i++) { 
     for(int j=0;j<m;j++) { 
        cin >> a[i][j] ; 
	 }
  } 
  int cnt = 0 ; 
  for(int i=0; i <n;i++) {  
    for(int j=0;j<m;j++) { 
        if( a[i][j] == -1) { 
             if(a[i-1][j] >= 0 ) { 
                ++cnt ; 
			 } 
			 if(a[i+1][j] >= 0 ) { 
			   ++ cnt ; 
			 } 
			 if(a[i][j-1] >= 0) {  
			    ++cnt ; 
			 } 
			 if(a[i][j+1] >= 0) { 
			    ++cnt ; 
			 } 
			 if(a[i-1][j-1] >=0) ++cnt ; 
			 if(a[i+1][j+1] >=0) ++cnt ; 
			 if(a[i+1][j-1] >=0) ++cnt ; 
			 if(a[i-1][j+1] >=0) ++cnt ; 
		}
	}
  } 
  cout << cnt << endl ; 
}
