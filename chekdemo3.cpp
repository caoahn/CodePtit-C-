#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
  string s; 
  getline(cin,s) ; 
  string tmp ; 
  vector<string> v1 ; 
  stringstream ss(s) ; 
  while(getline(ss,tmp,'.')) { 
     v1.push_back(tmp) ; 
  } 
  for(int i=v1.size()-1 ; i>=0; i--) { 
    cout<<v1[i] ; 
    if(i != 0) cout <<"." ; 
  }
}
