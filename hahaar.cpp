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
void check(string &s) { 
  s[0] = toupper(s[0]) ; 
  for(int i=1;i<s.size();i++) { 
    s[i] = tolower(s[i]) ; 
  }
}
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
	 string tmp ; 
	 string res ="" ; 
	 stringstream ss(a.ten) ; 
	 while(ss >> tmp) { 
	   check(tmp) ; 
	   res += tmp ; 
	   res += " " ; 
	 } 
	 res.pop_back() ; 
	 a.ten =res ;   
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
//NguyEn hoa BiNH
//D20CQCN04-B
//2/2/2002
//2
