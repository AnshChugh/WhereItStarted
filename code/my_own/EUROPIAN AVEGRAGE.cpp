#include "allinone.h"
int main()
{
using namespace std;
cout << "ENTER KILOMETER you TRAVELLED\n"<<endl;
int k,l;
cin >> k;
cout  << "\nENTER LITRES TAKEN TO COVER DISTANCE\n" <<endl;
cin >>l ;
cout <<endl<< "Press ENTER to get EUROPEAN STYLE\n";
double K(k),L(l);
float e;
e = (L*100)/K;
cin.get();
cin.get();
cout << endl<<e<< " Litre Per 100 Kilometer\n";
cin.get();
return 0;
}