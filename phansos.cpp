#include<bits/stdc++.h> 
using namespace std ;  
class PhanSo {  
   public: 
   long long tu, mau ; 
   public : 
     PhanSo(long long a,long long b) { 
         tu =  a; 
         mau = b ; 
	 } 
	 friend istream& operator >> (istream&in,PhanSo &a) ; 
	 friend ostream& operator << (ostream&out,PhanSo a) ; 
	 friend PhanSo operator + (PhanSo a,PhanSo b) ; 
}; 
void rutgon(PhanSo &a) { 
   long long k = __gcd(a.tu,a.mau) ; 
   a.tu /= k ; 
   a.mau /= k ; 
}   
istream& operator >> (istream&in,PhanSo &a) { 
   in>> a.tu >> a.mau ; 
   return in ; 
}
ostream& operator << (ostream&out,PhanSo a) { 
  out << a.tu << "/" << a.mau << endl ; 
  return out ; 
} 
PhanSo operator + (PhanSo a,PhanSo b) { 
   PhanSo c(1,1) ;   
   c.tu = a.tu*b.mau + b.tu*a.mau ; 
   c.mau = a.mau*b.mau ; 
   long long x1 = __gcd(c.tu,c.mau) ; 
   c.tu /= x1  ; 
   c.mau /= x1 ; 
   return c;  
}
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
