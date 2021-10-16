# include < iostream >
# include < string >
# include < cstdlib >
auto ask_user_for_integer(std::string const prompt) -> int
{
	if (not prompt.empty()) {
		std::cout << prompt;
	}
	auto value = std::string{};
	std::getline(std::cin, value);
	return std::stoi(value);
}
int main()
{
	int a,b;
	a = ask_user_for_integer("");
	b = abs(a);
		std::cout << b;



}