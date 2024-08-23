#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
  fstream in1 ; 
  fstream in2 ;  
  set<string> se ; 
  set<string> se1, se2 ;  
  string tmp ; 
  string token ;   
  in2.open("ata2.in",ios :: in) ; 
  while(in2 >> token) { 
    se.insert(token) ; 
    se2.insert(token) ; 
  } 
  for(auto it : se2) { 
    cout << it <<" " ; 
  } 
  cout << endl ;  
}
