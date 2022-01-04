#include <iostream>
#include <string>

using namespace std;

void print(string* wsk)
{
	cout << wsk << " = " << *wsk << endl;
}

int main()
{
	string nazwa = "Hello, World!";
	string* a = &nazwa;
	print(a);
	
	system("pause");
	return 0;
}