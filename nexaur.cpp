#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
     string s ; 
     cin >> s ; 
     for(int i=0 ; i<s.size() ; i++) { 
        int j = i ; 
        while(j < s.size() && s[j] == s[i]) { 
           ++j ; 
		} 
		cout << s[i] << j - i ;  
		i = j ; 
	 } 
	 return 0 ; 
}
