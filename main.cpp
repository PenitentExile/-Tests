#include <iostream>
#include <cmath>
#include <vector>
#include <cstring>
#include <array>

using namespace std;

//class NPC
//{
//    float centerhead[2], direction[2];

//    public:
//    void Talk ();
//    void Move ();
//};

//class GG : public NPC
//{
//public:
//    GG ();
//    void Hearing (float centerhead[2], direction[2]);
//    ~GG;
//};

//GG:GG ()
//{
//  centerhead[2] = {0,0}
//  direction[2] = {0;0};
//}

//void Hearing ()
//{
//    float headposition, distance, shift;
//}

//void Angle (float x1, float y1, float x2, float y2)
//{
//    float angle_between = (x1*x2 + y1*y2) / (sqrt(pow(x1, 2) + (pow(y1, 2)))) * (sqrt(pow(x2, 2) + (pow(y2, 2))));
//}

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

  struct students
  {
       string name;
       int ratings[2];
       string status;
  };

  string assignStatus (students *classStudents, int size n)
  {
      int allRatings = 0;
      for (int i = 0; i < 2; i++)
      {
      students currentRatings = data[i]ratings[0] + data[i]ratings[1];
      allRatings = allRatings + currentRatings;
      int cycleCount =
      }
      allRatings = allRatings /
  }

  string findBestWorst

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
//   int a;
//   cout << "Введите целое число: " << endl;
//   cin >> a;
//   cout << MinimalNumber (a, 9)  << endl;

//    5. Реализовать алгоритм поиска любой возрастающей подпоследовательности: 5 1 2 3 7 -2 3 5 -> 1 2 3 7
//    6. Перевернуть каждый половину массива: 1 2 3 4 5 6 7 8 9 10 -> 5 4 3 2 1 10 9 8 7 6

//    7. Найти среднее арифметическое всех оценок студентов. Найти лучшего студента и самого отстающего. Выдать всех студентов, у которых оценка ниже, чем среднее арифметическое всех. (структуру придумать самим).
   students data[3] = {{"Vasya", 4, 5}, {"Petya", 5, 5}, {"Sasha", 3, 4}};
   for (int i = 0; i < 3; i++)
   {
       cout << data[i].name << data[i].ratings[0] << data[i].ratings[1] << endl; // выводим нашу структуру
   }

   assignStatus (*data, 3);




//   std::array<int,2> A = {5,3};
//   std::array<int,2> B = A; //copy array A into array B
//   students data[3];
//   data[0].name = "Vasya";
//   data[1].name = "Petya";
//   data[2].name = "Sasha";
//   data[0].ratings = {5, 4}; ошибка - http://stackoverflow.com/questions/21669818/assigning-values-to-an-array-from-an-initializer-list

}
