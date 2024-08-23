#include<bits/stdc++.h> 
using namespace std ; 
struct ngay { 
   string ten ;  
   string date ; 
}; 
int main() {  
    vector<string> v ; 
    fstream in  ;  
    string tmp ;  
    struct ngay ds[100] ; 
    in.open("anh.in",ios :: in) ; 
	while(getline(in,tmp)) { 
	  v.push_back(tmp) ; 
	}
	in.close() ; 
	int n = v.size() ; 
	int i = 0 ; 
	int cnt = 0 ; 
	while(cnt < v.size()) { 
	   ds[i].date = v[cnt] ; 
	   ++cnt ; 
	   ds[i].ten = v[cnt] ; 
	   ++cnt ; 
	   
	   ++i ; 
	} 
	for(int j = 0 ; j < i ; j++) { 
	   cout << ds[j].ten<<" "<<ds[j].date << endl ; 
	} 
}
