#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
  int t ; 
  cin >> t ; 
  while(t--) { 
     int n,x ; 
     cin >> n >> x ; 
     int a[n] ; 
     for(int i=0; i < n ; i++) cin >> a[i] ; 
     map<int,int> mp ; 
     for(int i=0 ; i < n ; i++) { 
        mp[a[i]]++ ; 
	 }  
	 int ok = 1 ; 
	for(int i=0; i < n ; i++) { 
	  if(a[i] == x) { 
	    if(mp[a[i]] != 0) {  
	       cout << mp[a[i]] << endl ;  
	       ok = 0 ; 
	       break ; 
		}	
	  } 
	} 
	if(ok == 1) cout << "-1" << endl ;  
  }
}
