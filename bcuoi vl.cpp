#include<bits/stdc++.h> 
using namespace std ; 
int n; 
int a[100] ;  
void lkkq() { 
  for(int i=1; i<= n;i++) { 
    cout << a[i] << " " ; 
  } 
  cout << endl ; 
} 
int tryy(int i) { 
    for(int j=0 ; j<= 1 ; j++) { 
        a[i] = j ; 
        if(i == n) { 
           lkkq() ; 
		} 
		else tryy(i+1) ; 
	}
} 
int main() { 
   cin >> n  ;
   tryy(1) ;        
}
