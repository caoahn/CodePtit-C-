#include<bits/stdc++.h> 
using namespace std;  
struct monhoc{ 
   string ten ; 
   string ma ; 
   int sl ; 
};
bool cmp(monhoc a,monhoc b) { 
  return a.sl > b.sl ; 
}
int main () { 
  fstream in ;  
   vector<string> v ; 
   string s ; 
  in.open("MONHOC.in",ios :: in) ; 
  while(getline(in,s)) { 
    v.push_back(s) ; 
  } 
  int n = stoi(v[0]) ; 
  struct monhoc mh[n] ;  
  int i= 0; 
  int cnt = 1 ; 
  while(cnt < n*3 + 1) { 
      mh[i].ma = v[cnt] ;  
      ++cnt ; 
      mh[i].ten = v[cnt] ; 
	  ++cnt ;  
      mh[i].sl = stoi(v[cnt]) ; 
	  ++cnt ;  
      ++i ; 
  }  
  sort(mh,mh+n,cmp) ; 
  for(int i=0; i < n ; i++) { 
    cout << mh[i].ten<< " "<<mh[i].ma<<" "<<mh[i].sl<< endl ; 
  }   
  return 0 ; 
}
