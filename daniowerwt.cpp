#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
  string s ; 
  cin >> s ;  
  int cnt = 1 ; 
  string  res = ""  ;  
  for(int i=0; i < s.size() ; i++) { 
     if(s[i] == s[i+1] && (i < s.size() - 1 )) { 
         ++cnt ; 
	 } 
	 else {  
	     res += s[i] + to_string(cnt)  ; 
        cnt = 1 ; 
	 }
  } 
  cout << res ; 
}
