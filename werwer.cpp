#include<iostream>
#include<cmath>
using namespace std;
long long n;
bool nto(long long x) {
 if(x < 2) return false;
 for(int i = 2; i <= sqrt(x); i++)
  if(x%i==0)
   return false;
 return true;
}
//1234 -> 4, 123, 3 < 4
bool tang(long long x) {
 long long t = x % 10;
 x/=10;
 while(x > 0) {
  if(t <= x%10)
   return false;
  t = x % 10;
  x/=10;

 }

 return true;
}

bool giam(long long x) {
 long long t = x % 10;
 x/=10;
 while(x > 0) {
  if(t >= x%10)
   return false;
  t = x % 10;
  x/=10;

 }

 return true;
}

void tanggiam() { 
 cin >> n;
 int dem = 0;
 for(long long i = pow(10, n-1); i < pow(10, n); i++) {
  if(nto(i) && ( tang(i) || giam(i))) {
   dem++;
  }
 }
 cout << dem;
}
int main() { 
 int t ; 
 cin >> t ; 
 while(t--) { 
 tanggiam(); 
 cout << endl ; 
} 
} 

