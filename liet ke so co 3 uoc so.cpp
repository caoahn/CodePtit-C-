#include<bits/stdc++.h> 
using namespace std ; 
int p[1000001] ; 
void sang() { 
   for(int i=0;i<=1000000;i++) { 
     p[i] = 1 ; 
   } 
   p[0] = 1 ; 
   p[1] = 1;  
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
     int n ;
     cin >> n ; 
     for(int i= 2 ; i<= n;i++) { 
       if(p[i]) { 
         if(pow(i,2) <= n) { 
           cout << i*i << " " ; 
		 }
	   }
	 } 
	 cout << endl ; 
   }
}