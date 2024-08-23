#include<bits/stdc++.h> 
using namespace std ;  
int ucln(int a,int b) { 
  while(a != b) { 
    if(a > b ) a = a- b  ; 
    else b = b - a ; 
  } 
  return a ; 
} 
int nt(int n) { 
    for(int i=2; i <= sqrt(n);i++) { 
      if(n % i == 0) return 0 ; 
	} 
	return n > 1  ; 
}
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
      int x ; 
      cin >> x ;  
      int cnt=0 ; 
      for(int i=1; i <= x ;i++) { 
        if(ucln(i,x) == 1) { 
           ++cnt ; 
		}
	  } 
	  if(nt(cnt)) cout << "1" << endl ; 
	  else cout << "0" << endl ; 
   } 
   return 0 ; 	
}
