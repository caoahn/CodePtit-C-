#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
      int n ; 
      cin >> n ; 
      int a[n] ; 
      for(int i=0;i<n;i++) cin >> a[i] ; 
      int sum = 0 ; 
      int sum1 = 0 ; 
      int sum2 = 0 ; 
      int ok=1 ; 
      for(int i=0;i<n;i++) sum+= a[i] ; 
      for(int i=0;i < n;i++) { 
         sum1 += a[i] ; 
         sum2 = sum1 - a[i] ; 
         if(sum2 == sum - sum1) {  
             ok = 0 ; 
            cout << i + 1 << endl ;  
            break ; 
		 }
	  } 
	  if(ok == 1) cout <<"-1" << endl ; 
   }
}
