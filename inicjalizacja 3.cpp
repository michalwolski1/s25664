#include <iostream>
using namespace std;
int main()
{
	int tablica[50];
	int k;
	cin >> k;
	for (int i = 0; i < 50; i++)
	{
		tablica[i] = rand() % k;
			cout << tablica[i] << endl;
	}
}