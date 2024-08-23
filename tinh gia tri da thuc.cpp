#include<bits/stdc++.h>  
using namespace std ; 
#define modul 1000000007 ;
long long check(int x,int n) {  
  long long p = 1 ; 
  for(int i=0;i<n;i++) { 
     p *= x ; 
     p %= modul ; 
  } 
  return p ; 
} 
int main() { 
  int t ; 
  cin >> t ; 
  while(t--) { 
     int n, x ; 
     cin >> n >> x  ; 
	 int a[n] ;  
     for(int i=n-1; i>= 0;i--) { 
       cin >> a[i] ; 
	 } 
	 long long sum = 0 ; 
	 for(int i=0;i<n;i++) { 
	   sum += a[i]* check(x,i) ; 
	   sum %= modul ; 
	 } 
	 cout << sum << endl ; 
  }
}
