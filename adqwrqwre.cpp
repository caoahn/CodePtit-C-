#include<bits/stdc++.h> 
using namespace std ; 
class giangvien { 
   public:  
   string ten ; 
   string ma ;  
   string mon ;   
   string m1 ; 
   public: 
    friend istream& operator >> (istream&in,giangvien &a) ; 
    friend ostream& operator << (ostream&out,giangvien a) ; 
};  
int k = 1; 
void check(string &s) { 
  for(int i=0;i < s.size() ; i++) { 
     s[i] = toupper(s[i]) ; 
  }
}   
istream& operator >> (istream&in,giangvien &a) { 
   a.ma = "GV" + string(2-to_string(k).size(),'0') + to_string(k) ; 
   getline(in,a.ten) ;  
   getline(in,a.mon) ;  
   ++k ;   
   string tp ; 
   stringstream sss(a.mon) ;  
   while(sss >> tp) {  
       check(tp)  ; 
       a.m1 += toupper(tp[0]); 
   } 
   return in ; 
} 
ostream& operator << (ostream&out,giangvien a) { 
   out << a.ma<<" "<<a.ten<<" " <<a.m1 << endl; 
   return out; 
}
int main() { 
   int n ; 
   cin >> n ;  
   cin.ignore() ; 
   giangvien ds[n] ; 
   for(int i=0;i<n;i++) { 
      cin >> ds[i] ; 
   } 
   int q ; 
   cin >> q ; 
   cin.ignore() ; 
   while(q--) { 
      string s ; 
        getline(cin,s) ; 
	  string tmp  ; 
	  string s1 ="" ;   
      stringstream ss(s) ;  
      while(ss >> tmp) {  
       check(tmp) ; 
        s1 +=toupper(tmp[0]) ; 
	  } 
	  cout <<"DANH SACH GIANG VIEN BO MON " << s1 <<":" <<endl ;  
	  for(int i=0;i<n;i++) { 
	    if(ds[i].m1 == s1) { 
	       cout << ds[i] ; 
		}
	  }
}
} 
//3
//Nguyen Manh Son
//Cong nghe phan mem
//Vu Hoai Nam
//Khoa hoc may tinh
//Dang Minh Tuan
//An toan thong tin
//1
//Cong nghe phan mem

