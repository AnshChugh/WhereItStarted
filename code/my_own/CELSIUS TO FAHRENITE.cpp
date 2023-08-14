#include <iostream>
int main()
{
using namespace std;
double c;
double f;
cout << "WELCOME" << "          (press enter to continue)" << endl;
cin.get();
cout << "ENTER CELSIUS VALUE TO CONVERT TO FAHERNITE" << endl;
cin >> c;
f = 1.8 * c + 32.0;
cout << "Press ENTER to continue" << endl;
cin.get();
cin.get();
cout << f << " is answer" << endl;
cout << "Press ENTER to Exit";
cin.get();
return 0;
}