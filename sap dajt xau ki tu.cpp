#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
    int t ; 
    cin >> t ; 
    cin.ignore() ; 
    while(t--) { 
      string s ; 
      getline(cin,s) ; 
       int a[26] = {0} ; 
      for(int i= 0 ; i < s.size() ; i++) { 
         a[s[i]-'a']++ ;
	  } 
	  
	  int max = *max_element(a,a+26) ;
	  if(    max - (s.size() - max ) >= 2) { 
	     cout << "0" << endl ; 
	  } 
	  else cout << "1" << endl ; 
	}
}
