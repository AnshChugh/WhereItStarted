#include "allinone.h"
int main()
{
using namespace std;
cout << "Enter latitude in degree,minutes , seconds" << endl;
double F_L;
double d,m,s;
cout << "FIRST Enter degree" <<endl;
cin >> d;
cout << "NOW Enter MINUTES" <<endl;
cin >> m;
cout << "At last Enter, SECONDS" << endl;
cin >> s;
cout << "Press ENTER TO GET DEGREE IN DECIMAL" <<endl;
cin.get();
cin.get();
F_L= (m*60+s)/3600 +d;
cout << "your latitude in decimal=" << F_L;
cin.get();
return 0;
}