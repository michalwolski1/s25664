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
		int a;
		a = ask_user_for_integer("") + ask_user_for_integer("");
		std::cout << a;
}