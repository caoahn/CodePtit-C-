#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
  int t ; 
  cin >> t ; 
  while(t--) { 
    int n ; 
    cin >> n ; 
    int a[n][n] ; 
    for(int i=0;i<n;i++) { 
      for(int j=0;j<n;j++) { 
         cin >> a[i][j] ; 
	  }
	} 
	int b[n] = {0} ; 
	int c[n] = {0} ; 
	for(int i=0; i<n;i++) { 
	  for(int j=0;j<n;j++) { 
	     b[i] += a[i][j] ; 
	     c[j] += a[i][j] ; 
	  }
	} 
	for(int x : c) cout << x << " " ; 
  }
}
