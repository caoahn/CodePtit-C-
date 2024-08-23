#include<bits/stdc++.h> 
using namespace std ;  
  int a[10005] ; 
  int b[100] ; 
int main() { 
  int n  ; 
  cin >> n ; 
  long long ans= 0  ;  
  for(int i=0; i<n;i++) { 
     cin >> a[i] ;  
  } 
  for(int i=0 ; i < n ; i++) { 
     int x = a[i] % 28 ; 
     b[x]++ ; 
  } 
  ans +=  b[0]*(b[0]-1)/2 + b[14]*(b[14] - 1) / 2 ; 
  for(int i=1;i<=13;i++) { 
     ans += b[i]*b[28-i] ; 
  } 
  cout << ans << endl ; 
} 
//12
//7 4 14 2 12 5 18 14 27 13 25 14
