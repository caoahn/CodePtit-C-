#include<bits/stdc++.h> 
using namespace std ;  
class SinhVien { 
     string ten ; 
     string lop ; 
     string ns ; 
     float gpa ;   
     public: 
     SinhVien () { 
         ten = lop = ns ="" ; 
	 } 
	 void nhap() { 
	    getline(cin,ten) ; 
	    getline(cin,lop) ; 
	    getline(cin,ns) ; 
	    cin >> gpa ; 
	 } 
	 void xuat() { 
	     if(ns[1] == '/') {  
	          ns = ns.insert(0,"0") ; 
		 } 
		 if(ns[4] == '/') { 
		    ns = ns.insert(3,"0") ; 
		 }
	    cout <<"B20DCCN001 " <<ten << " " << lop << " " << ns <<" " <<fixed << setprecision(2) <<gpa ; 
	 }
};
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
