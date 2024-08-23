#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
     long long n ; 
     cin >> n ; 
     long long s = 0 ; 
     for(int i=1 ; i<= sqrt(n) ; i++) { 
        if(n % i == 0) {  
           if( i != n /i && n/i <= n)  { 
               s += i + n/i ; 
		   }   
            else s += i ; 
		}
	 } 
	 cout << s << endl ; 
   }
}
