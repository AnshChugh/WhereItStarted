#include "allinone.h"
int main()
{
using namespace std;
cout << "ENTER KILOMETER you TRAVELLED"<<endl;
double k,l;
cin >> k;
cout  << "ENTER LITRES TAKEN TOCOVER DISTANCE" <<endl;
cin >>l ;
cout <<endl;
double K(k),L(l);
float e;
e = (L*100)/K;
cout << endl<<e<< "  LITRE PER KILOMETER"<<endl<<"ENTER TO GET US STYLE"<<endl;
cin.get();
cin.get();
double gal,mile;
gal= L/3.875;
mile = K*0.6214;
double am_sty;
am_sty= mile/gal;
cout <<gal<<"  "<<mile<<endl;
cout <<"your american average is  "<<am_sty<<" MPG"<<endl;
cin.get();
return 0;
}