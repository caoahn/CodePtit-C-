#include<bits/stdc++.h> 
using namespace std ; 
struct ptit { 
   long long ma,share,tt ; 
   float diem ; 
};  
long long k = 1 ; 
void nhap(ptit &a) { 
   cin >> a.ma ; 
   cin >> a.share  ; 
   cin >> a.tt ; 
   a.diem = (float) (a.share*70/100) + (float)(a.tt*30/100) ; 
} 
bool cmp(ptit a,ptit b) { 
  if(a.diem > b.diem) return true ; 
  if(a.diem == b.diem && a.ma < b.ma) return true ;  
  return false ; 
}
int main() { 
  int n ; 
  cin >> n ; 
  struct ptit ds[n] ; 
   for(int i=0;i<n;i++) { 
      nhap(ds[i]) ; 
   } 
   sort(ds,ds+n,cmp) ;  
   vector<long long> v ; 
   for(int i=0;i <7;i++) {  
       long long x ; 
         x = ds[i].ma ; 
		 v.push_back(x) ; 	    
   } 
   sort(v.begin(),v.end()) ; 
   for(int i=0;i < v.size() ; i++) cout << v[i] <<" " ; 
   return 0 ; 
} 


