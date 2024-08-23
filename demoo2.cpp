#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int n ; 
   cin >> n ; 
   int a[n] ; 
   for(int i=0;i<n;i++) { 
     cin >> a[i] ; 
   } 
   int cnt = n/2 ; 
   map<int,int> mp ;  
   for(int i=0; i < n ; i++) { 
      mp[a[i]]++ ; 
   } 
   int ok = 1 ; 
   for(int i=0;i<n;i++) { 
     if(mp[a[i]] > cnt) { 
        cout << a[i] <<" " ;  
        mp[a[i]] = 0 ; 
        ok = 0 ; 
	 }
   } 
   if(ok) cout <<"-1" << endl ;   
}
