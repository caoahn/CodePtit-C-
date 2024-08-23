#include<bits/stdc++.h> ; 
using namespace std ; 
class sophuc { 
   int thuc,ao ; 
   public : 
   sophuc(int a,int b) { 
     thuc = a ; 
     ao =  b ; 
   }
   friend istream& operator >> (istream&in,sophuc &a) ; 
   friend ostream&operator << (ostream&out,sophuc a) ;  
   friend sophuc operator + (sophuc a,sophuc b) ; 
}; 
istream& operator >> (istream&in,sophuc &a) { 
  in >> a.thuc >> a.ao ; 
  return in ; 
} 
ostream&operator << (ostream&out,sophuc a) { 
  out << a.thuc << "+" <<"i"<<a.ao << endl ; 
  return out ; 
} 
sophuc operator + (sophuc a,sophuc b) { 
   sophuc c(1,1) ; 
   c.thuc = a.thuc + b.thuc ; 
   c.ao = a.ao + b.ao ; 
   return c ; 
}
int main() { 
   sophuc a(1,1) ; 
   sophuc b(1,1) ;  
   cin >> a>>b ; 
   cout << a + b  ; 
   return 0 ;  
}
