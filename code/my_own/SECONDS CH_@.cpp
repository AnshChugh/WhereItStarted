#include "allinone.h"
int main()
{
using namespace std;
  long  s ;
cout << "Enter the number of seconds"<<endl;
long D,H,M,S;
cin >> s;
D = s/(24*60*60);
H = s/(60*60)%24;
M = (s/60)%60;
S = (s%60);
cout << D <<" days,";
if(H>0)cout <<H << " HOURS,";
cout << M <<" MINUTES,"<<S << " seconds" <<endl;
cin.get();
cin.get();
return 0;
}