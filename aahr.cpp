#include<bits/stdc++.h> 
using namespace std ; 
int n,k,a[100]  ;  
void lk() { 
  for(int i=1 ; i<= k ;i++) { 
    cout << a[i] <<" " ; 
  } 
  cout << endl ; 
} 
void back(int i) { 
  for(int j = a[i-1]+1 ; j <= n-k+i ; j++) { 
        a[i] = j  ; 
        if(i == k) { 
           lk() ; 
		} 
		else back(i+1) ; 
  }
} 
int main() { 
   cin >> n >> k ; 
   a[0] = 0 ;  
   back(1) ; 
}
