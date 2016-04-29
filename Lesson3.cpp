#include <iostream>
#include <cmath>
#include <vector>
#include <cstring>

using namespace std;

  double Fibonacci (double n)
  {
      const float aFibonacci = (1 + sqrt(5)) / 2;
      const float bFibonacci = (1 - sqrt(5)) / 2;
      double currentFibonacci = ((pow(aFibonacci, n)) - (pow(bFibonacci, n))) / sqrt(5);
      return currentFibonacci;
  }

  void Reverse (char* first, int size)
  {
      if (size <= 1)
      {
          return;
      }
          char temp = first[0];
          first[0] = first[size-1];
          first[size-1] = temp;
          Reverse (++first, size-2);
      }

  int MinimalNumber (int number, int minimum)
  {
      if (number > 0)
      {
      int a = number % 10;
      if (a < minimum) minimum = a;
      MinimalNumber (number / 10, minimum);
      }
  }

int main()
{
//    1. Реализовать вычисление n-го числа Фибоначчи через массив.
    vector <long> fibonacciArr;
         fibonacciArr.push_back(0);
         fibonacciArr.push_back(1);
     for (unsigned i = 2; i < 100; i++)
     {
         fibonacciArr.push_back((fibonacciArr[i-1])+(fibonacciArr[i-2]));
     }
   for (unsigned i = 0; i < fibonacciArr.size(); i++)
   {
     cout << fibonacciArr[i] << endl;
   }

//    2. Реализовать вычисление n-го числа Фибоначчи с помощью переменных
   cout << Fibonacci(6) << endl;

//    3. Написать рекурсивную функцию по перевороту массива (в обратном порядке).

   // подумать как реализовать не используя никакие переменные!

   char arr[]= "I am good boy!";
   Reverse(arr, strlen(arr));
   for (size_t i = 0; i < sizeof(arr); i++)
   {
     cout << arr[i] << endl;
   }

//    4. Написать рекурсивную функцию по поиску минимальной цифры в числе.
     int a;
     cout << "Введите целое число: " << endl;
     cin >> a;
     cout << MinimalNumber (a, 9)  << endl;

//    5. Реализовать алгоритм поиска любой возрастающей подпоследовательности: 5 1 2 3 7 -2 3 5 -> 1 2 3 7
//    6. Перевернуть каждый половину массива: 1 2 3 4 5 6 7 8 9 10 -> 5 4 3 2 1 10 9 8 7 6
}
