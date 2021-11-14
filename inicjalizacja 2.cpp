#include <iostream>
using namespace std;
int main()
{
	int tablica[100];
	int n, start;
	cin >> n;
	cin >> start;
	for (int i = start;i < n + start; i++)
	{
		tablica[i] = i;
		cout << i << endl;
	}
}