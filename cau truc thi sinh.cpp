#include<bits/stdc++.h> 
using namespace std ; 
struct ThiSinh { 
    string ten ; 
    string ns ; 
    float mon1,mon2,mon3 ; 
};  
void nhap(ThiSinh &a) { 
    getline(cin,a.ten) ; 
    getline(cin,a.ns) ;  
    cin >> a.mon1 >> a.mon2 >> a.mon3 ;  
} 
void in(ThiSinh a) { 
  cout << a.ten << " " << a.ns << " " << fixed << setprecision(1) << a.mon1 + a.mon2 + a.mon3 << endl ; 
}
int main() { 
  struct  ThiSinh A; 
   nhap(A) ; 
   in(A);
   return 0 ; 
}
