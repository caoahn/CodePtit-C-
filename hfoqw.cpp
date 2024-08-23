#include<bits/stdc++.h> 
using namespace std ; 
int n,k,a[100],u[100]={0}  ;  
void lk() { 
  for(int i=1 ; i<= n ;i++) { 
    cout << a[i] <<" " ; 
  } 
  cout << endl ; 
} 
void back(int i) { 
     for(int j=1 ; j<= n ;j++) { 
        if(u[j] == 0) { 
           a[i] = j ; 
		   u[j] = 1 ;   
           if(i == n) { 
              lk() ; 
		   } 
		   else { 
		       back(i+1) ; 
		   } 
		   u[j] =0; 
		}
	 }
} 
int main() { 
   cin >>n ; 
   back(1) ; 
}
