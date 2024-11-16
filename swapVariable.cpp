#include <iostream>

int main()
{
    int a = 5, b = 10, c;

    std::cout << a, ',', b;
    c = a;
    a = b;
    b = c;
    std::cout << a, ',', b;

    return 0;
}