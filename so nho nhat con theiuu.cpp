#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ; 
   cin >>  t ; 
   while(t--) { 
      int m ; 
      cin >> m ; 
      int n = m - 1; 
      int a[m-1] ; 
       map<int,int> mp ; 
      for(int i=0; i < m-1 ;i++) { 
        cin >> a[i] ;  
        mp[a[i]]++ ; 
	  } 
	  for(int i=1 ; i <= m +1; i++) { 
	     if(mp[i] == 0) { 
	        cout << i << endl ; 
	        break ; 
		 } 
	  }
   } 
}
