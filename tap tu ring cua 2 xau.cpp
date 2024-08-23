#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   string s,t ; 
   getline(cin,s) ; 
   getline(cin,t) ; 
   set<string> se1,se2 ; 
   stringstream ss(s) ; 
   string word ; 
   while(ss >> word) { 
      se1.insert(word) ; 
   } 
   stringstream sss(t) ; 
   string token ; 
   while(sss >> token) { 
     se2.insert(token) ; 
   } 
   for(auto it : se1) { 
      if(se2.find(it) == se2.end()) { 
           cout << it <<" " ; 
	  }
   } 
   cout << endl ; 
}
