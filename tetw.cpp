#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   	int t ; 
   	cin >> t ; 
   	while(t--) { 
   	  int n ; 
   	  cin >> n ; 
	  set<int> se ;   
   	  for(int i=0; i <n;i++) { 
   	      int x ; 
   	      cin >> x ; 
		  se.insert(x) ; 	   
	 } 
	  cout << se.size() << endl ; 
		 } 
		 return 0 ; 
	}
