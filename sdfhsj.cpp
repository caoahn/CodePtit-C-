#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
      int n1,n2,n3 ; 
      cin >> n1 >> n2 >> n3 ;  
	  set<long long> a1,a2,a3 ;  
      for(int i=0; i < n1 ; i++) { 
         long long tmp;
         cin>>tmp;
         a1.insert(tmp); 
	  } 
	  for(int i=0; i < n2 ; i++) { 
	     long long tmp;
	     cin>>tmp;
	     a2.insert(tmp);
		   
	  } 
	  for(int i=0; i < n3; i++) { 
	    long long tmp;
		cin>>tmp; 
	    a3.insert(tmp);
	  } 
	  int ok=1;
	  for(auto x:a1){
	  	if(a2.count(x)){
	  		if(a3.count(x)){
	  			cout<<x<<" ";
	  			ok=0;
			  }
		  }
	  }	
	  if(ok == 1) cout <<"-1";  
	  cout << endl ; 
   }
}
