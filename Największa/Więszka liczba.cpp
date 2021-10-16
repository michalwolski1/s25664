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
int main()
{
	int a,b;
	a = ask_user_for_integer("");
		b = ask_user_for_integer("");
	if (a > b)
		std::cout << a;
	if (b > a)
		std::cout << b;

}