#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ;
   cin >> t ; 
   while(t--) 
   {  
      int n,m ; 
      cin >> n >> m   ;
      int a[n] ;  
      vector<int> v1 ; 
      vector<int> v2; 
      int res = -1e9-1; 
      for(int i=0;i<n;i++) { 
          int x ; 
          cin >> x ; 
          if(x <0) v1.push_back(x) ; 
          else v2.push_back(x) ; 
          res = max(res,x) ; 
	  } 
	   bool ok = 1 ;  
      for(int i=0; i < v1.size() ; i++) {  
         if(v1[i] == res && ok == 1) { 
           cout << m <<" "<< v1[i] << " " ; 
           ok = 0  ; 
		 } 
		 else cout << v1[i] <<" " ; 
	  } 
	  for(int i=0; i < v2.size() ; i++)  { 
	      if(v2[i] == res && ok == 1) { 
	         cout << m <<" " << v2[i] <<" ";  
	         ok = 0 ; 
		  } 
		  else cout << v2[i] <<" " ; 
	  } 
	  cout << endl ; 
   }
}
