#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   long long n ; 
   cin >> n ; 
   int res = -1e9-1 ; 
   int ko  ; 
   for(int i=2 ; i<= sqrt(n) ; i++) { 
     if(n % i == 0) {  
        int mu = 0 ; 
          while(n % i == 0) { 
                ++mu ; 
                n /= i ; 
		  } 
		if(mu > res) { 
		  res = mu ;    
		  ko = i ; 
		}   
	 }
   }   
   if(n != 1) { 
      if(res < 1) { 
        res= 1 ; 
		ko = n ;  
	  } 
   } 
   cout << ko <<" "<< res ;  
   return 0 ;  
}
