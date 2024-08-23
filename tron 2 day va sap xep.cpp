#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t;  
   cin >> t ; 
   while(t--) {  
      int n,m ; 
      cin >> n >> m ; 
      int a[n],b[m] ; 
      for(int i=0;i<n;i++) { 
        cin >> a[i] ; 
	  } 
	  for(int i=0;i<m;i++) { 
	    cin >> b[i] ; 
	  } 
	  multiset<int> ms ; 
	  for(auto x : a) { 
	     ms.insert(x) ; 
	  } 
	  for(auto x : b) { 
	    ms.insert(x) ; 
	  } 
	  for(auto x : ms) { 
	     cout << x << " " ; 
	  } 
	  cout << endl ; 
   }
}
