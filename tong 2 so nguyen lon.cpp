#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ; 
   cin >> t  ; 
   while(t--) { 
      string a ; 
      string b ; 
      cin >> a >> b ; 
      if(a.size() < b.size())  swap(a,b) ; 
      while(a.size() != b.size()) { 
          b.insert(0,"0") ; 
	  }  
	  string c=""; 
	  int nho = 0 ; 
	  for(int i=a.size() -1  ; i >=0 ; i --) { 
	     int x = a[i] - 48 + b[i] - 48  + nho ; 
	     nho = x/10 ; 
	     int z = x% 10 ; 
	     c += z + '0' ; 
	  } 
	  if(nho > 0) c += nho + '0' ;  
	  for(int i=c.size() - 1 ; i >=0 ;i-- ) { 
	     cout<<c[i] ; 
	  } 
	  cout << endl ; 
   }
}
