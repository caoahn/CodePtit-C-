#include<bits/stdc++.h> 
using namespace std ;  
struct sinhvien { 
  string ten ; 
  float diem ; 
  string dt ; 
  int kv ;  
  string ma ; 
  string tt ; 
  float tong ; 
};  
void chuanhoa(string &s) { 
   s[0] = toupper(s[0]) ; 
   for(int i=1;i<= s.size() ;i++) { 
      s[i]= tolower(s[i]) ; 
   }
} 
int k=1; 
void nhap(sinhvien &a) { 
  cin.ignore() ; 
  if(k < 10) { 
      a.ma = "TS0" + to_string(k) ; 
  } 
  else a.ma = "TS" + to_string(k) ; 
  ++k ; 
  getline(cin,a.ten) ; 
  cin >> a.diem ; 
  cin.ignore() ; 
  getline(a.dt) ; 
  cin >> a.kv ; 
  if(a.kv == 1 && a.dt != "Kinh" ) { 
     a.tong =  a.diem + 3  ; 
  } 
  else if(a.kv == 1 && a.dt == "Kinh") { 
     a.tong =  a.diem + 1.5 ; 
  } 
  else if(a.kv == 2 && a.dt != "Kinh") { 
     a.tong =  a.diem + 1 + 1.5; 
  } 
  else if(a.kv == 2 && a.dt == "Kinh") { 
    a.tong =  (a.diem + 1) ; 
  } 
  else if(a.kv == 3 && a.dt != "Kinh") { 
    a.tong = (a.diem + 1.5) ; 
  } 
   else a.tong  = a.diem ;
  if(a.tong >= 20.5) { 
     a.tt = "Do" ; 
  } 
  else a.tt = "Truot" ;  
   stringstream ss(a.ten) ; 
   string tmp ; 
   string s1 ;  
   while(ss >> tmp) { 
     tmp[0]=toupper(tmp[0]) ; 
     for(int i=1;i<tmp.size();i++) { 
          tmp[i]= tolower(tmp[i]) ; 
     }
      s1 += tmp ; 
      s1+= " " ; 
   } 
  s1.pop_back();
   a.ten = s1 ;  
} 
bool cmp(sinhvien a,sinhvien b) { 
  if(a.tong > b.tong) return true ; 
  if(a.tong == b.tong && a.ma < b.ma) return true ; 
  return false ; 
}
int main() { 
   int n;
   cin >> n ; 
   struct sinhvien ds[n] ; 
   for(int i=0;i<n;i++) { 
     nhap (ds[i] ) ; 
   } 
   sort(ds,ds+n,cmp) ; 
   for(int i=0;i<n;i++) { 
     cout <<ds[i].ma <<" "<<ds[i].ten<<" "<<setprecision(1) <<fixed <<ds[i].tong<<" "<<ds[i].tt<<endl ; 
   } 
   return 0 ;   
}
