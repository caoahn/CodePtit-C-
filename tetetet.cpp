#include<bits/stdc++.h> 
using namespace std ; 
void check(string &s) { 
  for(int i=0; i < s.size() ; i++) { 
     s[i] = tolower(s[i]) ; 
  }
} 
int main() { 
  string s ; 
  getline(cin,s) ;   
  check(s) ; 
  string tmp ; 
  vector<string> v ; 
  stringstream ss(s) ; 
  while(ss >> tmp) { 
     v.push_back(tmp) ; 
  } 
  cout << v[v.size() - 1] ; 
  for(int i=0;i<v.size()-1 ; i++) { 
     cout << v[i][0] ; 
  } 
  cout << "@ptit.edu.vn"<< endl ; 
}
