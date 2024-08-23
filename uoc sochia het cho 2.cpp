#include<bits/stdc++.h> 
using namespace std;
int main() { 
  int t ; 
  cin >> t ; 
  while(t--) { 
     long long n ; 
     cin >> n ;  
     int cnt = 0 ; 
    for(int i=1; i <= sqrt(n) ; i++) { 
       if( n % i == 0) { 
          if( i % 2 == 0 && n/i % 2 == 0) { 
             if( i == n/i) cnt += 1 ; 
             else cnt += 2 ; 
		  } 
		  if( i % 2 != 0 && n/i % 2 == 0) { 
		     cnt += 1 ; 
		  } 
		  if(i % 2 == 0 && n/i % 2 !=0) { 
		    cnt += 1 ; 
		  }
	   }
	} 
   cout << cnt << endl ; 	
}  
return 0 ; 
}
