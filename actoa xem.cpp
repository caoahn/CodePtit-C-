#include<bits/stdc++.h> 
using namespace std; 
int check(string a) { 
   int s = 0 ; 
   for(int i=0; i < a.size() ; i++) { 
      s += a[i] - '0' ; 
   } 
   if(s == 9) return 1 ; 
   while(s >= 9) { 
      int x = 0 ; 
      while(s) { 
          x += s % 10 ; 
          s /= 10 ; 
	  } 
	  if(x == 9) return 1  ; 
	  s = x ; 
   } 
   return 0 ; 
} 
int main () { 
   int t ; 
   cin >> t  ;
   while(t--) { 
     string s ; 
     cin >> s ; 
	 if(check(s)) cout << 1 << endl ; 
	 else cout << 0 << endl ;  
   }
}
