#include<bits/stdc++.h> 
using namespace std ; 
class  sinhvien { 
    public: 
       string msv ; 
       string ten ; 
       string lop ; 
       string email; 
    public: 
       friend istream& operator >> (istream&in,sinhvien &a) ; 
       friend ostream& operator << (ostream&out,sinhvien a) ; 
}; 
istream& operator >> (istream&in,sinhvien &a) { 
    getline(in,a.msv) ; 
    getline(in,a.ten) ; 
    getline(in,a.lop) ; 
    getline(in,a.email) ; 
	return in ;  
} 
ostream& operator << (ostream&out,sinhvien a) { 
     out << a.msv <<" "<<a.ten<<" "<<a.lop<<" "<<a.email << endl ; 
     return out ; 
} 
bool cmp(sinhvien a,sinhvien b) { 
  if(a.msv< b.msv) return true ; 
} 
int main() {  
    vector<sinhvien> ds ; 
   sinhvien tmp ; 
  while(cin >> tmp) { 
        ds.push_back(tmp) ; 
  }
   sort(ds.begin(),ds.end(),cmp) ; 
   for(int i=0;i<ds.size();i++) cout << ds[i] ; 
   return 0; 
}
