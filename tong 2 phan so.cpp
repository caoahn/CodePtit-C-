#include<bits/stdc++.h> 
using namespace std ;  
struct PhanSo { 
    long long a, b ; 
}; 
void nhap(PhanSo &p) { 
   cin >> p.a >> p.b ; 
} 
PhanSo tong(PhanSo &p, PhanSo &q) { 
     long long k = __gcd(p.a,p.b) ; 
     long long o = __gcd(q.a,q.b) ; 
     p.a /= k ; 
     p.b /= k ; 
     q.a /= o ; 
     q.b /= o ; 
	 long long bc = (p.b * q.b ) / __gcd(p.b,q.b) ; 
    PhanSo t ;  
    t.a = p.a* (bc / p.b) + q.a*(bc/q.b) ; 
    t.b = bc ; 
    long long x = __gcd(t.a,t.b) ; 
    t.a /= x; 
    t.b /= x ; 
    return t ; 
} 
void in(PhanSo &t) { 
   cout << t.a << "/" << t.b ; 
}
int main() { 
    struct PhanSo p,q ; 
    nhap(p) ; nhap(q) ; 
    PhanSo t = tong(p,q) ; 
	in(t) ; 
	return 0 ;  
}
