#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) {  
      int n ; 
      cin >> n ; 
      int a[n] ; 
      for(int &x :a) cin >> x ; 
      sort(a,a+n) ;  
      int sum = 0 ; 
      for(int i=1;i<n;i++) { 
          if(a[i] - a[i-1] > 1) { 
            sum += a[i] - a[i-1] - 1 ; 
		  }
	  } 
	  cout << sum << endl ; 
   }
}