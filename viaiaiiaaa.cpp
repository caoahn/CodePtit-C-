#include<bits/stdc++.h> 
using namespace std ; 
int check(long long n) { 
   int k = n ; 
   int s = 0 ; 
   while(n != 0) { 
      s = s*10 + n % 10 ; 
      n /= 10 ; 
   } 
   if( k == s) { 
       return  1 ; 
   } 
   return 0 ; 
}
int main () { 
    int n ; 
    cin >> n ;  
    long long sum = 0 ; 
    long long l = pow(10,n-1) ; 
    long long r = pow(10,n) ; 
    for(long long i= l ; i < r ; i++) { 
       if(check(i)) sum += i ; 
	} 
	cout << sum << endl ; 
}
