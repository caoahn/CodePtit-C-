#include<bits/stdC++.h> 
using namespace std ; 
struct nv { 
    string mnv ; 
    string ten ; 
    long long lcb ; 
    long long ngay ;
    string cv ;  
    long long sum ; 
    long long pc ;  
    long long luong ; 
    long long thuong ; 
};   
long long check(string s) { 
  if(s == "GD") return 250000; 
  if(s == "PGD") return 200000 ; 
  if(s =="TP") return 180000 ; 
  return 150000 ; 
}
int k = 1 ; 
int main() { 
    struct nv a ; 
    a.mnv = "NV01" ; 
    getline(cin,a.ten) ; 
    cin >> a.lcb >> a.ngay >> a.cv ; 
    a.luong = a.lcb * a.ngay ; 
    if(a.ngay >= 25) { 
         a.thuong = 0.2*a.luong ; 
	} 
    else if(a.ngay >= 22) { 
	     a.thuong = 0.1*a.luong ; 
	} 
	else a.thuong = 0 ; 
	a.pc = check(a.cv) ; 
	a.sum  = a.pc + a.thuong + a.luong ; 
	cout << a.mnv<<" "<<a.ten<<" "<<a.luong<<" "<<a.thuong<<" "<<a.pc<<" "<<a.sum<<endl; 
} 
//Bui Thi Trang
//45000
//23
//PGD
