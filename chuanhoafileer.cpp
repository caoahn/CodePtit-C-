#include<bits/stdc++.h> 
using namespace std ; 
void check(string &s) { 
   s[0] = toupper(s[0]) ; 
   for(int i=1; i <s.size() ; i++) { 
      s[i] = tolower(s[i]) ; 
   }
} 
int main() { 
   fstream in ; 
    string tmp ;  
   vector<string> v ;  
   in.open("ten.in",ios :: in) ; 
   while(!in.eof()) { 
    getline(in,tmp);  
    if(tmp == "END") { 
      tmp ="" ; 
      in.close() ; 
	}  
	v.push_back(tmp) ; 
}
   in.close() ;  
   vector<string> v1 ; 
   for(int i=0; i < v.size()-2;i++) { 
     v1.push_back(v[i]) ; 
   } 
   vector<string> v2 ;
   for(auto x : v1) { 
      string res = x;  
      string token ; 
      stringstream ss(res) ; 
	  string word="" ;  
      while(ss >> token) { 
         check(token) ; 
         word += token ; 
         word += " " ; 
	  } 
	  word.pop_back() ; 
	  res = word ; 
	  v2.push_back(res) ; 
   }  
   for(auto it : v2) { 
     cout << it << endl ; 
   }
}
