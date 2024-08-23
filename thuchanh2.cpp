#include<bits/stdc++.h> 
using namespace std; 
struct pp { 
   string ngay ; 
   string ten ; 
   string sdt ; 
}; 
bool cmp(pp a,pp b) { 
   return a.ngay > b.ngay ; 
}
int main() { 
   fstream in ;  
   vector<string> v1 ; 
   string tmp ; 
   in.open("SOTAY.txt",ios :: in) ; 
   while(getline(in,tmp)) { 
      v1.push_back(tmp) ; 
   } 
   in.close() ;  
    int n = v1.size() - 1;   
   struct pp ds[100] ; 
    int i = 0; 
    int cnt = 0 ; 
    while(cnt < n+1) { 
        ds[i].ngay = v1[cnt] ; 
        ++cnt ; 
        ds[i].ten = v1[cnt] ; 
        ++cnt ; 
        ds[i].sdt = v1[cnt] ; 
        ++cnt ; 
        ++i ; 
	} 
	sort(ds,ds+i,cmp) ;  
	fstream out ; 
	out.open("DIENTHOAI.txt",ios :: out) ; 
	for(int j=0; j < i ; j++) { 
	   out << ds[j].ngay <<" " << ds[j].ten<<" "<<ds[j].sdt<< endl ; 
	}
}
