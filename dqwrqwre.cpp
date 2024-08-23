#include<bits/stdc++.h> 
using namespace std ;  
bool check(long long n) { 
   long long sum = 0 ;  
   while(n != 0) { 
   sum = sum*10 + n%10; 
   n /= 10 ;    
}
   if(sum - n == 0) return true ; 
 return false ;    
} 
long long check2(long long n) { 
   long long sum1 = 0 ; 
   while(n != 0) { 
     sum1 += n % 10 ; 
     n/=10 ; 
   }
   return sum1 == 8 ; 
}
int main() { 
   long long n ; 
   cin >> n ; 
   long long dem = 0 ; 
   long long k = pow(10,n-1) ; 
   long long x = pow(10,n) ; 
   for(long long i=k ; i< x ;i++) { 
     if(check(i) && check2(i)) { 
       ++dem ; 
	 }
   } 
   cout << dem <<endl ; 
}
