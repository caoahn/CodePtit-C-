#include<bits/stdc++.h> 
using namespace std ; 
class sinhvien{ 
    public: 
       string msv; 
       string ten ; 
       string lop ; 
       string e; 
       sinhvien() { 
          msv = ten = lop = e ="" ; 
	   } 
	    public: 
       friend istream& operator >> (istream&in,sinhvien &a) ; 
       friend ostream& operator << (ostream&out,sinhvien a) ; 
}; 
istream& operator >> (istream&in,sinhvien &a) { 
     getline(in,a.msv) ; 
    getline(in,a.ten) ; 
    getline(in,a.lop) ; 
    getline(in,a.e) ;  
	return in ;  
}
ostream& operator << (ostream&out,sinhvien a) { 
     out << a.msv <<" "<<a.ten<<" "<<a.lop<<" "<<a.e << endl ; 
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
   for(int i=0;i<k;i++) {    
       string s ; 
       getline(cin,s) ; 
       string a="" ; 
       for(int i=0;i<s.size();i++) { 
          a += toupper(s[i]) ; 
	   } 
	   for(int i=0;i<n;i++) { 
	     if(ds[i].msv[5] == a[0]) { 
	         if(a[0] == 'K' || a[0]=='C' || a[0]=='A' || a[0] =='V' ||a[0] =='D') { 
	             { 
	                if(ds[i].lop[0] != 'E') { 
	                   cout << ds[i] ; 
					}
				 }
			 } 
		 }
	   }
   } 
}