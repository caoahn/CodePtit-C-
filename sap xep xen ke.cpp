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
     sort(a,a+n) ; 
     for(int i=0; i < n ; i+=2) { 
         b[i+1] = a[i/2] ; 
         b[i] = a[n-i/2 - 1] ; 
	 } 
	 for(int x : b) cout << x <<" " ; 
	 cout << endl; 
  } 
  return 0 ; 
}
