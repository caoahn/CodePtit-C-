#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ; 
   cin >> t ; 
   cin.ignore() ;  
   while(t--) { 
      string s; 
      getline(cin,s) ; 
      int n = s.size() ; 
	  int cnt = 1 ;  
      for(int i=0; i <n;i++) { 
         if(s[i] == ' ' || s[i] == '\n' || s[i] == '\t')  { 
            ++cnt ; 
		 }
	  } 
	  cout << cnt << endl ; 
   } 
   return 0 ; 
}
