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
    {

        int a, b, s;

        a = ask_user_for_integer("");
        b = ask_user_for_integer("");
        s = ask_user_for_integer("");
        for (int i = 1; i < b - a + 1; i = i + s)
        
            cout << i << endl;
        
    }
}
