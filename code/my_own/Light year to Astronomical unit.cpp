#include <iostream>
int main()
{
using namespace std;
float l;
int a;
cout << "Press ENTER to continue" << endl;
cin.get();
cout << "ENTER the light years to find Astronomical value" << endl;
cin >> l;
a = l * 63240;
cout << endl;
cout << "We are moving to our next step of conversion. Press ENTER to continue" << endl;
cin.get();
cin.get();
cout << a << "  Astronomical units" << endl;
cin.get();
return 0;
}