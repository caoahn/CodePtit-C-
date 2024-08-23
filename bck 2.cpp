#include<bits/stdc++.h> 
using namespace std ; 
int n,a[100] ,k,use[100]={0};  
void in() { 
  for(int i=1 ; i<= n ;i++) { 
    cout <<a[i] <<" " ; 
  } 
  cout << endl ; 
} 
void tryy(int i) { 
  for(int j = 1 ; j<= n ; j++) { 
    if(use[j] == 0) { 
        a[i] = j ; 
        use[j] = 1 ;
        if(i == n) { 
           in() ; 
		} 
		else { 
		  tryy(i+1) ; 
		} 
		use[j] = 0 ; 
	}
  }
}
int main() { 
   cin >> n  ;  
   tryy(1) ; 
}
