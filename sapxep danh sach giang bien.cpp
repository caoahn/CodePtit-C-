#include<bits/stdc++.h> 
using namespace std ; 
class giangvien { 
    public: 
	   string ma ;  
       string ten  ; 
       string mon ; 
	   string t1 ; 
	   string m1 ;  
    public: 
      friend istream& operator >> (istream&in,giangvien &a)  ; 
      friend ostream&operator << (ostream&out, giangvien a) ; 
	  friend void chuanhoa(giangvien &a) ;  
}; 
void check(string &s) { 
   s[0] = toupper(s[0]) ; 
   for(int i=1 ; i < s.size() ; i++) { 
      s[i] = toupper(s[i]) ; 
   }
}    
void chuanhoa(giangvien &a) { 
   for(int i=0;i<a.mon.size();i++) { 
      a.mon[i] = toupper(a.mon[i]) ; 
   }
}
int k=1; 
istream& operator >> (istream&in,giangvien &a) { 
     getline(in,a.ten) ; 
     getline(in,a.mon) ;  
     chuanhoa(a) ; 
	 if(k < 10) { 
	    a.ma = "GV0" + to_string(k) ; 
	 } 
	 else a.ma ="GV" + to_string(k) ; 
	 ++k ;   
	 string tmp ; 
	 vector<string> v ; 
	 stringstream ss(a.ten) ; 
	 while(ss >> tmp) {  
	     check(tmp) ; 
	     v.push_back(tmp) ; 
	 } 
	 a.t1 = v[v.size()-1] ; 
	  string tmp1 ; 
	  vector<string> v1 ; 
	  stringstream sss(a.mon) ; 
	  while(sss >> tmp1) { 
	      v1.push_back(tmp1) ; 
	  }
	  for(int i=0; i < v1.size() ; i++) { 
	     a.m1 += v1[i][0] ; 
	  }
	 return in ;  
}  
 ostream&operator << (ostream&out, giangvien a) { 
     out << a.ma <<" "<<a.ten<<" " << a.m1 <<" "<<a.mon<< endl ; 
	 return out;   
 } 
 bool cmp(giangvien a,giangvien b) { 
   if(a.t1 < b.t1) return true ; 
   if(a.t1 == b.t1 && a.ma < b.ma) return true ; 
   return false  ; 
 }
int main() { 
   int n ; 
   cin >> n ; 
   cin.ignore() ; 
   giangvien ds[n] ; 
   for(int i=0;i<n;i++) { 
     cin >> ds[i] ; 
   } 
   sort(ds,ds+n,cmp) ; 
   for(int i=0;i<n;i++) { 
      cout << ds[i] ; 
   } 
} 

