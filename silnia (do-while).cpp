#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a;
	b = a;
	do
	{
		b = b * (a - 1);
		a--;

	} 
	while (a >= 3);
	cout << b << endl;
	
}
