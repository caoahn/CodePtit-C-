#include<bits/stdc++.h> 
using namespace std ; 
class KhachHang ; 
class MatHang ; 
class HoaDon ;  
map<string, KhachHang> kh ; 
map<string, MatHang> mh ;  
class KhachHang { 
    public :  
    string mkh ; 
    string tkh ; 
    string gt ; 
    string ns ; 
    string dc ; 
    friend class HoaDon ;  
	friend istream& operator >> (istream&in,KhachHang &a) ;  
}; 
class MatHang { 
   public : 
   string mmh ; 
   string tmh ; 
   string dv ; 
   long long mua,ban ; 
   long long ln ; 
   friend class HoaDon ; 
   friend istream& operator >> (istream&in,MatHang &a) ;  
}; 
class HoaDon { 
   public : 
   string mhd ; 
   string mkh ; 
   string mmh ; 
   long long sl ; 
   long long ln ;  
   friend istream& operator >> (istream&in,HoaDon &a) ; 
   friend ostream& operator << (ostream&out,HoaDon a) ; 
}; 
int cnt1 = 1 ; 
istream& operator >> (istream&in,KhachHang &a) { 
   if(cnt1 < 10) { 
      a.mkh = "KH00" + to_string(cnt1) ; 
   } 
   else a.mkh = "KH0" + to_string(cnt1) ; 
   ++cnt1 ;  
   scanf("\n") ; 
   getline(in,a.tkh) ; 
   getline(in,a.gt) ; 
   getline(in,a.ns) ; 
   getline(in,a.dc) ; 
   kh[a.mkh] = a ;  
   return in ;  
} 
int cnt2 = 1 ; 
istream& operator >> (istream&in,MatHang &a) { 
   if(cnt2 < 10) { 
      a.mmh = "MH00" + to_string(cnt2) ; 
   } 
   else a.mmh = "MH0" + to_string(cnt2) ; 
   ++cnt2 ; 
   scanf("\n");
   getline(in,a.tmh) ; 
   getline(in,a.dv) ; 
   in >> a.mua>>a.ban ; 
   mh[a.mmh] = a ; 
   return in;
} 
int cnt3 = 1; 
istream& operator >> (istream&in,HoaDon &a) { 
   if(cnt3 < 10) { 
      a.mhd = "HD00" + to_string(cnt3) ; 
   } 
   else a.mhd = "HD0" + to_string(cnt3) ; 
   ++cnt3 ; 
   cin >> a.mkh >> a.mmh>>a.sl ; 
   a.ln =mh[a.mmh].ban * a.sl - mh[a.mmh].mua*a.sl ;  
   return in ; 
} 
ostream& operator << (ostream&out,HoaDon a) { 
   out << a.mhd <<" "<<kh[a.mkh].tkh <<" "<<kh[a.mkh].dc<<" "<<mh[a.mmh].tmh <<" "<<a.sl<<" "<<a.sl*mh[a.mmh].ban <<" "<<a.ln << endl ; 
   return out ; 
} 
bool cmp(HoaDon a,HoaDon b) { 
     return a.ln >= b.ln ; 
} 
void sapxep(HoaDon dshd[],int K) { 
   sort(dshd,dshd + K,cmp) ; 
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
