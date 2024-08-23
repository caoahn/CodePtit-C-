#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
      int d,m ; 
      cin >> d ; 
      cin >> m ; 
      if((d >= 19 && m == 2) || (d <=20 && m == 3)) {  
	    cout <<"Song Ngu" << endl ; 
   }
	  else if( (d >= 20 && m == 4) || ( d<= 20 && m == 5)) { 
	     cout << "Kim Nguu" << endl ; 
	  } 
	  else if( (d >= 21 && m == 5) || ( d <= 20 && m == 6)) { 
	    cout << "Song Tu" << endl ; 
	  } 
	  else if( (d >=21 && m == 6) || (d <= 22 && m == 7)) { 
	    cout <<"Cu Giai" << endl ; 
	  } 
	  else if((d >= 23 && m == 7) || (d <= 22&& m == 8)) { 
	    cout << "Su Tu" << endl ; 
	  } 
	  else if((d >= 23 && m == 8) || (d <= 22 && m == 9)) { 
	      cout <<"Xu Nu" << endl ; 
	  } 
	  else if( (d >= 23 && m ==9) || (d <= 22 && m == 10)) { 
	     cout <<"Thien Binh" << endl ; 
	  } 
	  else if((d >=23 && m == 10) || (d <=22 && m == 11)) { 
	    cout <<"Thien Yet" << endl ; 
	  } 
	  else if((d >= 23 && m == 11) || (d <= 21 && m == 12)) { 
	    cout <<"Nhan Ma" << endl ; 
	  } 
	  else if((d >=22 && m == 12) || (d <=19 && m == 1)) { 
	      cout <<"Ma Ket"<< endl ; 
	  } 
	  else if((d >=20 && m == 1) || (d <= 18 && m == 2)) { 
	    cout <<"Bao Binh" << endl ; 
	  } 
	  else cout << "Bach Duong" << endl ; 
   } 
   return 0 ; 
}
