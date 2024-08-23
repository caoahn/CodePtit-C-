#include<bits/stdc++.h> 
using namespace std ; 
double score(int n) { 
   if( n >= 3 && n <= 4) return 2.5 ; 
   if(n <= 6) return 3.0 ; 
   if(n <= 9) return 3.5 ; 
   if(n <= 12) return 4.0 ; 
   if(n <= 15) return 4.5 ; 
   if(n <= 19) return 5.0 ; 
   if(n <= 22) return 5.5 ; 
   if(n <= 26) return 6.0 ; 
   if(n <= 29) return 6.5 ; 
   if(n <= 32) return 7.0 ; 
   if(n <= 34) return 7.5 ; 
   if(n <= 36) return 8.0 ; 
   if(n <= 38) return 8.5 ;
   return 9.0 ; 
}
double ans(double n) { 
   double tmp = n - (int) n ; 
   if(tmp < 0.25) return n - tmp ; 
   if(tmp < 0.75) return n-tmp + 0.5 ; 
   return n-tmp + 1.0 ; 
}
int main() { 
   int t  ; 
   cin >> t ; 
   while(t--) { 
      int a,b ; 
      double c,d;  
      double sum = 0 ; 
      cin >> a >> b >> c >> d ; 
      sum += score(a) + score(b) + c + d ; 
      sum /= 4 ; 
      sum = ans(sum) ; 
      cout << fixed << setprecision(1) << sum; 
   } 
   return 0 ; 
}
