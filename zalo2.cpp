#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
  fstream in1 ; 
  fstream in2 ;  
  set<string> se ; 
  set<string> se1, se2 ;  
  string tmp ; 
  string token ;  
  in1.open("ata.in",ios :: in) ; 
  while(in1 >> tmp) { 
       se.insert(tmp) ; 
	   se1.insert(tmp) ;  
  } 
  in1.close() ; 
  in2.open("ata1.in",ios :: in) ; 
  while(in2 >> token) { 
    se.insert(token) ; 
    se2.insert(token) ; 
  } 
  in2.close() ; 
  for(auto it : se) { 
    cout << it <<" " ; 
  } 
  cout << endl ; 
  for(auto it : se1) { 
     if(se2.count(it) != 0) { 
       cout << it <<" "  ; 
	 }
  }  
}
