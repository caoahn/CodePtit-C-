#include<bits/stdc++.h> 
using namespace std ;  
class SinhVien {  
   public: 
    string ten ; 
    string lop ; 
    string ns ;  
    string msv ; 
    float gpa ; 
    public : 
	friend istream& operator >> (istream&in,SinhVien &a) ;  
	friend ostream& operator << (ostream&out,SinhVien a) ; 
}; 
int k = 1 ; 
istream& operator >> (istream&in,SinhVien &a) { 
   in.ignore() ;  
   if(k < 10) { 
     a.msv = "B20DCCN00" + to_string(k) ; 
   } 
   else a.msv="B20DCCN0" + to_string(k) ; 
   ++k ; 
   getline(in,a.ten) ; 
   getline(in,a.lop) ; 
   getline(in,a.ns) ; 
   cin >> a.gpa ; 
   string tmp ; 
   string res ="" ;  
   vector<string> v ; 
   stringstream ss(a.ten) ; 
   while(ss >> tmp) { 
     tmp[0] = toupper(tmp[0]) ; 
     for(int i=1;i<tmp.size() ;i++) { 
       tmp[i]= tolower(tmp[i]) ; 
	 } 
	 res += tmp ; 
	 res += " " ; 
   } 
   res.pop_back() ; 
   a.ten =res ; 
   return in ;  
} 
ostream&operator << (ostream&out,SinhVien a) { 
   if(a.ns[1] =='/') { 
      a.ns = "0" + a.ns ; 
   } 
   if(a.ns[4] =='/') { 
      a.ns.insert(3,"0") ; 
   } 
   out << a.msv <<" "<<a.ten<<" "<<a.lop<<" "<<a.ns<<"  "<<fixed<<setprecision(2)<<a.gpa << endl ; 
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

