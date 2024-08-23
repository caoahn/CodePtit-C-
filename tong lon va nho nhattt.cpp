#include<bits/stdc++.h> 
using namespace std ;  
long long check(string a) {  
    long long x = 0 ; 
   for(int i=0; i < a.size() ; i++)  { 
       if(a[i] == '5') { 
          a[i]++ ; 
	   } 
	   x = x*10 + a[i] -'0' ; 
   } 
   return x ; 
} 
long long check2(string a) { 
   long long x = 0 ; 
   for(int i = 0 ; i< a.size() ; i++) { 
       if(a[i] == '6') { 
          a[i]-- ; 
	   } 
	   x = x*10 + a[i] -'0' ; 
   } 
   return x ; 
}
int main () { 
   int t ; 
   cin >> t ; 
   while(t--) { 
      string x1,x2 ; 
      cin >> x1 >> x2 ; 
      cout << check2(x1) + check2(x2) << " " << check(x1) + check(x2) << endl ; 
   }
}
