#include <iostream>

using namespace std;

int main()
{
    short number = 100'000'000'000'000;
    int another{number};
    cout << another;

    return 0;
}