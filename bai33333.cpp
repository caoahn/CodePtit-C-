#include<bits/stdc++.h> 
using namespace std ;  
int tong2(long long n) { 
   int sum2 = 0 ; 
   while(n!=0) { 
      sum2 += n % 10 ; 
      n /= 10 ; 
   } 
   return sum2 ; 
}
int tong(long long n) { 
   int sum1 = 0 ;  
   for(int i=2; i<= sqrt(n) ; i++) {  
        while(n % i ==0 ) { 
		   sum1 += tong2(i)  ; 
           n /= i ;  
		}
   } 
   if(n!=1) { 
      sum1 += tong2(n) ; 
   } 
   return sum1 ; 
} 
int main() { 
     long long n ; 
     cin >> n ; 
     if(tong(n) == tong2(n)) cout << "YES" << endl ; 
     else cout <<"NO" << endl ; 
}
