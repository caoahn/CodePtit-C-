#include<bits/stdc++.h> 
using namespace std ;  
struct sinhvien { 
    string msv; 
    string ten; 
    string lop ; 
    string e; 
    string dn ;  
    int stt ; 
};  
int k = 1 ; 
void nhap(sinhvien &a) { 
   a.stt = k ; 
   getline(cin,a.msv) ; 
   getline(cin,a.ten) ; 
   getline(cin,a.lop) ;
   getline(cin,a.e) ; 
   getline(cin,a.dn) ; 
} 
bool cmp(sinhvien a,sinhvien b) { 
    if(a.msv < b.msv) return true ; 
    return false ; 
}
int main() { 
   int n ; 
   cin >> n  ; 
   cin.ignore() ; 
    struct sinhvien s[n] ; 
	for(int i=0;i < n ; i++) { 
	   nhap(s[i]) ; 
	   ++k ;  
	}  
	sort(s,s+n,cmp) ; 
    int q ; 
    cin >> q ; 
    string a[q] ; 
    for(int i=0; i < q ; i++) cin >> a[i] ; 
    for(int i=0;i<q;i++) { 
       for(int j=0;j<n;j++) { 
          if(a[i] == s[j].dn) { 
             cout << s[j].stt <<" " << s[j].msv <<" " << s[j].ten <<" "<<s[j].lop<<" "<<s[j].e<<" "<<s[j].dn << endl  ; 
		  }
	   }
	}
	 return 0 ; 
}
