#include<bits/stdc++.h> 
using namespace std ;  
int search(vector<int> m,int n,int k) { 
  int l = 0 ; 
  int r = n - 1; 
  while(l <= r) { 
     int tb = (l+r)/2 ; 
     if(m[tb] == k) return 1 ; 
     else if( k > m[tb]) l = tb + 1 ; 
     else r = tb - 1 ; 
  } 
  return -1 ; 
}
int main() { 
   int t ; 
   cin >> t ;
   while(t--) { 
     int  n , k ; 
     cin >> n >> k ; 
     vector<int> v(n) ; 
     for(int i=0;i<n;i++) { 
       cin >> v[i] ; 
	 } 
	 sort(v.begin() , v.end()) ; 
	 cout << search(v,n,k)  << endl; 
   }
}
