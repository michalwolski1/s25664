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

bool jest_pierwsza(int n)
{
    if (n >= 2)
    {
        for (int i = 2; i * i <= n; i++)
            if (n % i == 0)
                return false;
        return true;
    }
    else
        return false;
}
using namespace std;

int main()
{
    int a, suma = 0;
    a = ask_user_for_integer("");
    if (jest_pierwsza(a) == true)
    {
    
    for (int i = 2; i < a; i++)
        if (jest_pierwsza(i) == true)
            suma = suma + i;
    cout << suma << endl;
    }
            else
                cout << "podana liczba nie jest pierwsza" << endl; 
}