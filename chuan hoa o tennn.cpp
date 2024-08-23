#include<bits/stdc++.h> 
using namespace std ;  
void chuanhoa(string &s) { 
     s[0] = toupper(s[0])  ; 
     for(int i=1 ; i < s.size() ; i++){ 
        s[i] = tolower(s[i]) ; 
	 } 
}
int main() { 
   int t ; 
   cin >> t ; 
   cin.ignore() ; 
   while(t--) { 
      int k ; 
      cin >> k ; 
      cin.ignore() ; 
      string s ; 
      getline(cin,s) ; 
      vector<string> v ; 
      stringstream ss(s)  ; 
      string tmp ; 
      while(ss >> tmp) { 
          chuanhoa(tmp) ; 
          v.push_back(tmp) ; 
	  } 
	  if(k == 1) { 
	      cout << v[v.size() -1] <<" " ; 
	      for(int i=0; i < v.size() - 1 ; i++ ) { 
	         cout << v[i] ; 
	           if( i != v.size() -2 ) cout << " " ; 
		  } 
	  } 
	  else { 
	     for(int i=1 ; i < v.size() ; i++) { 
	       cout << v[i] ; 
	       if(i != v.size()-1) cout <<" " ; 
		 } 
		 cout << " " << v[0] ; 
	  } 
	  cout << endl ; 
   } 
   return 0 ; 
}
