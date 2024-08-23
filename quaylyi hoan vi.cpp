#include<bits/stdc++.h> 
using namespace std ; 
int n,a[100] , use[100] ={0} ;  
void inkq() { 
  for(int i=1;i <= n ;i++) cout << a[i] ;  
  cout << " " ; 
} 
void check(int i) { 
  for(int j=1 ; j <= n ;j++) { 
     if(use[j] == 0) {  
         a[i] = j ;  
         use[j] = 1; 
       if(i == n ) { 
          inkq() ; 
	   } 
	   else { 
	      check(i+1) ; 
	   } 
	   use[j] = 0 ; 
	 }
  }
} 
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) {  
      cin>> n ; 
       check(1) ; 
  cout << endl ; 
   }
}
