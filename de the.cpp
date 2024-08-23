#include<bits/stdc++.h> 
using namespace std;  
int main() { 
  int t ; 
  cin >> t; 
  map<string,int> mp ;  
  cin.ignore() ; 
  while(t--) { 
      string s ; 
      getline(cin,s) ; 
      mp[s]++ ; 
  } 
  cout << mp.size() << endl ; 
 } 

