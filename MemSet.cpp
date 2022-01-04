#include <iostream>
#include <cstring>

void memset(char a [],char b, int c)
{
	for (int i = 0; i < c; i++)
		a[i] = b;
}

int main()
{
	char b;
	int c;
	
	char tab[100];
		
	b = getchar();
	std::cin >> c;
	memset(tab, b, c);

	for (int i = 0; i < c; i++)
		std::cout << tab[i] << '\t';

	system("pause");
	return 0;




}
