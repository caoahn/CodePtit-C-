#include<bits/stdc++.h> 
using namespace std ;
int n,k,a[100],ok ; 
int check(int a[]) { 
    int dem = 0 ;  
  for(int i=1 ; i <= n ; i++) { 
     dem += a[i] ; 
  } 
  return dem ; 
}
void sinh() { 
   int i = n ; 
   while(i >= 1 && a[i] == 1) { 
       a[i] = 0 ; 
       --i ; 
   } 
   if(i == 0) { 
      ok = 0 ; 
   } 
   else { 
      a[i] = 1 ; 
   }
} 
int main() { 
  cin >> n >> k ; 
  ok = 1 ;  
  while(ok) { 
    if(check(a) == k) { 
      for(int i=1 ; i<= n ; i++) { 
         cout << a[i] <<" " ; 
	  } 
	  cout << endl ; 
	} 
	sinh() ; 
  } 
  return 0 ; 
}
