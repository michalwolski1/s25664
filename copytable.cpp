#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

void CopyTableToVector(int tab[100][8])
{
	vector <int> wektor;

	for (int i = 0; i < 100; i++)
	{
		if (i % 3 == 2) //modulo 3 z mojego numeru indeksu to 2
		{
			for (int j = 0; j < 8; j++)
			{
				int a = tab[i][j];
				wektor.push_back(a);
			}
		}
	}
}
int main ()
{
	srand(time(NULL));
	int tab[100][8];
		for (int i = 0; i < 100; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				tab[i][j] = (rand() % 100);
			}
		}
	CopyTableToVector(tab);
	system("pause");
		return 0;


}