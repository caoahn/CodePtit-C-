#include<bits/stdc++.h> 
using namespace std ; 
struct mathang{ 
   string ma ; 
   string ten ; 
   string hang ; 
   string dv ; 
   long long mua,ban ; 
}; 

bool cmp(mathang a,mathang b) { 
   int ln1 = a.ban - a.mua ; 
   int ln2 = b.ban - b.mua; 
   if(ln1 != ln2) { 
     return ln1 > ln2 ; 
   } 
   else a.ma < b.ma ; 
}
int main ()  { 
   int  n ;
   cin >> n ; 
   struct mathang mh[n] ; 
   map <string,int> mp ;  
   for(int i=0;i<n;i++) { 
     cin.ignore() ; 
     getline(cin,mh[i].ten) ; 
     getline(cin,mh[i].hang) ; 
     getline(cin,mh[i].dv) ; 
     cin >> mh[i].mua >> mh[i].ban ; 
	 mp[mh[i].ten]++ ;  
     string tmp ; 
     string res= "" ; 
     stringstream ss(mh[i].ten) ; 
     while(ss >> tmp) { 
        res += toupper(tmp[0]) ; 
	 } 
	 string r = to_string(mp[mh[i].ten] );  
	 while(r.size() < 4) { 
	   r = "0" +r ;  
	 } 
	 mh[i].ma = res + r ; 
   } 
   sort(mh,mh+n,cmp) ; 
   for(int i=0;i<n;i++) { 
     cout <<mh[i].ma << " "<<mh[i].ten<<" "<<mh[i].hang<<" "<<mh[i].dv<<" "<<mh[i].mua<<" "<<mh[i].ban<< endl ; 
   } 
   return 0 ;
}
