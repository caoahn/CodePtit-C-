#include<bits/stdc++.h> 
using namespace std  ; 
struct PhanSo { 
   long long a,b ;  
};   
void nhap(PhanSo &p) { 
   cin >> p.a >> p.b ; 
}
void rutgon(PhanSo &p) { 
   long long k = __gcd(p.a,p.b) ; 
    p.a = p.a / k ; 
    p.b = p.b / k  ; 
} 
void in(PhanSo p) { 
   cout << p.a <<"/" << p.b ; 
}
int main() { 
   struct PhanSo p ;  
   nhap(p) ; 
   rutgon(p) ; 
   in(p) ; 
   return 0 ; 
}
