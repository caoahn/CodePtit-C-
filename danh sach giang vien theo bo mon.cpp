#include<bits/stdc++.h> 
using namespace std ; 
class giangvien { 
   public:  
   string ten ; 
   string ma ;  
   string mon ;   
   string m1 ; 
   public: 
   giangvien() { 
      ten = ma = mon = m1="" ; 
   } 
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
   if(k <10) { 
       a.ma = "GV0" + to_string(k) ; 
   } 
   else a.ma ="GV" + to_string(k) ; 
   getline(in,a.ten) ;  
   getline(in,a.mon) ;  
   ++k ;   
   string tp ; 
   stringstream ss(a.mon) ;  
   vector<string> v;  
   while(ss >> tp) {  
       check(tp)  ; 
      v.push_back(tp) ; 
   } 
    for(int i=0;i<v.size() ; i++) { 
       a.m1 += v[i][0]  ; 
	} 
   return in ; 
} 
ostream& operator << (ostream&out,giangvien a) { 
   out << a.ma<<" "<<a.ten<< " "  <<a.m1;
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
   while(q--) { 
      string s ; 
      cin >> s ; 
	  string tmp  ; 
	  string s1 ="" ;   
      stringstream ss(s) ;  
      vector<string> v ; 
      while(ss >> tmp) {  
       check(tmp) ; 
        v.push_back(tmp) ; 
	  } 
	  for(int i=0;i<v.size() ; i++)  { 
	    s1 += v[i][0] ; 
	  }
	  cout <<"DANH SACH GIANG VIEN BO MON " << s1 <<":" <<endl ; 
	  for(int i=0;i < n;i++) { 
	    if(ds[i].m1 == s1) { 
	      cout << ds[i] ; 
		}
	  }
   } 
   return 0 ; 
} 

