#include<bits/stdc++.h> 
using namespace std ;  
class sophuc { 
   int thuc,ao ; 
   public : 
   friend istream& operator >> (istream&in,sophuc &a) ; 
   friend ostream& operator << (ostream&out,sophuc a) ; 
   friend sophuc operator + (sophuc a,sophuc b) ;  
};  
istream& operator >> (istream&in,sophuc &a) { 
    in >> a.thuc >> a.ao ; 
    return in ; 
} 
ostream& operator << (ostream&out,sophuc a) { 
   if(a.ao < 0) { 
   out <<a.thuc <<a.ao <<"i" << endl ; 
} 
else if(a.ao > 0) { 
   out <<a.thuc<<"+"<<a.ao<<"i" << endl ; 
} 
else out <<a.thuc << endl ; 
   return out ; 
} 
sophuc operator + (sophuc a,sophuc b) { 
  sophuc c; 
  c.thuc = a.thuc + b.thuc ; 
  c.ao = a.ao + b.ao ; 
  return c ; 
}
int main() { 
  sophuc a,b ; 
  cin >> a >> b ; 
  cout << a+b  ; 
  return 0 ; 
}
