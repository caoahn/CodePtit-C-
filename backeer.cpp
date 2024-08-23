#include<bits/stdc++.h> 
using namespace std ; 
int n,k, a[100] ; 
void inkq() { 
   for(int i=1 ; i<= k ; i++) { 
      cout << a[i] <<" "; 
   }  
   cout << endl ; 
} 
void back(int i) { 
  for(int j = a[i-1]+1 ; j<= n-k+i ; j++) { 
     a[i] = j ; 
     if(i==n) { 
        inkq() ; 
	 } 
	 else back(i+1) ; 
  }
}
int main() { 
  cin >> n >> k; 
  back(1) ; 
  return 0 ; 
}
