#include <iostream>
using namespace std;
int main()
{
	bool istnieje = false;
	int tablica[100];
	int n, liczba, temp;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int j;
		cin >> j;
		tablica[i] = j;		
	}
	cin >> liczba;
	while (istnieje == false)
	{
		for (int i = 0; i < n; i++)
		{
			if (liczba == tablica[i])
				temp = i;
				istnieje = true;
		}
	}
	if (istnieje == true)
		cout << temp << endl;
	else
		cout << "-1" << endl;
	return 0;
		
}