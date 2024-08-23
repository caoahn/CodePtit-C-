#include<bits/stdc++.h> 
using namespace std; 
class giangvien {   
    public: 
    string ten ; 
    string ma ;
    string mon ; 
    string m1 ; 
    public : 
      friend istream& operator >> (istream&in,giangvien &a); 
      friend ostream& operator << (ostream&out,giangvien a) ; 
};   
int k = 1 ;
void check(string &s) { 
   for(int i=0;i<s.size() ;i++) { 
      s[i]= toupper(s[i]) ; 
   }
}  
 istream& operator >> (istream&in,giangvien &a) { 
     if(k < 10) { 
        a.ma = "GV0" + to_string(k) ; 
	 } 
	 else a.ma ="GV" + to_string(k) ;  
	 ++k ; 
	 getline(in,a.ten) ; 
	 getline(in,a.mon) ;  
	 string tmp ; 
	 string res ="" ; 
	 stringstream ss(a.mon) ; 
	 while(ss >> tmp) { 
	    check(tmp) ; 
	    res += tmp[0] ; 
	 } 
	 a.m1 = res ; 
	 return in ;  
 } 
 ostream& operator << (ostream&out,giangvien a) { 
   out << a.ma <<" "<<a.ten<<" "<<a.m1 << endl ; 
   return out ;
 }
int main () {  
  int n ; 
  cin >> n ;  
  cin.ignore() ; 
  giangvien ds[n] ; 
  for(int i=0;i<n;i++) { 
    cin >> ds[i] ; 
  } 
  int q ; 
  cin >> q ;
  cin.ignore()  ; 
  while(q--) { 
    string s ; 
    getline(cin,s) ; 
    check(s) ; 
    string r ="" ; 
    string token ; 
	stringstream ss(s) ; 
	while(ss >> token) { 
	   r += token[0] ; 
	} 
	cout <<"DANH SACH GIANG VIEN BO MON " << r << ":"<< endl ; 
    for(int i=0;i<n;i++) { 
     if(ds[i].m1 == r) { 
       cout << ds[i] ; 
	 }
	}
  } 
  return 0 ;
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
