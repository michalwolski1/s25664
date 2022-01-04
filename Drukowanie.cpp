#include <iostream>
#include <string>

using namespace std;


auto fpprint(void* a, size_t n, void(*fp)(void*)) -> void
{




}
auto print_int(void* a) -> void 
{
	string tab[] = *a;
	for (int i = 0; i < ; i++);



}
auto print_str(void*) -> void
{




}
int main()
{
	int tab1[2] = { 1, 2 };
	void* tab1p = &tab1;
	string tab2[2] = { "Hello", "World" };
	void (*fpint)(void*);
	fpint = &print_int;
	void (*fpstr)(void*);
	fpint = &print_str;
	fpprint(tab1p, sizeof(tab1) / sizeof(tab1[0]), *fpint);



}
	

