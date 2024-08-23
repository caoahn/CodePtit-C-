#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   string s ; 
   cin >> s  ; 
   for(int i=0 ; i < s.size();i++) { 
      if(s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i]== 'e' || s[i] == 'I' || s[i] == 'i' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i]== 'u' || s[i] == 'Y' || s[i] == 'y') { 
           continue ; 
	  } 
	  char c=tolower(s[i]) ;  
	  cout <<"." << c ; 
   }
}
