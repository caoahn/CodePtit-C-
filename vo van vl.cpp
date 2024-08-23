#include<bits/stdc++.h> 
using namespace std ; 
long long p[10000001] ;  
void sang() { 
   for(int i=0;i<=10000000 ; i++) { 
     p[i] = 1; 
   } 
   p[0] = 0 ; 
   p[1] = 0 ; 
   for(int i=2 ; i <= sqrt(10000000) ; i++) { 
      if(p[i]) { 
        for(int j=i*i ; j <=10000000;j+= i ) { 
           p[j] = 0 ; 
		}
	  }
   }
} 
int check(int n) {  
     int last = n % 10 ; 
     while(n) { 
        if( n % 10 > last) { 
          return 0 ; 
		} 
		n /= 10 ; 
	 } 
	 return 1 ; 
} 
int main () { 
   int n ; 
   cin >> n ;  
   sang() ; 
   int cnt = 0 ; 
   for(int i=0 ; i <= n ; i++) { 
      if(p[i] && check(p[i])) {  
          cout << i <<" " ; 
          ++cnt ;  
	  }
   } 
   cout << endl ;  
   cout << cnt ; 
}
