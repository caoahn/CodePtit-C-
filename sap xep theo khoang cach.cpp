#include<bits/stdc++.h> 
using namespace std ; 
struct X { 
    int a,b,c ; 
}; 
bool cmp (X x,X y) { 
   if(x.b < y.b) return true ; 
   if(x.c < y.c && x.b == y.b) return true ; 
   return false  ;
}
int main() { 
   int t ; 
   cin >> t  ; 
   while(t--) { 
       int n,x ; 
       cin >> n >> x ; 
       vector<X> m(n) ; 
       for(int i= 0 ; i < n ; i ++ ) { 
           cin >> m[i].a ; 
           m[i].b = abs(x-m[i].a) ; 
           m[i].c = i ; 
      } 
	   sort(m.begin() , m.end() , cmp ) ; 
	   for(int i=0 ; i < n ; i++) { 
	     cout << m[i].a << " " ; 
	   } 
	   cout << endl ; 
   }
}
