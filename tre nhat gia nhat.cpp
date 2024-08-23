#include<bits/stdc++.h> 
using namespace std ;  
struct person { 
   string ten ; 
   string ns ; 
   int d,m,y ; 
}; 
void nhap(person &a) {    
   cin >> a.ten ; 
   cin >>a.ns ;   
   cin.ignore() ; 
   string s1= a.ns ; 
   int d = (s1[0]-'0')*10 + s1[1]-'0' ; 
   int m = (s1[3]-'0')*10 + s1[4]-'0' ; 
   int y = (s1[6]-'0')*1000 + (s1[7]-'0')*100 +  (s1[8]-'0')*10 + s1[9]-'0' ;  
} 
bool cmp(person a, person b) { 
    if( a.y > b.y) return true ; 
	if(a.y == b.y && a.m > b.m) return true ; 
	if(a.y == b.y && a.m == b.m && a.d > b.d) return true ; 
	return false ;  
} 
void in(person p[],int n) { 
    sort(p,p+n,cmp) ; 
   cout << p[0].ten << endl << p[n-1].ten << endl 
}
int main() { 
   int n ; 
   cin >> n ;  
   struct person p[n] ; 
   cin.ignore() ;  
   for(int i=0;i<n;i++) { 
      nhap(p[i]) ; 
   } 
   in(p,n) ; 
}
