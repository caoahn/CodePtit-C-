#include<bits/stdc++.h> 
using namespace std ;  
long long fb[92] ; 
void fibo() { 
   fb[0] = 0 ; 
   fb[1] = 1 ; 
   for(int i=2;i<=91;i++) { 
     fb[i] = fb[i-1] + fb[i-2] ; 
   }
}
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
      int n ; 
      cin >> n ; 
      fibo() ; 
      cout << fb[n] << endl ; 
   } 
   return 0 ; 
}
