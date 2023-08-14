//structur.cpp simple structure
#include "allinone.h"
struct inflatable // strucure declaration
{
	char name[20] ; /* u can use string class by typing std::string name*/
	float volume;
	double price;
};
int main()
{
	using namespace std;
	inflatable guest = 
	{
		"Glorious Gloria", // name value 
		1.88,// volume value
		29.99 // price value
	}; //guest is a structure variable of type inflatable 
	/* It's initialized to the indicated values*/
	inflatable pal =
	{
		"Audacious Arthur",
		3.12,
		32.99
	}; // pal is a second variable  of type inflatable
	// NOTE some implementations require using 
	// static inflatable guest =
	cout << "Expand your guest list with "<< guest.name;
	cout << " and "<< pal.name<<"!\n";
	// pal.name is the member of the pal variable 
	cout << "You can have both for $";
	cout << guest.price + pal.price<< "!\n";
	cin.get();
	return 0;
}