#include<bits/stdc++.h> 
using namespace std ;  
struct sv { 
    string msv ; 
    string ten ; 
    double gpa ; 
    bool operator < (const sv other) { 
        return gpa < other.gpa ; 
	}
};
int main() {  
   int n ; 
   cin >> n ; 
   sv ds[n] ; 
   for(int i=0; i <n;i++) { 
       cin>> ds[i].msv ; 
       cin.ignore() ; 
       getline(cin,ds[i].ten) ; 
       cin >> ds[i].gpa ; 
   } 
   sort(ds,ds+n) ; 
   for(sv x : ds) { 
       cout << x.msv << " " << x.ten << x.gpa << endl ; 
   }
}
