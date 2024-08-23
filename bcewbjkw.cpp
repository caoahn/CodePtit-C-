#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
  string s ; 
  getline(cin,s) ; 
  stringstream ss(s) ; 
  string tmp ; 
  vector<string> v ;  
  while(getline(ss,tmp,'.')) { 
     v.push_back(tmp) ; 
  } 
  for(auto x : v) cout << x <<" " ; 
}
