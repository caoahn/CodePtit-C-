#include<bits/stdc++.h> 
using namespace std ;  
int main() { 
   long long n, k ; 
   cin >> n >> k ;   
   vector<int> v ; 
   for(int i=2 ; i<= sqrt(n) ; i++) { 
      if(n % i == 0) { 
	    int mu = 0 ;  
         while(n % i == 0) { 
		    ++mu ;  
            n /= i ;  
            v.push_back(i) ; 
		 }
	  }
   } 
   if( n!= 1) v.push_back(n) ; 
   int ok = 1 ;   
    for(int i=0 ; i < v.size() ; i++) { 
       if(i == k-1) { 
         cout << v[i] << endl ;  
         ok = 0 ; 
	   }
	} 
	if(ok) cout <<"-1" ; 
}
