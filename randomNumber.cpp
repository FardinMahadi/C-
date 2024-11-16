#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    long elapsedSeconds = time(0); // Nov 16 2024
    srand(elapsedSeconds);
    int number = rand() % 10;
    cout << number << endl;

    return 0;
}