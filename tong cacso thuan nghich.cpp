#include<bits/stdc++.h>
using namespace std ;  
int check(int n) { 
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
int main() { 
    int n ; 
    cin >> n ; 
	long long sum = 0 ; 
    for(long long i=pow(10,n-1) ; i <= pow(10,n) ; i++) { 
        if(check(i)) { 
            sum += i ; 
		}
	} 
	cout << sum << endl ; 
}
