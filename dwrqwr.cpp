#include<bits/stdc++.h> 
using namespace std ; 
int b[100] ;  
long long check(long long n) { 
    long long x = n ;  
     int socuoi = x % 10 ; 
        x /= 10 ; 
    int ok= 1 ; 
    while(x !=0 ) { 
         int kesocuoi = x % 10 ; 
         x /= 10 ; 
         if(socuoi >= kesocuoi) { 
            ok = 0 ; 
            break ; 
		 } 
		 else socuoi = kesocuoi ; 
	} 
	if(ok) return 1 ; 
	else return 0 ; 
}
int nt(int n) { 
 for(int i=2; i<= sqrt(n) ;i++) { 
    if(n % i == 0) return 0 ;
 } 
 return n > 1 ; 
} 
int main() { 
     for(int i=10; i<100;i++) { 
     if( check(i)) { 
        cout << i << " " ; 
	 }
	 } 
	 return 0 ; 
}
