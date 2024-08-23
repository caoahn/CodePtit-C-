#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
    int t ; 
    cin >> t ; 
    while(t--) { 
      int n ; 
      cin >> n ; 
      map<int,int> mp ; 
      int a[n][n] ; 
      for(int i=0;i<n;i++) {  
         set<int> se ; 
        for(int j=0;j<n;j++) { 
           cin >> a[i][j] ; 
           se.insert(a[i][j]) ; 
		} 
		for(auto x : se) { 
		   mp[x]++ ; 
		}
	  }  
	  int cnt = 0 ; 
	  for(auto x : mp) { 
	    if(x.second >= n) { 
	      ++cnt ; 
		}
	  } 
	  cout << cnt << endl ; 
	} 
	return 0 ; 
}
