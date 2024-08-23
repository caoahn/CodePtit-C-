#include<bits/stdc++.h> 
int b[1000000] = {0} ; 
using namespace std ; 
int main() { 
  int t ; 
  cin >> t ;  
  while(t--) { 
     int n ; 
     cin >> n ; 
     int a[n] ; 
     for(int &x:a) cin >> x ; 
     for(int i=0;i<n;i++) { 
       b[a[i]]++ ; 
	 } 
	 int cnt = 0 ; 
	 for(int i=0;i<n;i++) { 
	    if(b[a[i]] >= 2) { 
	      ++cnt ; 
		}
	 } 
	 cout << cnt << endl ; 
	 for(int i=0;i<n;i++) { 
	   b[a[i]] = 0 ; 
	 }
  }
}
