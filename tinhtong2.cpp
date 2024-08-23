#include<bits/stdc++.h> 
using namespace std ;  
int check(string &s) { 
  if(s.size() > 9) return 0 ; 
  long long n = 0 ; 
  for(char x : s) { 
     if(!isdigit(x)) return 0 ; 
     n = n*10 + x-'0' ; 
  } 
  if(n <= 2147483647) return (int)n; 
  return 0 ; 
}
int main() { 
   fstream in ; 
   in.open("DATA.in",ios :: in) ; 
   long long sum = 0 ;
   string s ; 
   while(in >> s) { 
     sum += check(s) ; 
   } 
   cout << sum  ; 
   return 0 ; 
}
