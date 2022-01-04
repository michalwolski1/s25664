
#include <iostream>
#include <ctime>

using namespace std;


auto call_with_random_int(void (*fp) (int const)) -> void
{
	int i;
	srand(time(NULL));
		i = (rand() + 1);
		(*fp)(i);
}
auto wartosc(int a)
{
	cout << a << endl;
}

int main()
{
	auto b = &wartosc;
	call_with_random_int(b);


	system("pause");
	return 0;
}