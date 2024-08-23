#include<bits/stdc++.h> 
using namespace std ;  
class SinhVien {  
    private: 
     string msv ; 
     string ten ; 
     string lop ; 
     string ns ; 
     float gpa ; 
     public: 
         SinhVien()  { 
             msv= ten = lop = ns ="" ; 
             gpa = 0 ; 
		 }
         friend istream& operator >> (istream&in,SinhVien &a) ; 
         friend ostream& operator << (ostream&out,SinhVien a) ; 
}; 
 istream& operator >> (istream&in,SinhVien &a) {  
     a.msv = "B20DCCN001" ; 
     getline(in,a.ten) ; 
     getline(in,a.lop) ; 
     getline(in,a.ns) ; 
     in >> a.gpa ; 
	 if(a.ns[1]='/') { 
	    a.ns = "0" + a.ns ; 
	 } 
	 if(a.ns[4] =='/') { 
	     a.ns = a.ns.insert(3,"0") ; 
	 }  
	 return in ;  
} 
 ostream& operator << (ostream&out,SinhVien a) { 
      
     out << a.msv <<" " << a.ten<<" "<<a.lop<<" " <<a.ns<<" "<< fixed << setprecision(2)<<a.gpa << endl ;  
     return out ; 
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
