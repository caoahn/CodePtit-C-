#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ; 
   cin >> t  ; 
   while(t--) { 
      int  n ; 
      cin >> n ; 
      long long a[n] ; 
    for(int i=0; i < n ;i++) { 
      cin >> a[i] ; 
	}
       vector<long long> v1 ; 
	   vector<long long> v2 ; 
	   for(int i=0; i < n ; i++) { 
	     if(a[i] != 0) { 
	        v1.push_back(a[i]) ; 
		 } 
		 else v2.push_back(a[i]) ; 
	   } 
	   for(long long x : v1) cout << x << " " ; 
	   for(long long y : v2) cout << y << " "  ; 
	   cout << endl ; 	 
   }
}
