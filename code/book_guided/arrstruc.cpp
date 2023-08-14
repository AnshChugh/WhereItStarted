// arrstruc.cpp -- array of structures
#include "allinone.h"
struct inflatable
{
	char name[20];
	float volume;
	double price;
};
int main()

{
	using namespace std;
	inflatable guests[2]=
{	{"Bambi",0.5,21.99},
	{"GodZilla",2000,565.99}
};
		cout << "The guests " << guests[0].name << " and " << guests[1].name
<< "\nhave a combined volume of "
<< guests[0].volume + guests[1].volume << " cubic feet.\n";
cin.get();
return 0;
}