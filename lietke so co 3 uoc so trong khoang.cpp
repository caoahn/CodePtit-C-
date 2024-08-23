#include<bits/stdc++.h> 
using namespace std ; 
int p[1000001] ; 
void sang() { 
   for(int i=0;i<=1000000;i++) { 
     p[i] = 1 ; 
   } 
   p[0] = 0 ; 
   p[1] = 0;  
   for(int i=2;i<=sqrt(1000000);i++) { 
     if(p[i]) { 
       for(int j=i*i;j <=1000000;j+=i) { 
          p[j] = 0 ;
	   }
	 }
   }
}
int main() { 
   sang() ; 
   int t ; 
   cin >> t ; 
   while(t--) { 
      long long l,r ; 
      cin >> l >> r  ;
      int cnt = 0 ; 
      for(long long i = l ; i<= sqrt(r) ; i++) { 
         if(p[i] == 1 && i*i <= r) { 
            ++cnt ; 
		 }
	  } 
	  cout << cnt << endl ;  ; 
	 } 
   }

