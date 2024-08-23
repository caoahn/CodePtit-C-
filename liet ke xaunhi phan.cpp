#include<bits/stdc++.h> 
using namespace std ; 
int n,x[100] ;  
void in() { 
  for(int i=0 ; i<n;i++) { 
   cout << x[i] ;  
  } 
  cout <<" " ;  
}
void tryy(int i) { 
  for(int j=0 ; j <= 1 ;j++) { 
    x[i]= j ; 
    if(i == n) { 
     in() ;  
	} 
	else tryy(i+1) ; 
  }
} 
int main() { 
  int t ; 
  cin >> t ; 
  while(t--) {
    cin >> n ; 
    tryy(1) ;  
	cout << endl ;  
  }
}
