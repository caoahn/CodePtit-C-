#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int cnt=0;
		for(int i=0;i<s.size();i++){
			if(s[i]==' '|| s[i]=='\n'||s[i]=='\t'){
				cnt++;
			}
		}
		cout<<cnt+1<<endl;
		
	}
}
