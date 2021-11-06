# include < iostream >
# include < string >
auto ask_user_for_integer(std::string const prompt) -> int
{
	if (not prompt.empty()) {
		std::cout << prompt;
	}
	auto value = std::string{};
	std::getline(std::cin, value);
	return std::stoi(value);
}
void relacja(int a, int b)
{
	if (a == b)
		std::cout << a << " == " << b << '\n';
	else if (a < b)
		std::cout << a << " < " << b << '\n';
	else
		std::cout << a << " > " << b << '\n';
}
int main()

{
	int tab[100], x, y;
		x = ask_user_for_integer(""); //ilość liczb w tabeli
		y = ask_user_for_integer(""); //liczba z którą tab[i] są porównywane
		for (int i = 0; i < x; i++)
			tab[i] = ask_user_for_integer(""); //liczby wpisane z klawiatury (do porównania z x)
		for (int i = 0; i < x; i++)
			relacja(y, tab[i]);
	return 0;
}