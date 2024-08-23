#include<bits/stdc++.h> 
using namespace std ;
long long fb[93]={0} ; 
void fibo() { 
   fb[0] = 0 ; 
   fb[1] = 1 ; 
   for(int i=2; i<93;i++) { 
      fb[i] = fb[i-1] + fb[i-2] ; 
   }
} 
int main() { 
  int t ; 
  cin >> t ; 
  while(t--) { 
     long long n ; 
     cin >> n ;  
     fibo() ; 
	 int ok =  1;  
     for(int i=0; i < 93 ;i++ ) { 
        if(fb[i] == n) { 
          cout << "YES" << endl ; 
		  ok = 0 ; 
		  break ;  
		}
	 } 
	 if(ok) cout << "NO" << endl ; 
  }
}
