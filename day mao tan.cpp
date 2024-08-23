#include<bits/stdc++.h> 
using namespace std ;  
int check(int a[],int l,int r) { 
   int ok = 0  ; 
   for(int i=l;i<=r;i++) { 
     if(a[i] >= a[i+1]) { 
         ok = 1 ; 
	 }
	 else  { 
	   if(ok == 1) { 
	   return 0 ; 
	   }
	 }
   } 
   return 1 ; 
}
int main() { 
  int t ; 
  cin >> t ; 
  while(t--) { 
     int n ; 
     cin >> n ; 
	 int a[n] ; 
	 for(int &x : a) cin >> x  ; 
	 int l,r ; 
	 cin >> l >> r ; 
	 if(check(a,l,r) == 1 ) cout << "Yes" << endl ; 
	 else cout <<"No" << endl ; 
  }
}
