#include<bits/stdc++.h> 
using namespace std ;  
struct NhanVien { 
   string ma ; 
   string ten, gt, ns, dc, ms,hd; 
   int d,m,y ; 
};   
int k = 0 ; 
int z = 0 ; 
void nhap(NhanVien &a) { 
    ++k ; 
    if(z ==0) { 
       cin.ignore() ; 
	} 
	++z ; 
    if(k < 10) a.ma= "0000" + to_string(k)  ; 
    else a.ma = "000" + to_string(k) ; 
    getline(cin,a.ten) ; 
    getline(cin,a.gt) ; 
    getline(cin,a.ns) ; 
	getline(cin,a.dc) ;  
    getline(cin,a.ms) ;  
    getline(cin,a.hd) ; 
    a.m = (a.ns[0] -'0' )*10 + (a.ns[1]-'0') ; 
    a.d = (a.ns[3]-'0')*10 + (a.ns[4]-'0') ; 
    a.y = (a.ns[6]-'0') *1000 + (a.ns[7]-'0')*100 + (a.ns[8]-'0')*10 + (a.ns[9]-'0') ; 
}
bool cmp(NhanVien a, NhanVien b) { 
    if(a.y < b.y) return true ; 
    if(a.y == b.y && a.m < b.m ) return true ; 
    if(a.y == b.y && a.m == b.m && a.d < b.d) return true ; 
    return false ; 
} 
void sapxep(NhanVien a[],int n) { 
   sort(a,a+n,cmp) ; 
} 
void inds(NhanVien a[],int n) { 
  for(int i=0; i<n;i++) { 
    cout << a[i].ma <<" " << a[i].ten << " " << a[i].gt <<" " << a[i].ns <<" " << a[i].dc<< " " << a[i].ms <<" " << a[i].hd << endl ; 
  }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
