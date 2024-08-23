#include<bits/stdc++.h> 
using namespace std ;  
long long check(string a) { 
   long long s = 0 ; 
   for(int i=0; i < a.size() ; i++) { 
      if(a[i] == '5') a[i] = '6' ; 
      s = s*10 + a[i] -'0' ; 
   } 
   return s ; 
} 
long long check2(string a) { 
  long long s = 0 ; 
  for(int i = 0;i<a.size();i++) { 
     if(a[i] =='6') a[i] = '5' ; 
	 s = s*10 + a[i] -'0' ;  
  }
  return s  ; 
}
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
      string x,y  ;
      cin >> x >> y ; 
	  cout << check2(x) + check2(y) << " " << check(x) + check(y) << endl ;  
   } 
   return 0 ;
}
