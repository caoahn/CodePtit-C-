#include<bits/stdc++.h> 
using namespace std;  
class NhanVien { 
     private: 
        string mnv ; 
        string ten ; 
        string gt ; 
        string dc ; 
        string thue ; 
        string hd ;  
        public: 
         string ns ;  
         int n,t,nam ; 
          NhanVien() { 
		       mnv = ten = gt = ns = dc = thue = hd = "" ;  
		  } 
		  friend istream& operator >> (istream&in,NhanVien &a)  ;
		  friend ostream& operator << (ostream&out,NhanVien a) ; 
		   
};  
int cnt = 0 , k = 1 ;  
 istream& operator >> (istream&in,NhanVien &a) {  
    if(cnt == 0) { 
        in.ignore() ; 
        ++cnt; 
	}  
    if(k < 10) { 
        a.mnv = "0000" + to_string(k) ; 
	} 
	else a.mnv = "000"+ to_string(k) ; 
	++k ;  
    getline(in,a.ten) ; 
    getline(in,a.gt) ; 
    getline(in,a.ns) ; 
    getline(in,a.dc) ; 
    getline(in,a.thue) ; 
    getline(in,a.hd) ;  
	a.t = (a.ns[0] -'0')*10 + a.ns[1]-'0' ; 
	a.n = (a.ns[3]-'0')*10 + a.ns[4]-'0' ; 
	a.nam = (a.ns[6]-'0')*1000 + (a.ns[7]-'0')*100+(a.ns[8]-'0')*10+(a.ns[9]-'0')*1 ;  
    return in ; 
 } 
  ostream& operator << (ostream&out,NhanVien a) { 
     out << a.mnv << " " <<a.ten<<" "<<a.gt<<" "<<a.ns<<" "<<a.dc<<" "<<a.thue<<" "<<a.hd<<endl ; 
     return out;
  } 
  bool cmp(NhanVien a,NhanVien b) { 
      if(a.nam < b.nam) return true ; 
      if(a.nam == b.nam && a.t < b.t ) return true ; 
      if(a.nam == b.nam && a.t == b.t && a.n < b.n) return true ; 
      return false ; 
  } 
  void sapxep(NhanVien ds[],int n) { 
     sort(ds,ds+n,cmp) ;
  }
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
} 


