#include<bits/stdc++.h> 
using namespace std ;  
int check(string s) { 
      for(int i=0 ; i< 4 ; i++) { 
         if(s[i]-'0' >= s[i+1] -'0' ) return 0 ; 
	  } 
	  return 1 ; 
} 
int check2(string s) { 
    for(int i=0; i < 4 ; i++) { 
       if(s[i] != s[i+1] ) return 0 ; 
	} 
	return 1 ; 
} 
int check3(string s) { 
     for(int i=0; i < 5 ; i++) { 
       if(s[0] == s[1] && s[1] == s[2] && s[3] == s[4]) return 1 ; 
	 }
	return 0 ; 
} 
int check4(string s) { 
   for(int i=0; i < 4 ; i++) { 
       if(s[i]- '0' != 6 && s[i]-'0' != 8 ) { 
          return 0 ; 
	   }
   } 
   return 1 ; 
}
int main() { 
   int t ; 
   cin >> t ; 
   cin.ignore() ; 
   while(t--) { 
     string s ; 
     getline(cin,s) ; 
     string a = s.substr(5,6) ; 
    a.erase(3,1) ; 
	if(check(a) || check2(a) || check3(a) || check4(a)) { 
	    cout << "YES" << endl ; 
	} 
	else cout << "NO" << endl ; 
   } 
   return 0 ; 
}
