#include<bits/stdc++.h> 
using namespace std ;  
int tong(long long n) { 
   int sum = 0 ; 
   while( n > 0) { 
       sum += n % 10 ; 
       n /= 10 ; 
   } 
   return sum ; 
} 
long long check(long long n) { 
    int sum2 = 0 ; 
   for(int i=2 ; i <= sqrt(n) ; i++) { 
      if(n % i == 0) { 
         while( n % i == 0) { 
             sum2 += tong(i) ; 
             n /= i ; 
		 }
	  }
   } 
   if( n!= 1) sum2 += n ;  
   return sum2 ; 
}
int main() { 
   long long n ; 
   cin >> n  ;  
     cout << check(n)  << endl  ; 
   if(check(n) == tong(n)) cout << "YES" << endl ; 
   else cout << "NO" << endl ; 
}
