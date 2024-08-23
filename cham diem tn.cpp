#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   char a[15] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A','B','D','C','C','A','B','D'} ; 
   char b[15] = {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'} ; 
   int t ; 
   cin >> t ; 
   while(t--) { 
     int n ; 
     cin >> n  ; 
     char c[15] ; 
     for(int i=0;i<15;i++) { 
        char x ; 
        cin >> x ; 
        c[i] = x ; 
	 } 
	 float sum = 0 ;  
	if(n == 101) { 
	   for(int i=0;i<15;i++) { 
	     if(a[i] == c[i]) { 
	         sum += (float) 10/15 ; 
		 }
	   }
	} 
	else for(int i=0;i<15;i++) { 
	  if(b[i] == c[i]) { 
	     sum+= (float) 10/15 ; 
	  }
	} 
	cout << fixed << setprecision(2) << sum << endl ; 
   } 
   return 0 ;
}
