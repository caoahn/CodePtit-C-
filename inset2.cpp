#include<bits/stdc++.h> 
using namespace std  ; 
int main() { 
   fstream in ; 
   in.open("DATA.in",ios :: in) ; 
   int n,m ; 
   in >> n >> m ; 
   map<int,int> m1 ;
   set<int> se; 
   while(n--) { 
      int x ; 
      in >> x ; 
      m1[x]++ ; 
   } 
   while(m--) { 
     int x ; 
     in >> x ; 
     m1[x]++ ; 
	 if(m1[x] >=2) { 
	     se.insert(x) ; 
	 }  
   } 
   for(auto x : se) cout << x <<" " ; 
   return 0 ; 
}
