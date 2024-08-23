#include<bits/stdc++.h> 
using namespace std ; 
struct monhoc { 
   string ma ; 
   string ten ; 
   int sl ; 
};  
bool cmp(monhoc a,monhoc b) { 
  return a.sl > b.sl ; 
}
int main() {  
   int n ; 
   vector<monhoc> v1 ;  
   fstream in ; 
   in.open("MONHOC.in",ios :: in) ;   
   while(!in.eof()) { 
    in >> n ;  
    struct monhoc mh[n] ; 
   in.ignore() ; 
   int i = 0;
   while(n--) {   
        getline(in,mh[i].ma) ; 
        getline(in,mh[i].ten) ; 
        in >> mh[i].sl ; 
        in.ignore() ; 
       ++i ; 
   } 
}
   in.close() ;    
   sort(mh,mh+n,cmp) ; 
   for(int i=0;i<n;i++) { 
      cout << mh[i].ma<<" " <<mh[i].ten<<" "<<mh[i].sl << endl ; 
   } 
   return 0 ; 
}
