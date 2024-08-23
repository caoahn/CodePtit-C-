#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
      int n1,n2,n3 ; 
      cin >> n1 >> n2 >> n3 ; 
      long long  a[n1] , b[n2] ,c[n3] ; 
	  map<int,int> mp ; 
	  set<int> s1,s2,s3 ;   
      for(int i=0; i < n1 ; i++) { 
         cin >> a[i] ; 
          s1.insert(a[i]) ; 
	  } 
	  for(int i=0; i < n2 ; i++) { 
	     cin >> b[i] ; 
		  s2.insert(b[i]) ; 
	  } 
	  for(int i=0; i < n3; i++) { 
	    cin >> c[i] ;  
	    s3.insert(c[i]) ; 
	  } 
	  for(auto x : s1) mp[x]++ ; 
	  for(auto y : s2) mp[y]++ ; 
	  for(auto z : s3) mp[z]++ ;   
	  int ok = 1 ; 
	  for(auto it : mp) { 
	    if( it.second == 3) { 
	      cout << it.first << " "  ;  
	      ok = 0 ; 
		}  
	  } 
	  if(ok == 1) cout <<"-1";  
	  cout << endl ; 
   }
}
