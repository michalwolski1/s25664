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
		while (true)
		{

			using namespace std;
			int a;
			a = ask_user_for_integer("");
			if (a == 0)
				cout << 0 << '\n';
			if (a < 0)
				cout << -1 << '\n';
			if (a > 0)
				cout << 1 << '\n';
		}
	}
