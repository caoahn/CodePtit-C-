#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ; 
   cin >> t ; 
   cin.ignore() ; 
   unordered_map<string,int> um ; 
   bool check = 1 ; 
   string x,y ; 
   vector<string> vs ; 
   while(t--) 
   {  
      if(check) { 
         getline(cin,x) ; 
         vs.push_back(x) ; 
         check = 0 ; 
	  } 
	  else { 
	     getline(cin,y) ; 
	     if(y == "") check=  1 ; 
	     else ++um[x] ; 
	  }
   } 
   for(string i : vs) { 
     if(um[i]) { 
        cout << i <<": " << um[i] << endl ; 
        um[i] = 1 ; 
	 }
   } 
   return 0 ; 
}
