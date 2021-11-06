#include <iostream>
#include <string>
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
    using namespace std;

    while (true)
    {

        int a, b, c;

        a = ask_user_for_integer("");
        b = ask_user_for_integer("");
        c = ask_user_for_integer("");
      
        for (int i = 1; i <= b - a; i++)

        {
            if (i % c == 0)

                cout << i << endl;
        }
    }
}