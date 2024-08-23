#include<bits/stdc++.h> 
using namespace std ;  
class KhachHang {   
   public: 
    string m1 ; 
    string ten1 ; 
    string gt ; 
    string ns ; 
    string dc;   
      public : 
    friend class HoaDon ;  
    friend istream& operator >> (istream&in,KhachHang &a) ; 
    
}; 
class MatHang {  
     public: 
     string m2 ;  
     string ten ; 
     string dv ; 
     int mua ;
	 int ban ;  
     int ln ;  
	 public :   
     friend class HoaDon ; 
     friend istream& operator >> (istream&in,MatHang &x) ; 
      void check1(int a) { 
        a = ban ; 
	 } 
	  void check2(int b) { 
	    b = ln ; 
	 }
}; 
class HoaDon { 
     public:  
     string mhd ; 
     string mkh ; 
     string mmh ; 
     int sl ;   
     int tt ; 
     int loi ; 
     int ban1 ; 
     int ln1 ; 
     public : 
     long long ln ;  
     friend istream& operator >> (istream&in,HoaDon &b) ; 
     friend ostream& operator << (ostream&out,HoaDon b) ; 
}; 
int k=1; 
int cnt = 1; 
istream& operator >> (istream&in,KhachHang &a) { 
     if(cnt == 1) { 
       in.ignore() ; 
       cnt = 0 ; 
	 }
     if( k <10) { 
        a.m1= "KH00" + to_string(k) ; 
	 } 
	 else if(k < 100)  { 
	    a.m1 = "KH0" + to_string(k) ; 
	 } 
	 else a.m1 ="KH" + to_string(k) ; 
	 ++k ;  
     getline(in,a.ten1) ; 
     getline(in,a.gt) ; 
     getline(in,a.ns) ; 
     getline(in,a.dc) ; 
	 return in ;  
} 
int cnt2 = 1 ; 
int k2 = 1 ; 
istream& operator >> (istream&in,MatHang &x) { 
     in.ignore() ; 
   if(k2 < 10) { 
      x.m2 = "MH00" + to_string(k2) ; 
   } 
   else if(k2 < 100) x.m2 = "MH0" + to_string(k2) ; 
   else x.m2 = "MH" + to_string(k) ;  
   ++k ; 
   getline(in,x.ten) ;  
   getline(in,x.dv) ; 
   cin >> x.mua >> x.ban ;  
   x.ln = abs(x.mua - x.ban) ;  
   return in ;  
}  
int k3 = 1 ; 
istream& operator >> (istream&in,HoaDon &b) { 
   in.ignore() ; 
   if(k3 < 10) { 
      b.mhd = "HD00" + to_string(k3) ; 
   } 
   else if(k3 < 100) b.mhd = "HD0" + to_string(k3) ; 
   else b.mhd = "HD" + to_string(k3) ;  
   geltine(in,b.mkh) ; 
   getline(in,b.mmh) ; 
   cin >> b.sl ;   
   check1(ban1) ; 
     check2(ln1) ;
   return in ; 
} 
ostream& operator << (ostream&out,HoaDon b) {  
   b.tt = b.sl*b.ban1;  
   b.loi = b.sl*b.ln1; 
   out << b.mhd <<" " <<b.ten1<<" "<<b.dc<<" "<<b.ten<<" "<<b.gt<<" "<<b.sl<<" "<<b.tt << " "<<b.loi<<endl ; 
} 
bool cmp (HoaDon a,HoaDon b) { 
    return a.loi > b.loi ; 
} 
void sapxep(HoaDon dshd[],int k) { 
   sort(dshd,dshd+k,cmp) ; 
}
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}
