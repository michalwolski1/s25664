
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void cone(double & h, double & r)
{
	double P = 3.14*r*r;
	double V = 3.14*r*r*h/3;
	cout << "Pole to " << P << " " << " objetosc to " << V << endl;
}

int main()
{
	double h, r;
	cin >> h;
	cin >> r;		
	cone(h, r);
	system("pause");
	return 0;
}