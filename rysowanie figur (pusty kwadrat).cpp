#include <iostream>
using namespace std;
void gwiazdka(int g)
{
	for (int i = 1; i <= g; i++)
		cout << "*";

}
void spacja(int s)
{
	for (int i = 1; i <= s; i++)
		cout << " ";
}

int main()
{
	int y;
	cin >> y;
	for (int i = 1; i <= y; i++)
	{
		if (i == y || i == 1)
			gwiazdka(y);
		else
		{
			gwiazdka(1);
			spacja(y - 2);
			gwiazdka(1);
		}
		cout << endl;
	}
}