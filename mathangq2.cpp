#include<bits/stdc++.h> 
using namespace std ;  
struct monhoc { 
   string ma ; 
   string ten ; 
   int sl ; 
}; 
bool cmp (monhoc a,monhoc b) { 
   return a.ten < b.ten; 
}
int main() { 
  int n ; 
  ifstream in ; 
  in.open("MONHOC.in") ; 
  struct monhoc mh ; 
  vector<monhoc> v   ; 
  while(!in.eof()) {  
     in >> n ; 
     in.ignore() ;   
     while(n--) { 
     getline(in,mh.ma) ; 
     getline(in,mh.ten) ; 
     in >> mh.sl ;  
    in.ignore() ; 
     v.push_back(mh) ; 
}
  } 
  in.close(); 
  sort(v.begin(),v.end(),cmp) ; 
   for(auto it : v) { 
      cout << it.ma <<" " << it.ten <<" "<<it.sl << endl   ; 
   } 
   return 0 ; 
}
