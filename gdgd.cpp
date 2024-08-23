#include<bits/stdc++.h> 
using namespace std ; 
class sinhvien { 
    public: 
      string msv;  
      string ten ; 
      string lop ; 
      string e ; 
      string ma ; 
      friend istream& operator >> (istream&in,sinhvien &a) ; 
      friend ostream& operator << (ostream&out,sinhvien a) ; 
}; 
istream& operator >> (istream&in,sinhvien &a)  { 
    getline(in,a.msv) ; 
    getline(in,a.ten) ; 
    getline(in,a.lop) ; 
    getline(in,a.e) ; 
	a.ma = a.lop[3]+a.lop 
	return in ; 	 
} 
ostream& operator << (ostream&out,sinhvien a) { 
    out << a.msv<<" "<<a.ten<<" " <<a.lop<<" "<<a.e<< endl ; 
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
   int k ; 
   cin >> k ; 
   cin.ignore() ; 
   string s[k] ; 
   for(int i=0;i<k;i++) { 
       getline(cin,s[i]) ; 
   } 
   for(int i=0;i<k;i++) { 
      cout <<"DANH SACH SINH VIEN NGHANH " << s[i]<<":" << endl ; 
      for(int j=0;j<n;j++) {
      	if(s[i]== ds[j].)
	  }
   }
}
