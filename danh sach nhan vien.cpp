#include<bits/stdc++.h> 
using namespace std ;  
struct NhanVien{ 
    string mnv, ten, gt , ns , dc , ki ,thue; 
};  
int z = 0 ; 
void nhap(struct NhanVien &a) {  
 if(z == 0)  cin.ignore()  ;  
   ++z ; 
   getline(cin,a.ten) ; 
   getline(cin,a.gt) ; 
   getline(cin,a.ns) ; 
   getline(cin,a.dc) ; 
   getline(cin,a.thue) ; 
   getline(cin,a.ki) ; 
} 
 void inds(struct NhanVien ds[],int N) {  
 string s ; 
    for(int i=0 ; i < N; i++)  {  
       if(  i < 9) { 
           s = "0000" ; 
	   } 
	   else s = "000" ; 
      cout << s << i+1 << " " << ds[i].ten << " " << ds[i].gt <<" " << ds[i].ns <<" " << ds[i].dc<< " " << ds[i].thue <<" " << ds[i].ki << endl ;  
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i ; 
    cin >> N ;  
    for(int i=0; i < N ; i++)  {  
       nhap(ds[i]) ; 
    } 
     inds(ds,N);
    return 0;
}

