#include<bits/stdc++.h> 
using namespace std ; 
int p[1000001] ; 
void sang() { 
   for(int i=0; i <= 1000000 ;i++) { 
       p[i] = 1;  
   } 
   p[0] = 1 ; 
   p[1] = 1 ; 
   for(int i=2; i <= 1000;i++) { 
      if(p[i]) { 
         for(int j=i*i ; j<= 1000000; j+= i) { 
             p[j] = 0 ; 
		 }
	  }
   }
} 
long long check(long long n) { 
    long long y = n ;  
     int socuoi1 = y % 10 ; 
        y /= 10 ; 
    int oke = 1 ; 
    while(y !=0 ) { 
         int kesocuoi1 = y % 10 ; 
         y /= 10 ; 
         if(socuoi1 <= kesocuoi1) { 
            oke = 0 ; 
            break ; 
		 } 
		 else socuoi1 = kesocuoi1 ; 
	} 
	if(oke) return 1 ; 
	else return 0 ; 
}
long long check2(long long n) { 
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
       for(long long i=l; i<r;i++) { 
           if(p[i]) { 
              if(check(i) == 1 || check2(i) == 1) { 
                 ++cnt ; 
			  }
		   }
	   } 
	   cout << cnt << endl ; 
   } 
   return 0 ; 
}

