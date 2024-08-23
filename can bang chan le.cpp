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
   int temp = 0 ; 
    for(int i= pow(10,n-1) ; i < pow(10,n) ; i++) { 
        if(chanle(i)) { 
           cout << i << " " ; 
           ++temp ; 
		} 
		if(temp == 10) { 
		    cout << endl  ; 
		    temp = 0 ; 
		} 
	  }
   return 0 ; 
}
