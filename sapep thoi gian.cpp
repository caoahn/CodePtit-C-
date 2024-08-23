#include<bits/stdc++.h> 
using namespace std ; 
struct tim { 
    int g,p,s ; 
};  
bool cmp(tim c,tim d) { 
     if(c.g < d.g) return true ; 
     if(c.g == d.g && c.p < d.p ) return true ; 
     if(c.g == d.g && c.p == d.p && c.s < d.s) return true ; 
     return false ; 
}
int main() { 
   int n ;  
   cin >> n ; 
   tim t[n] ; 
   for(int i=0;i<n;i++) { 
     cin >> t[i].g >> t[i].p >> t[i].s ; 
   } 
   sort(t,t+n,cmp) ; 
   for(int i=0; i <n;i++) { 
     cout << t[i].g <<" " << t[i].p <<" " << t[i].s << endl ; 
   } 
   return 0 ; 
}
