#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
      int n, k ; 
      cin >> n >> k ; 
	  int cnt = 0; 
	  int a[1000] ={0} ;   
      for(int i=2 ; i<= sqrt(n);i++) { 
          while(n % i == 0) { 
             a[cnt] = i ; 
             ++cnt ; 
             n /= i ; 
		  }
	  } 
	  if( n!= 1) a[cnt++] = n ;  
	  int ok = 1, oke = 1; 
	  for(int i=0;i<cnt;i++) { 
	    if( i == k-1) { 
	       cout << a[i] << endl ; 
	       oke = 0 ; 
		} 
		else ok = 0 ;  
	  } 
	  if(ok == 0 && oke == 1) cout <<"-1" <<endl ; 
   } 
   return 0 ; 
}
