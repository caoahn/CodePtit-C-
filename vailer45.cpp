#include<bits/stdc++.h> 
using namespace std ; 
int check(string &s) { 
     if(s.size() > 9) return 0 ; 
   long long n = 0 ; 
   for(int i=0; i < s.size();i++) { 
      if(!isdigit(s[i])) return 0 ; 
      n = n*10 + s[i] - '0' ; 
   } 
    return (int)n ;
} 
int main() { 
   fstream in ; 
   in.open("DATA.in",ios :: in) ; 
   string s ; 
   long long sum = 0 ;  
   while(in >> s) { 
      sum += check(s) ; 
   } 
   cout << sum << endl ; 
   in.close() ; 
   return 0 ;
}
