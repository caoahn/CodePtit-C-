#include<bits/stdc++.h> 
using namespace std ;  
void chuanhoa(string &s) { 
   s[0] = toupper(s[0]) ; 
   for(int i=1; i < s.size() ; i++) { 
      s[i]=tolower(s[i]) ; 
   }
}
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
      int k ; 
      cin >> k ;  
      if(k == 1) { 
         cin.ignore() ; 
         string s ; 
         getline(cin,s) ; 
         vector<string> v ; 
         string tmp ; 
         stringstream ss(s) ; 
         while(ss >> tmp) { 
		     chuanhoa(tmp) ;  
            v.push_back(tmp) ; 
		 } 
		 cout << v[v.size() -1] <<" "; 
		 for(int i=0; i < v.size() -1 ;i++) { 
		    cout << v[i] <<" " ; 
		 } 
	  } 
	  if(k==2)  { 
	     cin.ignore() ; 
	     string s1 ; 
         getline(cin,s1) ; 
         vector<string> v1 ; 
         string tmp1 ; 
         stringstream sss(s1) ; 
         while(sss >> tmp1) { 
		     chuanhoa(tmp1) ;  
            v1.push_back(tmp1) ; 
		 } 
		 for(int i=1; i < v1.size() ; i++) { 
		   cout << v1[i] <<" " ; 
		 } 
		 cout << v1[0] ; 
	  } 
	  cout << endl ; 
   } 
   return 0 ; 
}
