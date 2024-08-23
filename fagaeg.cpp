#include<bits/stdc++.h> 
using namespace std ; 
class sinhvien { 
     public: 
       string msv ; 
       string ten ; 
       string lop ; 
       string email; 
       int khoa ; 
    public: 
       friend istream& operator >> (istream&in,sinhvien &a) ; 
       friend ostream& operator << (ostream&out,sinhvien a) ; 
}; 
istream& operator >> (istream&in,sinhvien &a) { 
    getline(in,a.msv) ; 
    getline(in,a.ten) ; 
    getline(in,a.lop) ; 
    getline(in,a.email) ; 
    	a.khoa = (a.lop[1] -'0' )*10 +( a.lop[2]-'0') + 2000 ;  
	return in ;  
} 
ostream& operator << (ostream&out,sinhvien a) { 
     out << a.msv <<" "<<a.ten<<" "<<a.lop<<" "<<a.email << endl ; 
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
   int s[k] ; 
   for(int i=0; i < k ; i++){
   	 cin >> s[i] ;  
   } 
   for(int i=0; i<k ; i++) { 
     cout << "DANH SACH SINH VIEN KHOA "<< s[i]<<":" << endl ;
     for(int j=0;j<n;j++) { 
        if(s[i]== ds[j].khoa) { 
          cout << ds[j] ; 
		}
	 }
   } 
   return 0 ; 
}


