#include<bits/stdc++.h> 
using namespace std ;  
void check(string &s) { 
  for(int i=0;i<s.size() ;i++) { 
    s[i] = tolower(s[i]) ; 
  }
}
int main() { 
   fstream in1,in2 ; 
   in1.open("DATA1.in",ios :: in) ; 
   in2.open("DATA2.in",ios :: in) ; 
   string s1 ; 
   string s2 ; 
   vector<string> v1 ; 
   vector<string> v2 ; 
   while(in1 >> s1) { 
      check(s1) ;  
      v1.push_back(s1) ; 
   } 
   while(in2 >> s2) {  
      check(s2) ; 
      v2.push_back(s2) ;
   }  
   set<string> se1,se2,se3 ; 
   for(int i=0;i<v1.size();i++) { 
       se1.insert(v1[i]) ; 
	   se3.insert(v1[i]) ;  
   } 
   for(int i=0 ; i < v2.size();i++) { 
      if(se1.count(v2[i]) != 0 ) { 
         se2.insert(v2[i]) ; 
	  }  
	  se3.insert(v2[i]) ; 
   } 
   for(auto x : se3) cout << x <<" "  ; 
   cout << endl ;  
   for(auto x : se2) cout <<x <<" " ; 
   return 0 ;  
}
