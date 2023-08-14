#include <iostream>

void HealthStatus();
int main()
{
using namespace std;
int i,p;
cout << "Welcome to BMI foundation\n" <<"\nEnter your height in   inches ";
cin >>i;
cout << "\nENTER YOUR WIEGHT IN POUNDS" << endl;
cin >> p;
cout << "PRESS ENTER TO GET BMI" << endl;
cin.get();
cin.get();
double bmi,m,kg;
m= i*0.0254;
kg=p*2.2;
bmi=kg/m;
cout << bmi<< endl;
HealthStatus();
return 0;
}
void HealthStatus()
{
	if (20>bmi)
    {
	   cout << "YOU are PATLA";
    }
    else if (30 > bmi& bmi >=20)
	{
       cout << "APP THIKK HAI!";
	}
    else if (bmi >= 30)
	{
       cout<< "YOU ARE MOTA" ;
	}
	cin.get();
};;