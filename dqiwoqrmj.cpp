#include<bits/stdc++.h> 
using namespace std ; 
int main(){   
    long long n , m ,k;
    cin >> n >> m >> k;
    long long x = 1;
   for(int x=1 ; x <= m ; x++) { 
      x  *= n ; 
      x %= (int)pow(10,k) ; 
   }
    cout << x;
}
