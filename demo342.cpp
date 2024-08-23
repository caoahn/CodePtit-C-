#include<bits/stdc++.h> 
using namespace std ;  
int check(string &s) {   
   if(s.size() > 9) return 0 ; 
    long long cnt = 0 ;  
   for(int i=0 ; i < s.size() ; i++) { 
      if(!isdigit(s[i])) { 
         return 0 ; 
	  }  
	     cnt = cnt*10 + s[i] -'0' ;   
   } 
   if(cnt <= 2147483647) return (int)cnt ; 
   return 0 ; 
} 
int main() { 
   fstream in ; 
   in.open("DATA.in",ios :: in) ; 
   string tmp ; 
   long long tong = 0 ; 
   while(in >> tmp) { 
     tong += check(tmp) ; 
   } 
   cout << tong << endl ; 
}
