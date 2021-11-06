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

using namespace std;

int main()
{
    int a, b;
    a = ask_user_for_integer("");
    b = 0;

        if (a > 2)

            for (int i = 2; i * i <= a; i++)
                if (a % i == 0)
                    b++;
        if (b == 0)
            cout << "liczba jest pierwsza" << endl;
        else
            cout << "liczba nie jest pierwsza" << endl;
}
        
     