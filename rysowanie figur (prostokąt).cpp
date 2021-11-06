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
	 int x, y;
	 cin >> x;
	 cin >> y;
	 for (int i = 1; i <= y; i++)
	 {
		 gwiazdka(x);
		 cout << endl;
	 }
 }