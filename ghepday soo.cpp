#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
  int t ; 
  cin >> t ; 
  while(t--) { 
     int n ; 
     int k ;  
     cin >> k>> n ; 
     multiset<int> ms ; 
     while(k--) { 
        int a[n] ; 
        for(int i=0; i<n;i++) { 
           cin >> a[i] ; 
		} 
		for(int i=0; i < n ;i++) { 
		  ms.insert(a[i]) ; 
		}
	 } 
	 for(auto x : ms) cout << x << " " ;  
	 cout << endl ; 
  }
}
