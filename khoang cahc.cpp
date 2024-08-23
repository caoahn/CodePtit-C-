#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ;
   cin >> t ; 
   while(t--) { 
    float x,y,a,b ; 
     cin >> x >> y >> a >> b ; 
      float z  ; 
     float m = (a-x)*(a-x) ; 
      float n = (b-y) *(b-y) ; 
      z = (float) sqrt(m +n) ; 
      cout << fixed << setprecision(4) << z << endl ; 
   } 
   return 0 ; 
}
