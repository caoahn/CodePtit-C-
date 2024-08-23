#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
  int t ; 
  cin >> t ;
  while(t--) { 
     string a, b ; 
     cin >> a >> b; 
     if(a.size() < b.size() || a.size() == b.size() && a[0] < b[0]) swap(a,b) ; 
     while(a.size() != b.size()) { 
         b.insert(0,"0") ; 
	 } 
	 string c = "" ; 
	 int x ; 
	 for(int i=a.size()-1;i >=0 ;i--) { 
	    if(a[i] >= b[i]) { 
	        x = a[i] - b[i] ; 
		} 
		else { 
		     x = a[i] - b[i] + 10 ; 
			 a[i-1] -= 1 ;  
		} 
		c += x +'0' ; 
	 } 
	 for(int i=c.size()-1 ; i >=0 ; i--) { 
	   cout <<c[i] ; 
	 } 
	 cout << endl ; 
  }
}
