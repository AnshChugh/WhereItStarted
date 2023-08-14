#include "allinone.h"
int main()
{
using namespace std;
const int I_F = 12;
int user_int;
cout <<"WELCOME TO HIEGHT" << "                          Press ENTER to continue" << endl;
cin.get();
cout << "Enter your hieght in Inches" << endl;
cin >> user_int;
cout <<  "press ENTER to get your hieght in feet and inches" << endl;
cin.get();
cin.get();
cout << "Your hieght is "<<user_int/I_F<<" FEET AND "<<user_int%I_F<<" INCHES"<<endl;
cout << "PRESS   ENTER to Exit" << endl;
cin.get();
return 0;
}