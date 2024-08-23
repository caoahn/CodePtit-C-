#include<iostream> 
#include<string.h> 
using namespace std ; 
int main() { 
  int t ; 
  cin >> t ; 
  while(t--) { 
     char s ; 
     cin >> s ; 
     if(s >= 'A' && s <= 'Z') { 
        s = tolower(s) ; 
	 } 
	 else  s = toupper(s) ; 
	 cout << s << endl ; 
  } 
  return 0 ; 
}
