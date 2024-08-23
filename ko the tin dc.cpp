#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   string s ; 
   cin >> s;  
   multimap<char,int> mp1 ;  
   map<char,int> mp2 ; 
   int cnt = 1 ; 
   string token ="" ; 
    for(int i=1 ; i<= s.size() ;i++)  { 
       if( i < s.size() && s[i] == s[i-1]) { 
            ++cnt;  
	   } 
	   else  { 
	      token += s[i-1] + to_string(cnt) ; 
	      cnt = 1 ; 
	   }
	}
   cout << token << endl  ; 
}
