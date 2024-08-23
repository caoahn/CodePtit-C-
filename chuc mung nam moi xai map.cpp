#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
  int t ; 
  cin >> t ; 
  cin.ignore() ;  
  int cnt =0 ; 
  map<string,int> mp ; 
  while(t--) { 
     string x ; 
     getline(cin,x) ;  
     if(mp[x] == 0) ++cnt ; 
     mp[x]++ ; 
  } 
  cout << cnt << endl ; 
}
