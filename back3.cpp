#include<bits/stdc++.h> 
using namespace std ; 
int n,a[100] ,k;  
void in() { 
  for(int i=1 ; i<= k ;i++) { 
    cout <<a[i] <<" " ; 
  } 
  cout << endl ; 
} 
void tryy(int i) { 
  for(int j=a[i-1]+1 ; j <= n-k+i ; j++) { 
      a[i] = j ; 
      if(i == k) { 
        in() ; 
	  } 
	  else tryy(i+1) ; 
  }
}
int main() { 
   cin >> n >> k ;  
   tryy(1) ; 
}
