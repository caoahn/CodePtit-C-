#include<bits/stdc++.h> 
using namespace std ;  
class SinhVien { 
    string ten ; 
    string msv ; 
    string lop ; 
    string ns ;
    public :  
    float gpa ; 
      friend istream&operator >> (istream&in,SinhVien &a) ; 
      friend ostream&operator << (ostream&out,SinhVien a) ; 
};  
void check(string &s) { 
  s[0] = toupper(s[0]) ; 
  for(int i=1 ; i<s.size();i++) { 
    s[i]=tolower(s[i]) ; 
  }
} 
int k = 1; 
istream&operator >> (istream&in,SinhVien &a) { 
  a.msv = "SV" + string(3 - to_string(k).size(),'0') + to_string(k) ;
   ++k; 
   scanf("\n") ; 
   getline(in,a.ten) ; 
   getline(in,a.lop) ; 
   getline(in,a.ns) ; 
   in >> a.gpa;  
   vector<string> v ; 
   stringstream ss(a.ten) ; 
   string tmp  ; 
   string res ="" ;   
   while(ss >> tmp) { 
      check(tmp) ;  
       res += tmp ; 
       res += " " ; 
   } 
   res.pop_back() ; 
   a.ten =res ;   
   return in ; 
} 
ostream&operator << (ostream&out,SinhVien a) {  
   if(a.ns[1] == '/')  { 
      a.ns = "0" + a.ns ; 
   } 
   if(a.ns[4] == '/') { 
      a.ns = a.ns.insert(3,"0") ; 
   } 
   out <<a.msv <<" "<<a.ten<<" "<<a.lop<<" "<<a.ns<<" "<<fixed << setprecision(2)<<a.gpa << endl ; 
   return out ; 
} 
bool cmp(SinhVien a,SinhVien b) { 
   return a.gpa > b.gpa ; 
} 
void sapxep(SinhVien ds[],int n) { 
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
