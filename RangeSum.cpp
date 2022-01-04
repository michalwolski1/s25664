#include <iostream>


using namespace std;

auto fSum(double (*f)(double), int n, int m) -> double
{
	double a = 0;
		for (int i = n; i <= m; i++)
		{
			a += f(i);
		}
		return a;


}

double sumowanie(double i)
{
	return i;
}
int main()
{
	int m;
	int n;
	cin >> n;
	cin >> m;
	
	double (*fa) (double);
	fa = &sumowanie;
	cout << fSum(fa, m, n) << endl;

	system("pause");
	return 0;



}








