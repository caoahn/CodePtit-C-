#include<iostream> 
#include<string.h> 
using namespace std ; 
int main() { 
   int n ;  
  cin >> n ; 
   cin.ignore() ; 
  while(n--) { 
    string c ; 
    getline(cin, c) ; 
     int ok = 1 ; 
     for(int i=0 ; i < c.length();i++) { 
       if(c[i] != '8' && c[i] != '6' && c[i] != '0')  { 
         ok = 0 ; 
         break ; 
	   }
	 } 
	if(ok) cout << "YES" << endl  ; 
	else cout << "NO" << endl ; 
  } 
  return 0 ;
}
