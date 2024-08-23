#include<bits/stdc++.h> 
using namespace std ;  
void chuanhoa(string &s) { 
   s[0] = toupper(s[0]) ; 
   for(int i=1; i < s.size() ; i++) { 
     s[i]=tolower(s[i]) ; 
   }
} 
void chuanhoa2(string &s) { 
  for(int i=0; i < s.size() ; i++) { 
     s[i] = tolower(s[i]) ; 
  }
}
int main() { 
   	string s ; 
   	int ok = 1;  
   	while(cin >> s) { 
   	     chuanhoa2(s) ; 
   	     if(ok == 1) { 
   	         chuanhoa(s) ;  
   	         ok = 0 ;
			} 
			int n = s.size()  ;  
		 if(s[n-1] == '.' || s[n-1] == '!' || s[n-1] == '?') { 
		      s.erase(s.end() -1 ) ; 
		      cout << s << endl ; 
		      ok = 1  ; 
		 }  
		 else cout << s <<" " ; 
	   }
}
