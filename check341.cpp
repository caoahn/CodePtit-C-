#include<bits/stdc++.h> 
using namespace std; 
class giangvien {  
    public : 
    string ten  ; 
    string mon ; 
    string ma ;   
    string t1,m1 ; 
    public :  
      friend istream& operator >> (istream&in,giangvien &a)  ; 
      friend ostream& operator << (ostream&out,giangvien a) ; 	
};    
void check(string &s) { 
  for(int i=0;i<s.size() ;i++) { 
    s[i] = tolower(s[i]) ; 
  }
}
int k = 1; 
istream& operator >> (istream&in,giangvien &a) { 
    if(k < 10) { 
        a.ma = "GV0" + to_string(k) ;
	} 
	else a.ma = "GV" + to_string(k) ; 
	++k ;  
   getline(in,a.ten) ; 
   getline(in,a.mon) ; 
   string tmp ; 
   stringstream ss(a.mon) ; 
   string res ="" ; 
   while(ss >> tmp) { 
      res += toupper(tmp[0]) ;  
   } 
  a.m1 = res ;   
  a.t1 = a.ten ; 
  check(a.t1) ; 
   return in ; 
} 
ostream& operator << (ostream&out,giangvien a) { 
   out << a.ma <<" " << a.ten <<" " <<a.m1 << endl ; 
   return out ; 
}
int main() { 
    int t ; 
    cin >> t ;  
    cin.ignore() ; 
    giangvien ds[t] ; 
    for(int i=0;i<t;i++) { 
       cin >> ds[i] ; 
	}
    int q ; 
    cin >> q ; 
    while(q--) { 
      string w ; 
      cin >> w ; 
      string ww = w ; 
      check(ww) ; 
      cout << "DANH SACH GIANG VIEN THEO TU KHOA " << w <<":" << endl ; 
      for(int i=0;i<t;i++) { 
         if(ds[i].t1.find(ww) != -1) { 
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
