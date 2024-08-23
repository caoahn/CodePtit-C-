#include<bits/stdc++.h> 
using namespace std ; 
class gamethu {  
    public : 
    string un ; 
    string pass ; 
	string ten ; 
	string tin ;  
    string tout ; 
	int g1,p1,g2,p2, tg ;   
	friend istream &operator >> (istream&in,gamethu &a) ; 
	friend ostream& operator << (ostream&out,gamethu a) ;   
};  
istream &operator >> (istream&in,gamethu &a) { 
   in >> a.un >> a.pass  ; 
   in.ignore() ;
   getline(in,a.ten) ; 
   getline(in,a.tin) ; 
   getline(in,a.tout) ;  
   string  s1 = a.tin ; 
   string  s2 = a.tout ; 
   for(int i=0; i < 2 ; i++) { 
       a.g1 = a.g1*10 + s1[i]-'0' ;  
       a.g2 = a.g2*10 + s2[i] -'0' ; 
   } 
   for(int i=3 ; i < 5; i++) { 
      a.p1 = a.p1*10 + s1[i]-'0' ;  
      a.p2 = a.p2*10 + s2[i] -'0' ; 
   } 
   a.tg = (a.g2 - a.g1)*60 + (a.p2 - a.p1) ; 
   return in ;   
} 
ostream& operator << (ostream&out,gamethu a) { 
    out << a.un << " " << a.pass <<" " <<a.ten<< endl ; 
    return out  ; 
} 
bool cmp(gamethu a,gamethu b) { 
  if(a.tg > b.tg) return true ; 
  if(b.tg == a.tg && a.un > b.un) return true ; 
  return false ;
}
int main() { 
  int n  ; 
  cin >> n ; 
  class gamethu ds[n] ; 
  for(int i=0;i<n;i++) { 
    cin >> ds[i] ; 
  } 
  sort(ds,ds+n,cmp) ; 
  for(int i=0; i <n;i++) { 
     cout << ds[i] ; 	
  }
}
