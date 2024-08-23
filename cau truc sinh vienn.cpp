#include<bits/stdc++.h> 
using namespace std ; 
struct SinhVien { 
    string msv ; 
    string ten ; 
    string lop ;  
    string ns ; 
    float gpa ; 
};  
void nhap(SinhVien &a) { 
  getline(cin,a.ten) ; 
  getline(cin,a.lop)  ; 
  getline(cin,a.ns) ; 
  cin >> a.gpa ; 
} 
void in(SinhVien a) { 
    if(a.ns[1] =='/') { 
        a.ns.insert(0,"0") ; 
	} 
	if(a.ns[4] == '/') { 
	   a.ns.insert(3,"0");
	} 
	cout  << "B20DCCN001 " << a.ten << " " << a.lop <<" " <<a.ns <<" " <<fixed << setprecision(2) << a.gpa ; 
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
