#include <iostream>
using namespace std;
int main()
{
	int tablica[100];
	int n, suma = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int j;
		cin >> j;
		tablica[i] = j;
	}
	for (int i = 0; i < n; i++)
		suma += tablica[i];
		cout << suma << endl;
}
