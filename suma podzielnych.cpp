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
bool jest_podzielna(int a, int b)
{
	if (a % b == 0)
		return true;
	else
		return false;

}
using namespace std;
int main()

{
	int limit, dzielnik, suma = 0;
	limit = ask_user_for_integer("");
	dzielnik = ask_user_for_integer("");

	for (int i = 1; i <= limit; i++)
		if (jest_podzielna(i, dzielnik) == true)
			suma = suma + i;
	cout << suma << endl;




	return 0;
}