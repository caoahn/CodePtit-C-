#include<bits/stdc++.h> 
using namespace std ; 
class giangvien { 	
   public : 
      string ten ;
      string ma ; 
      string mon ; 
      string t1,m1,t2  ; 
      friend istream& operator >> (istream&in,giangvien &a) ; 
      friend ostream& operator << (ostream&out,giangvien a) ; 
};    
void check(string &s) {  
   for(int i=0;i < s.size() ; i++) { 
     s[i] = toupper(s[i]) ; 
   }
}
int k=1 ; 
istream& operator >> (istream&in,giangvien &a) { 
    if(k < 10) { 
       a.ma = "GV0" + to_string(k) ; 
	}  
	else a.ma = "GV" + to_string(k) ;  
	++k ; 
    getline(in,a.ten) ; 
    getline(in,a.mon) ;  
    a.t2 = a.ten ; 
	string token ; 
	string s1 ="" ;  
	stringstream ss(a.ten) ; 
	while(ss >> token) { 
	    check(token) ; 
	   s1 += token ; 
	   s1 += " " ; 
	} 
	s1.pop_back() ; 
	a.ten = s1 ; 
	string tmp ; 
	stringstream sss(a.mon) ; 
	while(sss >> tmp) { 
	   check(tmp) ; 
	   a.m1 += tmp[0] ; 
	}
    return in ; 
}
ostream& operator << (ostream&out,giangvien a) { 
  out << a.ma<<" "<<a.t2<<" "<<a.m1 << endl ; 
  return out ;  
}
int main() { 
  int n ; 
  cin >> n ; 
  cin.ignore() ; 
  giangvien ds[n] ; 
  for(int i=0;i<n;i++) { 
    cin >> ds[i] ; 
  } 
  int q  ; 
  cin >> q; 
  cin.ignore() ; 
  while(q--) { 
     string tk ; 
     getline(cin,tk) ; 
     cout << "DANH SACH GIANG VIEN THEO TU KHOA "<<tk<<":" << endl ; 
     check(tk) ; 
     for(int i=0;i<n;i++) {
        if(ds[i].ten.find(tk) != -1) { 
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
//aN
