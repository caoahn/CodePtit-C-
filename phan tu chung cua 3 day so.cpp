#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
     int n1,n2,n3 ; 
     cin >> n1 >> n2 >> n3 ; 
     long long a[n1],b[n2],c[n3] ; 
      for(int i=0; i < n1 ; i++) cin >> a[i] ; 
      for(int i=0; i < n2 ; i++) cin >> b[i] ; 
      for(int i=0; i < n3 ; i++) cin >> c[i] ; 
     int l=0,j=0,k=0; 
     multiset<long long> se ; 
     while(l < n1 && j < n2 && k < n3) { 
        if(a[l] == b[j] && b[j] == c[k] ) { 
                 se.insert(a[l]) ; 
                 	++l ; 
		++j ; 
		++k ; 
		} 
		else if(a[l] < b[j]) ++l ; 
		else if(b[j] < c[k]) ++j ; 
		else ++k ; 
	 } 
	 if(se.size() == 0) cout <<"-1"; 
	 else for(auto it : se) { 
	   cout << it << " " ; 
	 } 
	 cout << endl ; 
   } 
   return 0 ;
}
