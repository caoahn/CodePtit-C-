#include<bits/stdc++.h> 
using namespace std ;
int main() { 
   int n ; 
   cin >> n ; 
   int a[n][n] ; 
   for(int i=0;i<n;i++) { 
     for(int j=0;j<n;j++) { 
       cin >> a[i][j] ; 
	 }
   } 
   map<int,int> mp ;  
   for(int i=0; i < n ; i++) { 
      mp[a[0][i]] = 1 ; 
   }  
   int cnt = 1 ; 
   for(int i=1 ; i< n ; i++) {
     for(int j=0;j< n ; j++) { 
        if(mp[a[i][j]] == cnt) { 
           mp[a[i][j]]++ ; 
		}  
	 } 
	 ++cnt ; 
   }  
   int ok = 1 ; 
    for(auto it : mp) {  
      if(it.second == n) { 
      cout << it.first <<" " ; 
      ok = 0 ;  
  }
	}
   if(ok == 1) cout <<"NOT FOUND" << endl ; 
}
