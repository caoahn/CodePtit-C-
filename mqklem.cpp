#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   fstream in ; 
   in.open("u.in",ios :: in) ; 
   string tmp ; 
   vector<string> v ;  
   while(getline(in,tmp)) { 
      if(tmp.find("END") != -1) { 
         break ; 
	  } 
	  else v.push_back(tmp) ; 
   } 
   for(auto x : v ) cout << x << endl ; 
}
