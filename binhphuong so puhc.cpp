#include<bits/stdc++.h> 
using namespace std ; 
struct SoPhuc { 
   int ao,thuc ; 
}; 
SoPhuc tong(SoPhuc A,SoPhuc B) { 
  SoPhuc C ; 
  C.ao = A.ao + B.ao ; 
  C.thuc = A.thuc + B.thuc ; 
  return C; 
} 
SoPhuc nhan(SoPhuc A,SoPhuc B) { 
  SoPhuc C ; 
  C.ao = A.thuc*B.ao + A.ao*B.thuc ;  
  C.thuc = A.thuc*B.thuc + A.ao*B.ao*(-1) ; 
  return C; 
} 
SoPhuc binh_phuong_tong(SoPhuc A,SoPhuc B) { 
    SoPhuc C= tong(A,B) ; 
    C = nhan(C,C) ; 
    return C;
} 
void hien_thi(SoPhuc C) { 
   cout << C.thuc ; 
   if(C.ao < 0) cout <<" - " << C.ao*(-1) <<"i" ; 
   else cout <<" + " << C.ao <<"i" ; 
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}
