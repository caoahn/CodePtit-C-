#include<bits/stdc++.h> 
using namespace std ; 
#include<bits/stdc++.h> 
using namespace std ; 
int n,k, a[100]  ; 
int use[100] = {0} ;  
void inkq() { 
   for(int i=1 ; i<= n ; i++) { 
      cout << a[i] <<" "; 
   }  
   cout << endl ; 
}  
void back(int i) { 
   for(int j=1; j<= n ; j++) { 
     if(use[j] == 0) { 
         a[i] = j ; 
         use[j] = 1;   
         if(i == n) { 
           inkq() ; 
		 } 
		 else { 
		    back(i+1) ; 
		 } 
     use[j] = 0 ; 
	 }
   }
}
 int main() { 
  cin >> n; 
  back(1) ; 
  return 0 ; 
}
