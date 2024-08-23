#include<bits/stdc++.h> 
using namespace std ; 
class phanso { 
    int tu,mau ; 
	public: 
	  void nhap() { 
	     cin >> tu >> mau ;  
	  }  
	  void in() { 
	    cout <<tu <<"/" << mau ; 
	  } 
	  void rutgon(phanso a) { 
	      int l = __gcd(a.tu,a.mau) ; 
	      a.tu /= l ; 
	      a.mau /= l ; 
	  }  

      int gettu(phanso) { 
         return tu  ; 
	  } 
	  int getmau(phanso) { 
	     return mau ; 
	  }
	 void tong(phanso a,phanso b) {  
         int tu1 = gettu(a) ; 
         int tu2= gettu(b) ; 
         int mau1 = getmau(a) ; 
         int mau2= getmau(b) ; 
	     int k = __gcd(mau1,mau2) ; 
	     int bc = mau1*mau2 / k ; 
	     phanso c ; 
	     c.tu = tu1*bc/mau1 + tu2*bc/mau2 ; 
	     c.mau = bc ; 
	     rutgon(c) ;  
	     cout << c.tu <<"/" << c.mau ; 
	  }
};   

int main() { 
   phanso p,q; 
   p.nhap() ; 
   q.nhap()  ;  
   tong(p,q) ; 
   p.in() ; 
}
