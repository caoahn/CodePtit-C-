#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
      int n ; 
      cin >> n ; 
      int a[n] , b[n] ; 
      for(int &x : a) cin >> x ; 
      for(int &y : b) cin >> y ; 
      int max =0 ; 
      for(int i=0; i <n;i++) {  
         int x = 0 , y = 0 ; 
         for(int j=i; j < n ; j++) { 
            x += a[j] ; 
            y += b[j] ; 
			if(x == y) { 
			     if(max < j - i + 1) max = j -i + 1; 
			} 
		 }
	  } 
	  cout << max << endl ; 
   }
}
