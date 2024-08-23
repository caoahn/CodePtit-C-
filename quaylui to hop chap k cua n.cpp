#include<bits/stdc++.h> 
using namespace std ;
int n,k,a[100]  ;  
// liet ke to hop chap k cua n
void inkq() { 
  for(int i=1;i<=k;i++) cout << a[i] ;  
  cout << endl ; 
} 
void quaylui(int i) { 
  for(int j=a[i-1]+1 ; j<= n-k+i ; j++) { 
    a[i]= j ; 
    if(i == k)  { 
      inkq() ; 
	} 
	else quaylui(i+1) ; 
  }
} 
int main() { 
  cin >>  n >> k; 
  quaylui(1) ;
} 
