#include<iostream>  
#include<iomanip> 
using namespace std ; 
int main() { 
  int n ; 
  cin >> n ; 
  double s ;
  s = 0;  
  for(int i=1; i <= n ; i++) { 
    s += (double) 1/i ; 
  } 
  cout << fixed << setprecision(4) << s << endl  ;  
  return 0 ; 
}
