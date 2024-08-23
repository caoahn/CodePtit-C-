#include<iostream> 
using namespace std ;  
int giaithua(int n) { 
    long long p = 1 ;  
  for(int i=1;i<=n;i++) { 
    p *= i ; 
  } 
  return p ; 
}
int main() { 
  int n ; 
  cin >> n ; 
  long long sum = 0 ; 
  for(int i=1 ; i <= n ; i++) { 
    sum += giaithua(i) ; 
  } 
  cout << sum <<endl ; 
} 
