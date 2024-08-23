#include<bits/stdc++.h> 
using namespace std ;  
struct NhanVien{ 
    string mnv, ten, gt , ns , dc , ki ,thue; 
}; 
void nhap(NhanVien &a) { 
   getline(cin,a.ten) ; 
   getline(cin,a.gt) ; 
   getline(cin,a.ns) ; 
   getline(cin,a.dc) ; 
   getline(cin,a.thue) ; 
   getline(cin,a.ki) ; 
} 
void in(NhanVien a) { 
    cout << "00001 " << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.thue <<" " << a.ki ; 
}
int main() { 
   struct NhanVien a ; 
   nhap(a)  ; 
   in(a) ; 
   return 0 ; 
}
