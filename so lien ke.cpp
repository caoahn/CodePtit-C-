#include<iostream> 
using namespace std; 
int main() { 
   int t ; 
   cin >> t ; 
   cin.ignore() ; 
   while(t--) { 
     string s ; 
     getline(cin, s) ; 
	 int ok = 0 ; 
     for(int i=0; i < s.size() ; i++) { 
       if( (s[i+1] - s[i] == 1 ) || (s[i] - s[i+1] == 1))  { 
	      ok++ ;
	   }
	 } 
	 if(ok == s.size() -1 ) cout << "YES" << endl ; 
	 else cout << "NO" << endl ; 
   } 
   return 0 ; 
}
