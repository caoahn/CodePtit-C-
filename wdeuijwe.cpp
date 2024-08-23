#include<bits/stdc++.h> 
using namespace std ; 
long long uc(long long a,long long b) { 
  while(a != b) { 
    if(a > b) a = a - b ; 
    else b = b- a ; 
  } 
  return a ; 
} 
long long bc(long long a,long long b) { 
   long long bcc = a*b / uc(a,b) ; 
   return bcc ; 
} 
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
     long long a,b ; 
     cin >> a >> b ; 
     cout << bc(a,b) << " " << uc(a,b) << endl ; 
   } 
   return 0 ; 
}

