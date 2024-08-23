#include<bits/stdc++.h> 
using namespace std; 
int a[100],n,k,ok;   
void in() { 
  for(int i=k ; i>=1;i--) { 
    cout << a[i]<<" " ; 
  } 
  cout << endl ; 
} 
void back(int i) { 
  for(int j=n-k+i ; j >= a[i-1]+1 ; j--) { 
     a[i] = j ;  
     if(i == k) { 
       in() ; 
	 } 
	 else back(i+1) ; 
  }
} 
int main() { 
   cin >> n >> k ; 
   back(1) ; 
}
