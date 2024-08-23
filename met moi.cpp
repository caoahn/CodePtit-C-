#include<bits/stdc++.h> 
using namespace std ; 
class sinhvien {  
    public : 
    string msv ; 
    string ten ; 
    string ns ; 
    string lop ; 
    double gpa ; 
    friend istream & operator >> (istream&in,sinhvien &a) ; 
    friend ostream & operator << (ostream&out,sinhvien a) ; 
};  
int k = 1 ;   
void check(string &s) { 
  s[0] = toupper(s[0]) ; 
  for(int i=1 ; i < s.size() ; i++) { 
     s[i] = tolower(s[i]) ; 
  }
}
istream & operator >> (istream&in,sinhvien &a) { 
   if( k < 10) { 
     a.msv = "SV00" + to_string(k) ; 
   } 
   else a.msv = "SV0" + to_string(k) ;  
   ++k ;  
   in.ignore() ; 
   getline(in,a.ten) ; 
   cin >> a.lop >> a.ns>> a.gpa ; 
   string tmp ; 
   stringstream ss(a.ten) ; 
   string res ="" ; 
   while(ss >> tmp) { 
      tmp[0] = toupper(tmp[0]) ; 
      for(int i=1 ; i < tmp.size() ; i++) { 
        tmp[i] = tolower(tmp[i]) ; 
	  }
      res += tmp ; 
      res += " " ; 
   } 
   res.pop_back() ;  
   a.ten =res ; 
   string b = a.ns ; 
   if(b[1] == '/') { 
       b = "0" + b ; 
   } 
   if(b[4] == '/') { 
      b.insert(3,"0") ; 
   } 
   a.ns = b ; 
   return in ; 
} 
ostream & operator << (ostream&out,sinhvien a)  { 
   out << a.msv << " "<< a.ten<<" " << a.lop <<" " <<a.ns<< " " <<fixed << setprecision(2)<<a.gpa << endl ; 
   return out ; 
} 
bool cmp(sinhvien a,sinhvien b) { 
    if(a.gpa > b.gpa) return true ; 
    if(a.gpa == b.gpa && a.msv < b.msv) return true ; 
    return false  ;  
}
int main() { 
   int n ; 
   cin >> n  ;
   class sinhvien ds[n] ; 
   for(int i=0;i<n;i++) {  
     cin >> ds[i] ; 
   } 
   sort(ds,ds+n,cmp) ; 
   for(int i=0;i<n;i++) { 
     cout << ds[i] ; 
   } 
   return 0 ;
}

