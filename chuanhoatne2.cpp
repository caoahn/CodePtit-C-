#include<bits/stdc++.h>   
using namespace std ;  
void check(string &s) { 
   s[0] = toupper(s[0]) ; 
   for(int i=1 ; i < s.size() ; i++) { 
     s[i] = tolower(s[i]) ; 
   }
}
int main() {  
   string tmp ; 
   fstream in ;  
   vector<string> v1 ;  
   in.open("ten.in",ios :: in) ; 
   while(!in.eof()) {  
     getline(in,tmp) ;  
     if(tmp == "end") {
	    tmp="" ;  
        in.close() ; 
	 }
     v1.push_back(tmp) ; 
   } 
   in.close() ; 
   vector<string> v ; 
   for(int i=0;i<v1.size()-1 ; i++) { 
      v.push_back(v1[i]) ; 
   }
   for(int i=0;i< v.size() ; i++) { 
      string token ; 
      string res = v[i] ; 
      stringstream ss(res) ;  
      string w =""; 
      while(ss >> token) { 
        check(token) ; 
        w += token ; 
        w += " " ; 
	  } 
	  w.pop_back() ; 
	  v[i] = w ; 
   } 
   for(auto x : v) { 
    cout << x << endl ; 
   }
}
