#include<bits/stdc++.h> 
using namespace std ; 
long long p[1000001] ; 
void sang() { 
   for(long long i=0; i <= 1000000 ;i++) { 
       p[i] = 1;  
   } 
   p[0] = 1 ; 
   p[1] = 1 ; 
   for(long long i=2; i <= 1000;i++) { 
      if(p[i]) { 
         for(long long j=i*i ; j<= 1000000;j+= i) { 
             p[j] = 0 ; 
		 }
	  }
   }
} 
long long a[100] ; 
long long check(long long n) { 
     int k = 0 ; 
     while( n!= 0) { 
        a[k] = n % 10 ; 
        ++k ; 
        n /= 10 ; 
	 } 
	 int ok = 1 ;  
	 for(int i=0;i<k;i++) { 
	    if(a[i] <= a[i+1]) { 
	      ok = 0 ; 
	      break ;
		}
	 } 
   if(ok) return 1 ; 
   else return 0 ; 
} 
long long check2(long long n) { 
    int x = n ;  
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
int main() { 
   sang() ; 
   int t ; 
   cin >> t ; 
   while(t--) { 
       int n ; 
       cin >> n  ; 
	   int cnt = 0 ;  
       long long l = pow(10,n-1) ; 
       long long r = pow(10,n) ; 
       for(long long i= pow(10,n-1); i< pow(10,n);i++) { 	
          if(p[i] && (check(i) || check2(i)) ){ 
             ++cnt ; 
		  }
		   } 
		cout << cnt << endl ; 
	   } 
	   return 0 ; 
   } 
