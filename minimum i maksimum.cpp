#include <iostream>
using namespace std;
int main()
{
	int tablica[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int j;
		cin >> j;
		tablica[i] = j;
	}
	int min = tablica[0], max = tablica[0];
	for (int i = 1; i < n; i++)
		if (tablica[i] < min)
			min = tablica[i];
	for (int i = 1; i < n; i++)
		if (tablica[i] > max)
			max = tablica[i];
	cout <<"najwieksza liczba to " << max << endl;
	cout <<"najmniejsza liczba to " << min << endl;
	return 0;


		
}
