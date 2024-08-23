#include<bits/stdc++.h> 
using namespace std ; 
class SinhVien { 
   public:  
      string ten ; 
      string lop ; 
      string ns ;  
      int stt ; 
      string msv; 
      public: 
      float gpa ;
      SinhVien () { 
           ten = lop = ns  ="" ;
           gpa = 0 ; 
	  } 
	  friend istream& operator >>(istream&in,SinhVien &a) ; 
	  friend ostream& operator << (ostream&out,SinhVien a) ; 
	  friend void chuanhoa(SinhVien&a) ;  
};  
int k = 0 ;  
void check1(string&s) { 
    s[0]=toupper(s[0]) ; 
    for(int i=1;i<s.size();i++) { 
       s[i]=tolower(s[i]) ; 
	}
}  
void chuanhoa(SinhVien &a) { 
    string tmp ; 
    string res="" ; 
    stringstream ss(a.ten) ; 
    while(ss >> tmp) { 
        check1(tmp) ; 
		res += tmp ; 
		res += " " ;  
	} 
	res.erase(res.size()-1) ; 
	a.ten = res ; 
}
istream& operator >>(istream&in,SinhVien &a) { 
    k++ ; 
    scanf("\n"); 
    a.msv = "B20DCCN" + string(3 - to_string(k).size(),'0') + to_string(k) ;
    getline(in,a.ten) ;  
    getline(in,a.lop) ; 
    getline(in,a.ns) ;  
    cin >> a.gpa; 
    if(a.ns[1] == '/') { 
        a.ns = "0" + a.ns ; 
	} 
	if(a.ns[4] == '/') { 
	   a.ns = a.ns.insert(3,"0") ; 
	}  
	return in ; 
} 
ostream& operator << (ostream&out,SinhVien a) { 
   chuanhoa(a) ; 
   out << a.msv<<" " <<a.ten<<" "<<a.lop<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa <<endl ; 
   return out ; 
} 
bool cmp(SinhVien a,SinhVien b)  { 
   return a.gpa > b.gpa ; 
} 
void sapxep(SinhVien *ds,int n) { 
   sort(ds,ds+n,cmp) ; 
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
