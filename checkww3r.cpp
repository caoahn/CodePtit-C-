#include<bits/stdc++.h> 
using namespace std ; 
long long nt(long long n) { 
   for(int i=2;i<=sqrt(n);i++) { 
     if(n % i == 0) return 0 ; 
   } 
   return n > 1 ; 
}
int a[100] ; 
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
int b[100] ;  
long long check2(long long z) { 
     int  x= 0 ; 
     while(z !=0) { 
        b[x] = z % 10 ;
		++x;  
        z /= 10 ; 
	 } 
	 int oke = 1; 
	 for(int i=0; i < x ;i++) { 
	      if(b[i] >= b[i+1]) { 
	          oke = 0 ; 
	          break ; 
		  }
	 } 
	if (oke) return 1 ; 
	else return 0 ;  
}
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
       int n ; 
       cin >> n  ; 
	   int cnt = 0 ;  
       long long l = pow(10,n-1) ; 
       long long r = pow(10,n) ; 
       for(long long i=l; i<r;i++) { 
           if(nt(i)) { 
              if(check2(i) == 1 ) { 
                 cout << i << " " ; 
			  }
		   }
	   } 
	   cout << endl ; 
   } 
   return 0 ; 
}
