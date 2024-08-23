#include<bits/stdc++.h> 
using namespace std ; 
class PhanSo { 
    long long tu,mau ; 
    public: 
       PhanSo(long long a,long long b) { 
          tu = a; 
          mau = b ; 
	   }  
	   public: 
	   friend istream& operator >> (istream &in,PhanSo &x) ; 
	   friend ostream& operator << (ostream &out,PhanSo x) ; 
	   friend PhanSo operator + (PhanSo p,PhanSo q) ; 
	   friend void rutgon(PhanSo&a) ;  
}; 
void rutgon(PhanSo&a) { 
     long long r = __gcd(a.tu,a.mau) ; 
     a.tu /= r ; 
     a.mau /= r; 
}
istream& operator >> (istream &in,PhanSo &x) { 
   in >> x.tu >> x.mau ; 
   return in ; 
} 
ostream& operator << (ostream &out,PhanSo x) { 
    out <<x.tu <<"/" << x.mau << endl ;  
    return out ; 
} 
PhanSo operator + (PhanSo p,PhanSo q) { 
    PhanSo a(1,1) ;  
    a.tu = p.tu * q.mau + q.tu * p.mau;
    a.mau = p.mau*q.mau;
    long long x = __gcd(a.tu, a.mau);
    a.tu /= x; 
	a.mau /= x;
    return a ; 
}
int main() { 
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}

