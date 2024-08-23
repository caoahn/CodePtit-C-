#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
      int n ; 
      cin >> n ; 
      int a[n] ; 
	  map<long long,int > mp ;  
      for(int &x : a) {   
         cin >> x ;  
         mp[x]++ ; 
	  } 
	  long long res, max = 0 ; 
	  for(auto it: mp) { 
	     if(it.second > max) { 
	        max = it.second ; 
	        res = it.first ; 
		 }
	  } 
	  cout << res << " " << max << endl ; 
   } 
}
