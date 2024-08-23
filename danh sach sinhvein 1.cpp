#include<bits/stdc++.h> 
using namespace std ;   
struct SinhVien { 
    string msv, ten, lop, ns ; 
    float gpa ;  
    int cnt ; 
};  
void check(string &s) { 
   s[0] = toupper(s[0]) ; 
   for(int i=1 ; i < s.size() ; i++) { 
      s[i] = tolower(s[i]) ; 
   }
} 
void chuanhoa(string &s) { 
   stringstream ss(s) ; 
   string tmp ; 
   vector<string> v ; 
   while(ss >> tmp) { 
      check(tmp) ; 
      v.push_back(tmp) ; 
   }  
   s = "" ; 
   for(int i=0; i < v.size() ; i++) { 
      if( i < v.size() - 1) { 
         s += v[i] ; 
         s += " " ; 
	  } 
	  else s +=v[i]; 
   }
}
void nhap(SinhVien ds[], int n) {  
     cin.ignore() ;  
     int k = 1 ; 
  for(int i=0; i < n ; i++) {  
    getline(cin,ds[i].ten) ; 
    getline(cin,ds[i].lop) ; 
    getline(cin,ds[i].ns) ; 
	ds[i].cnt = k++;  
    cin >> ds[i].gpa; 
    cin.ignore() ; 
  }
} 
bool cmp(SinhVien X, SinhVien B) {
    if (X.gpa > B.gpa)return true;
    return false;
}
void sapxep(SinhVien* M, int N) {
    sort(M, M + N, cmp);
}
void in(SinhVien ds[],int n) { 
   for(int i=0;i < n ; i++) {    
      if(ds[i].ns[1] == '/') { 
         ds[i].ns.insert(0,"0") ; 
	  } 
	  if(ds[i].ns[4] =='/') { 
	    ds[i].ns.insert(3,"0") ; 
	  } 
	  string s ; 
	  if(ds[i].cnt < 9) s = "B20DCCN00"  ; 
	  else s = " B20DCCN0" ;  
	  chuanhoa(ds[i].ten) ; 
	  cout << s <<ds[i].cnt << " " << ds[i].ten << " " << ds[i].lop <<" " <<ds[i].ns<<" " <<fixed << setprecision(2) <<ds[i].gpa << endl ; 
   }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N); 
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
