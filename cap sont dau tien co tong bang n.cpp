#include<bits/stdc++.h> 
using namespace std ; 
int nt(int n) { 
  for(int i=2 ;i <= sqrt(n) ; i++) { 
      if(n % i == 0) return 0 ; 
  } 
  return n > 1 ; 
} 
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
      int n ; 
      cin >> n ; 
	  int cnt = 0 ;  
      for(int i=2 ; i<= n/2 ;i++) { 
         if(nt(i) == 1 && nt(n-i) == 1) { 
            cout << i << " " << n-i << endl ; 
			cnt = 1;  
		 }
	  } 
	  if(cnt == 0) cout << "-1" << endl ; 
   } 
   return 0 ;
}
