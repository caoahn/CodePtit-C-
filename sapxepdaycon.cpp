#include<bits/stdc++.h> 
using namespace std ; 
int main () { 
   int t ; 
   cin >> t ; 
   while(t--) { 
      int n ; 
      cin >> n; 
      vector<int> v1,v2 ; 
      for(int i=0;i<n;i++) {  
        int x ; 
        cin >> x ; 
        v1.push_back(x) ; 
        v2.push_back(x) ; 
	  } 
	  sort(v1.begin(),v1.end()) ; 
	  for(int i=0; i < v1.size() ; i++) { 
	    if(v1[i] != v2[i]) { 
	      cout << i+1 <<" " ;  
	      break ; 
		}
	  } 
	  for(int i=v1.size()-1;i >= 0; i--) { 
	    if(v1[i] != v2[i]) { 
	      cout << i+1 << endl ; 
	      break ; 
		}
	  }
   } 
   return 0 ;
}
