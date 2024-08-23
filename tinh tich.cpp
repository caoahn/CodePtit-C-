#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
      int n,m; 
      cin >> n >> m ; 
      int a[n],b[m] ; 
      for(int &x: a) cin >> x ; 
      for(int &y : b) cin >> y  ; 
      cout <<( long long ) *max_element(a,a+n) * *min_element(b,b+m) << endl ; 
   } 
   return 0 ; 
}
