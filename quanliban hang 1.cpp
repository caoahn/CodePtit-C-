#include<bits/stdc++.h> 
using namespace std ;  
class KhachHang;
class MatHang;
class HoaDon;

map<string, KhachHang> kh;
map<string, MatHang> mh;
class KhachHang { 
    public :  
    string mkh ; 
    string tkh ; 
    string gt ;
    string ns ; 
    string dc ; 
	friend class HoaDon ;  
	 friend istream & operator >> (istream&in,KhachHang &a) ; 
};  
class MatHang { 
   public:  
   string mmh ; 
   string tmh ; 
   string dv; 
   long long mua,ban ;  
   friend class HoaDon ; 
   friend istream& operator >> (istream&in,MatHang &a) ; 
};  
class HoaDon { 
   public : 
   string mhd ; 
   string mkh ; 
   string mmh ; 
   int sl ; 
   friend istream& operator >>(istream&in,HoaDon &a) ; 
   friend ostream& operator << (ostream&out,HoaDon a) ; 
};  
int cnt1 = 1; 
int k=1 ;
istream & operator >> (istream&in,KhachHang &a) { 
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
   scanf("\n") ; 
   getline(in,a.tmh) ; 
   getline(in,a.dv) ; 
   cin >> a.mua >> a.ban ; 
   mh[a.mmh] = a ; 
   return in ; 
}  
int cnt3 = 1 ; 
istream& operator >> (istream&in,HoaDon &a) { 
   if(cnt3 < 10) { 
      a.mhd = "HD00" + to_string(cnt3) ; 
   } 
   else a.mhd = "HD0" + to_string(cnt3) ;   
   ++cnt3 ; 
   in >> a.mkh >> a.mmh >> a.sl ; 
   return in ; 
} 
ostream& operator << (ostream&out,HoaDon a) { 
   	out << a.mhd<<" "<<kh[a.mkh].tkh << " " <<kh[a.mkh].dc<<" "<<mh[a.mmh].tmh<<" "<<mh[a.mmh].dv<<" "<<mh[a.mmh].mua<<" "<<mh[a.mmh].ban<<" "<<a.sl<<" "<<a.sl* mh[a.mmh].ban << endl ; 
   	return out ; 
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
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
} 
//2
//Nguyen Van Nam
//Nam
//12/12/1997
//Mo Lao-Ha Dong-Ha Noi
//Tran Van Binh
//Nam
//11/14/1995
//Phung Khoang-Nam Tu Liem-Ha Noi
//2
//Ao phong tre em
//Cai
//25000
//41000
//Ao khoac nam
//Cai
//240000
//515000
//3
//KH001 MH001 2
//KH001 MH002 3
//KH002 MH002 4
