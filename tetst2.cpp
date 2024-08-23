#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int  t ; 
   cin >> t ; 
   while(t--) { 
      int n ; 
      cin >> n ; 
      set<int> se ; 
      for(int i=0; i<n;i++) { 
         int x ; 
         cin >> x ; 
         se.insert(x) ; 
	  } 
	 int k ; 
	 cin >>  k ; 
	 while(k--) { 
	     int z ; 
	     cin >> z ;  
	     int ok = 1 ; 
	     for(int i=0;i< se.size() ; i++) { 
	       if(se.count(z) != 0) { 
	         cout << "YES" << endl ; 
			 ok = 0 ;  
		   }
		 } 
		 if(ok) cout << "NO" << endl ;   
	 }
   }
}
