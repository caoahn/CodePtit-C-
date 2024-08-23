#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
  int t ; 
  cin >> t ; 
  while(t--) { 
     int n, k ; 
     cin >> n >> k;
     int a[n] ; 
     for(int &x : a) cin >> x ; 
     while(k--) { 
        int l,r ; 
        cin >> l >> r ; 
        int s = 0 ; 
        for(int i=l-1; i<r;i++) { 
          s += a[i] ; 
		} 
		cout << s << endl ; 
	 }
  }
}
