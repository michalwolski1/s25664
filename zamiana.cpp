#include <iostream>
#include <string>

using namespace std;

void swap(int *a, int *b)
{	
	int temp = *b;
	*b = *a;
	*a = temp;
}



int main()
{
	int a, b;

	cin >> a;
	cin >> b;
	cout << a << " " << b << endl;
	swap(a, b);
	cout << a << " " << b << endl;

	system("pause");
	return 0;

}
