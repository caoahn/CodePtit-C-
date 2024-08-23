#include<bits/stdc++.h> 
using namespace std ; 
long long fb[93] ; 
void fibo() { 
   fb[0] = 0 ; 
   fb[1] = 1 ; 
   for(int i=2;i <=92 ; i++ ) { 
      fb[i] = fb[i-1] + fb[i-2] ; 
   }
} 
int main() { 
   int t ; 
   cin >> t ;  
   fibo() ; 
   while(t--) {  
      int n ; 
      cin >> n ;  
      int ok = 1; 
      for(int i=0;i <= 92 ; i++) { 
        if(fb[i] == n) { 
           cout << "YES" << endl ; 
		   ok = 0 ; 
           break ; 
		} 
	  } 
	  if(ok == 1) cout << "NO" << endl ; 
   }
}
