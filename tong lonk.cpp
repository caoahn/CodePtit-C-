#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int n, k ; 
   cin >> n >> k ; 
   int a[n] ; 
   for(int i=0 ; i<n;i++) { 
     cin >> a[i] ; 
   } 
   sort(a,a+n) ;  
   int cnt = 0 ; 
   for(int i=0 ; i <n;i++) { 
     int it = upper_bound(a+i+1,a+n,k-a[i]) - a ;
	 cnt += n - it ; 
   } 
   cout <<cnt <<endl ; 
} 

