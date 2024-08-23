#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
  int t ; 
  cin >> t ; 
  while(t--) { 
     int n,m ; 
     cin >> n >> m ; 
     int a[n],b[m] ; 
     for(int &x : a) cin >> x ; 
     set<int> se ; 
     for(int i=0;i<m;i++) { 
        int y; 
        cin >> y ; 
        se.insert(y) ; 
	 }  
	 bool ok = false ; 
	 for(int x : a) { 
	     if(se.count(x) != 0) { 
	       cout << x << " " ; 
	       ok = true ; 
		 }
	 } 
	 if(ok == false) cout << "NOT FOUND" <<endl ; 
  } 
  return 0 ; 
}
