#include<bits/stdc++.h> 
using namespace std ;
class sinhvien {  
   public: 
    string ma;
    string ten ; 
    int sl ; 
    public: 
	   friend istream&operator >> (istream&in,sinhvien &a) ; 
	   friend ostream&operator << (ostream&out,sinhvien a) ; 
};  
istream&operator >> (istream&in,sinhvien &a) { 
   in.ignore() ; 
   getline(in,a.ma) ; 
   getline(in,a.ten) ; 
   in >> a.sl ; 
   return in ; 
}  
bool cmp(sinhvien a,sinhvien b) { 
    if(a.sl  > b.sl) return true ; 
    if(a.sl == b.sl && a.ma < b.ma) return true ;  
    return false ; 
}
ostream&operator << (ostream&out,sinhvien a) { 
  out << a.ma <<" " << a.ten<<" " <<a.sl << endl ; 
  return out ;  
}
int main() { 
    int n ; 
    cin >> n ;  
    sinhvien ds[n] ; 
    for(int i=0;i<n;i++) { 
       cin >> ds[i] ; 
	}  
	sort(ds,ds+n,cmp) ;  
	int t ; 
	cin >> t ; 
	while(t--) { 
	int a,b ; 
	cin >> a >> b ;  
	cout <<"DANH SACH DOANH NGHIEP NHAN TU " <<a<<" DEN " << b<<" SINH VIEN:" << endl ; 
	for(int i = 0 ; i < n ; i++) { 
	   if(ds[i].sl <= b && ds[i].sl >= a) { 
	     cout << ds[i] ; 
	   }
	}
  }
} 

