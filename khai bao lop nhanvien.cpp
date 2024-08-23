#include<bits/stdc++.h> 
using namespace std ; 
class NhanVien { 
    string ten ; 
    string gt ; 
    string ns ; 
    string dc ; 
    string ms ; 
    string hd ;   
    string mnv ; 
    public: 
        NhanVien() { 
            ten = gt = ns = dc = ms = hd = mnv ="" ; 
		}  
		void nhap() { 
		   getline(cin,ten) ; 
		   getline(cin,gt) ; 
		   getline(cin,ns) ; 
		   getline(cin,dc) ; 
		   getline(cin,ms) ; 
		   getline(cin,hd) ; 
		} 
		void xuat() { 
		  cout << "00001" << " " << ten << " " << gt <<" " <<ns << " " << dc<<" " << ms <<" " << hd  ;  
		}
};
int main(){
    NhanVien a;
    //cin >> a;
    a.nhap();
    //cin >> a;
    a.xuat();
    return 0;
}
