#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a;
	b = a;
	while (a >= 3)
	{
		b = b * (a - 1);
		a--;
	}
		cout << b << endl;

	
}