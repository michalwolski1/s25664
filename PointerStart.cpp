#include <iostream>
#include <string>

using namespace std;
int main()
{
	string name = "Michal Wolski";
	string* a = &name;
	cout << "wartosc zmiennej name: " << *a << endl;
	cout << "adres zmiennej name: " << a << endl;
	cout << "rozmiar zmiennej name: " << sizeof(*a) << endl;
	cout << "wartosc wskaznika: " << a << endl;
	cout << "adres wskaznika: " << &a << endl;
	cout << "rozmiar wskaznika: " << sizeof(a) << endl;
	system("pause");
	return 0;
}