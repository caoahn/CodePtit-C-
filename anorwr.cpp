#include<bits/stdc++.h>
using namespace std ; 
int main() { 
     int  n ;
     cin >> n ; 
     int a[n] ; 
     for(int i=0;i<n;i++) cin >> a[i] ; 
     sort(a,a+n) ; 
	 int x = 5 ;  
    auto it = lower_bound(a,a+n,x) ; 
    cout << *it << endl ; 
}
