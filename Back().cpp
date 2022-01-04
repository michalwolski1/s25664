#include <iostream>

auto memrev(void* s, size_t n) 
{
    char* b = (char*)s;
    char temp;

    for (int i = 0; i < n/2; i++)
    { 
        temp = b[n - i];
        b[n - i] = b[i];
        b[i] = temp;
    }
}

int main()
{
    int a; 
    void* c = &a;
    int n;
    std::cin >> n;
    std::cin >> a;
    memrev(c, n);
    system("pause");
    return 0;
}

