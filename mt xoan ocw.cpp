#include<bits/stdc++.h> 
using namespace std ; 
long long p[1000001] ; 
vector<int> v ; 
void sang() { 
  for(int i=0; i<= 1000000; i++) { 
     p[i] = 1; 
  } 
  p[0] = 0 ; 
  p[1] = 0 ; 
  for(int i=2 ; i <= sqrt(1000000);i++) { 
     if(p[i]) { 
       for(int j=i*i ; j <= 1000000 ; j+= i) { 
          p[j] = 0 ; 
	   }
	 }
  }
} 
void in() { 
   sang() ;  
   for(int i=2 ; i <= 100 ; i++ ) { 
      if(p[i]) { 
        v.push_back(i) ; 
	  }
   }
}
int main() { 
     int n ; 
     cin >> n; 
     in() ;
	 int a[n][n]  ;  
     int  h1 = 0 , h2 = n-1 ;   
     int c1 = 0  , c2 = n-1 ; 
	 int dem = 0 ;  
	 while(h1 <= h2 && c1 <= c2) { 
	    for(int i=c1 ; i <= c2 ; i++ ) { 
	        a[h1][i] = v[dem] ; 
	        ++dem ; 
		} 
		++h1 ; 
		for(int i =  h1 ; i<= h2 ; i++) { 
		   a[i][c2] = v[dem] ; 
		   ++dem ; 
		} 
		--c2 ; 
		for(int i=c2 ; i >= c1 ; i--) { 
		   a[h2][i] = v[dem] ; 
		   ++dem ;  
		} 
		--h2 ; 
		if(h1 <= h2) { 
		  for(int i=h2; i >= h1 ; i--) { 
		     a[i][c1] = v[dem] ; 
		     ++dem ; 
		  } 
		  ++c1 ; 
		}
	 } 
     for(int i=0 ; i<n;i++) { 
       for(int j=0; j <n ; j++) { 
         cout << a[i][j] <<" " ; 
	   } 
	   cout << endl ; 
	 }
}
