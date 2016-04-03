#include <iostream>

using namespace std;

int main()
{
    int normal = 329821;
    int reverse = 0;
    while (normal != 0)
    {
        reverse = reverse * 10; // умножаем искомое число на 10, чтобы прибавить к нему разряд
        reverse = reverse + normal % 10; // записываем в reverse только остаток от деления исходного числа на 10 (последний разряд)
        normal = normal/10; // делим исходное число на десять, чтобы убрать разряд и гоняем цикл пока в нем не останется разрядов (они все запишутся в качестве остатка от деления в обратное число)

    }
    cout << reverse << endl;
}


