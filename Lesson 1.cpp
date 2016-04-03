#include <iostream>

using namespace std;

int main()
{
    int normal = 329821;
    int reverse = 0;
    while (normal != 0)
    {
        reverse = reverse * 10;
        reverse = reverse + normal % 10;
        normal = normal/10;

    }
    cout << reverse << endl;
}


