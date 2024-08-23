#include<iostream>  
#include<string.h>
using namespace std; 
int check(string c) { 
   int l = 0; 
   int r = c.size() - 1; 
   while(l <= r) { 
      if(c[l] != c[r]) { 
        return 0 ; 
	  } 
	  ++l ; 
	  --r; 
   } 
   return 1; 
}  
int main() { 
  int n ; 
  cin >> n ; 
  cin.ignore() ; 
  while(n--) { 
    string c ; 
    getline(cin, c) ; 
     if(check(c)) cout << "YES" << endl ; 
     else cout << "NO" << endl ; 
  } 
  return 0 ; 
}
