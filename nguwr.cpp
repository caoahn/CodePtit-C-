#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int n  ; 
   cin >> n  ;
   int a[n] ; 
   for(int i=0; i < n ; i++) { 
     cin >> a[i] ; 
   }  
   int cnt = 0  ; 
   sort(a,a+n) ;   
   for(int i=0; i < n ; i++) cout << a[i] <<" " ; 
   cout <<endl ; 
   for(int i=0; i < n ; i++) { 
       if( binary_search(a+i+1,a+n, 28 - a[i])  == true) { 
         ++cnt ; 
	   } 
   } 
   cout << cnt + 1 << endl ;  
}
