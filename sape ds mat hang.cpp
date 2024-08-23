#include<bits/stdc++.h> 
using namespace std ; 
struct hang { 
    string ten, nhom ; 
    float mua,ban,loi ; 
    int ma ; 
};  
void nhap(hang h[],int n) {  
   int k = 1 ; 
   for(int i=0;i<n;i++) { 
     cin.ignore() ; 
     getline(cin,h[i].ten) ; 
     getline(cin,h[i].nhom) ; 
	 h[i].ma = k++ ;  
     cin >> h[i].mua >> h[i].ban ; 
     h[i].loi = h[i].ban - h[i].mua ; 
   }
} 
bool cmp(hang a,hang b) { 
  return a.loi > b.loi ; 
}
void sapxep(hang h[],int n) { 
   sort(h,h+n,cmp) ; 
} 
void in(hang h[],int n) { 
    for(int i=0; i < n ; i++) { 
      cout << h[i].ma <<" " << h[i].ten <<" " << h[i].nhom << " " << fixed << setprecision(2)<<h[i].loi << endl ; 
	}
}
int main() { 
   int n ; 
   cin >> n ; 
   struct hang h[n] ;  
   nhap(h,n) ;  
   sapxep(h,n) ; 
   in(h,n) ; 
}
