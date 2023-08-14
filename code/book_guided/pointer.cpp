// pointer.cpp 
#include <iostream>
int main()
{
	using namespace std;
	int updates = 6;
	int * p_updates;
	p_updates = &updates;
	cout << "values: updates = "<<updates<<endl;
	cout << ", *p_updates = "<<*p_updates<<endl;
	cout << "addresses: &updates = "<<&updates;
	cout << ", p_updates = "<<p_updates<<endl;
	*p_updates = *p_updates + 1;
	cout <<"Now updates = "<<updates<<endl;
	cin.get();
	return 0;
}
