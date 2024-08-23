#include<bits/stdc++.h> 
using namespace std ; 
long long p[1000001] ;  
void sang() { 
   for(int i=0 ; i <= 1000000; i++) { 
      p[i] = 1 ; 
   } 
   p[0] = p[1] = 0 ; 
   for(int i=2 ; i<= 1000 ; i++) { 
      if(p[i]) { 
        for(int j=i*i ; j<= 1000001 ; j+=i) { 
              p[j]=0 ; 
		}
	  }
   }
}  
long long f[1000001] ; 
int main() { 
     sang() ; 
     f[0] = 0 ; 
     f[1] = 0 ;  
     int dem = 0 ; 
     for(int i=2 ; i<= 1000000 ; i++) { 
       if(p[i]) ++dem ; 
       f[i] = dem ; 
	 }
     int t ; 
	 cin >> t ; 
	 while(t--) { 
	   int l,r ; 
	   cin >> l >> r ; 
	   if(l == 0) { 
	      cout << f[r] << endl ; 
	   } 
	   else cout << f[r] - f[l-1] << endl ; 
	 } 
}

