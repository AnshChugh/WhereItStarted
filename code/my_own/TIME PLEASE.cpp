#include <iostream>
int main()
{
using namespace std;
int h;
int m;
cout << " WELCOME TO TIME C++" << endl << "                  (Press ENTER to continue";
cin.get();
cout << "ENTER HOURS OF THE TIME" << endl;
cin >> h;
cout << "ENTER MINUTES OF THE TIME" << endl;
cin >> m;
cout << "Press ENTER to see the time in 24-H" << endl<< endl;
cin.get();
cout << "Time is " << h<< ":" <<m << "hours" << endl << endl << "                          (Press ENTER to exit)";
cin.get();
return 0;
}

