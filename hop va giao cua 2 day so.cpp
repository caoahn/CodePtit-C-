#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
      int n,m ; 
      cin >> n >> m ; 
	  int a[n] , b[m] ;  
      for(int &x : a) cin >> x  ; 
      for(int &y : b) cin >> y ; 
      set<int> se1 ; 
      set<int> se2 ; 
      set<int> se3 ; 
      for(int i=0; i < n ; i++) { 
         se1.insert(a[i]) ; 
		 se3.insert(a[i]) ;  
	  } 
	  for(int i=0; i < m ; i++) { 
	      se1.insert(b[i]) ; 
		  se2.insert(b[i]) ;  
	  }  
	  for(auto it : se1) cout <<it << " " ; 
	  cout << endl ; 
	  for(auto it1 : se3) { 
	     if(se2.count(it1) != 0) { 
	         cout << it1 << " " ; 
		 }
	  } 
	  cout << endl ;  
   }
}
