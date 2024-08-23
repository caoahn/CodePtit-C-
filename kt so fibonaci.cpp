#include<bits/stdc++.h> 
using namespace std ; 
long long fb[100] = {0}; 
void fibo() { 
    fb[0] = 0 ; 
    fb[1] = 1; 
    for(int i=2; i <= 92;i++) { 
      fb[i] = fb[i-1] + fb[i-2] ; 
	}
} 
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
     long long n ; 
      cin >> n ;  
      int ok = 0 ;  
      fibo() ; 
      for(int i=0 ; i<=92;i++) { 
        if(fb[i] == n) { 
           ok = 1 ; 
		   cout << "YES" << endl ; 
		   break ;  
		}
	  } 
	  if(ok == 0) cout << "NO" << endl ; 
   }
}
