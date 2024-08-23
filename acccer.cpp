#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
      int n1,n2,n3 ; 
      cin >> n1 >> n2 >> n3 ; 
      long long  a[n1] , b[n2] ,c[n3] ; 
	  multimap<long long,int> mp ;  
      for(int i=0; i < n1 ; i++) { 
         cin >> a[i] ; 
         mp[a[i]] = 1 ; 
	  } 
	  for(int i=0; i < n2 ; i++) { 
	     cin >> b[i] ; 
		 if(mp[b[i]] == 1) { 
		    mp[b[i]] = 2 ; 
		 } 
	  } 
	  for(int i=0; i < n3; i++) { 
	    cin >> c[i] ;  
	     if(mp[c[i]] == 2) { 
	       mp[c[i]] = 3; 
		 }
	  }  
	  int ok = 1 ; 
	  for(auto it : mp) { 
	    if( it.second == 3) { 
	      cout << it.first << " "  ; 
		  ok = 0 ;  
		}
	  } 
	  if(ok == 1) cout <<"-1" << endl ;  
	  cout << endl ; 
   }
}

