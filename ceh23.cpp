#include<bits/stdc++.h> 
using namespace std ;
class sinhvien { 
   public: 
   string msv ; 
   string ten ;
   string lop ; 
   string e ;
   public : 
    friend istream&operator >>(istream&in,sinhvien &a) ; 
    friend ostream&operator <<(ostream&out,sinhvien a) ; 
};  
int k=1 ; 
istream&operator >>(istream&in,sinhvien &a) {  
   getline(in,a.msv) ; 
   getline(in,a.ten) ; 
   getline(in,a.lop)  ; 
   getline(in,a.e) ; 
   return in ;  
} 
ostream&operator <<(ostream&out,sinhvien a) { 
   out << a.msv << " "<<a.ten<<" "<<a.lop<<" "<<a.e<<endl ; 
   return out ; 
}
int main() {  
  int n ; 
  cin >> n ;  
  cin.ignore() ; 
  sinhvien ds[n] ; 
  for(int i=0;i<n;i++) { 
    cin >> ds[i] ; 
  }  
  int q ; 
  cin >> q ;  
  cin.ignore() ; 
  while(q--) { 
    string s ; 
    getline(cin,s) ; 
	cout <<"DANH SACH SINH VIEN LOP " << s <<":"<< endl ; 
	for(int i=0;i<n;i++) { 
	  if(ds[i].lop == s) { 
	    cout << ds[i] ; 
	  }
	} 
  } 
  return 0 ;  
} 
//4
//B16DCCN011
//Nguyen Trong Duc Anh
//D16CNPM1
//sv1@stu.ptit.edu.vn
//B15DCCN215
//To Ngoc Hieu
//D15CNPM3
//sv2@stu.ptit.edu.vn
//B15DCKT150
//Nguyen Ngoc Son
//D15CQKT02-B
//sv3@stu.ptit.edu.vn
//B15DCKT199
//Nguyen Trong Tung
//D15CQKT02-B
//sv4@stu.ptit.edu.vn
//1
//D15CQKT02-B
