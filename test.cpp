#include<bits/stdc++.h> 
using namespace std ; 
int a[100] ;   
int chanle(int x) { 
     int k = 0 ; 
     int c = 0 ; 
     int l = 0 ; 
     while( x!=0) { 
        a[k] = x % 10 ; 
        ++k ; 
        x /= 10; 
	 }
     for(int i=0; i < k;i++) { 
      if(a[i] % 2 == 0) { 
        ++c;
	  } 
	  else ++l ; 
	 } 
  if(c == l) return 1 ; 
  else return 0 ; 
}
int main() { 
    int n ; 
    cin >> n ; 
    if(chanle(n)) cout << "YES" ; 
    else cout << "NO" ; 
}
