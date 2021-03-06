#include <iostream>
#include <cmath>
#include <vector>
#include <cstring>


using namespace std;


int main()
{

//    1. Найти в массиве второй минимум и максимум.

    int arr1[10];

    for (int y = 0; y<10; y++)
    {
        arr1[y] = rand()%10;
    }

    int min_value = arr1[0];
    int max_value = arr1[0];
    for (int y = 0; y<10; y++)
    {
        if (min_value > arr1[y]) min_value = arr1[y];
         if (max_value < arr1[y]) max_value = arr1[y];
    }

cout << min_value << endl;

cout << max_value << endl;

// Теперь надо найти второй максимум - то есть число, разность которого с max_value наименьшая из всех, и второй минимум - число, сумма которого с min_value наименьшая;

    int min_value2 = arr1[0];
    int max_value2 = arr1[0];
    for (int y = 0; y<10; y++)
    {
        if (arr1[y] != min_value and (min_value2 > arr1[y])) min_value2 = arr1[y]; // На случай повторяющихся чисел в min/max_value надо хранить номер ячейки массива
        if (arr1[y] != max_value and (max_value2 < arr1[y])) max_value2 = arr1[y];
    }

    cout << min_value2 << endl;

    cout << max_value2 << endl;

//    2. Найти два элемента массива, которые дают максимальное произведение.

     int max_multiply = arr1[0]*arr1[1];
     for (int y = 0; y<9; y++)
        {
            for (int z=y+1; z<10; z++)
            {
            if (arr1[y]*arr1[z] > max_multiply)
            {
                max_multiply = arr1[y]*arr1[z];
            }
            }
     }
  cout << "Max multiply:" << max_multiply << endl;

//    3. Посчитать число элементов в массиве, которые расположены между минимальным и максимальным элементами и у которых количество единичных бит в числе четно.

 int quantity = 0;
 int bitcount = 0;
 min_value = 0;
 max_value = 0;
 int maxI, minI = 0;
 int arr2[5] = {0,1,2,3,4};
  for (int y = 0; y<5; y++)
  {
      if (min_value > arr2[y])
      {
          min_value = arr2[y];
          minI = y;
      }
      if (max_value < arr2[y]) max_value = arr2[y];
      {
          max_value = arr2[y];
          maxI = y;
      }
}

  cout << "Arr2 min_value: " << min_value << " Arr2 min_value_index: " << minI << endl;

  cout << "Arr2 max_value: " << max_value << " Arr2 max_value_index: " << maxI << endl;

  for (int y = minI+1; y<maxI; y++)
  {
      for(int i = 0; i < sizeof (int)*8; ++i)
          {
              if ((arr2[y] & (1 << i)) == pow (2,i))
            ++bitcount;
          }
       if ((bitcount & 1) == 0) quantity++;
       bitcount = 0;
      }

  cout << "Quantity of numbers with even set bits between array max and min: " << quantity << endl;

//    4. Реализовать циклический сдвиг строки на 1 позицию влево.
//    5*. Реализовать циклический сдвиг строки на k позиций влево (эффективная реализация).

    // 6. Проверить, являются ли все элементы массива уникальными (встречаются ровно 1 раз).
    bool arrunique = 1;
    for (int x = 0; x < 5; ++x)
    {
         for (int y = x+1; y < 5; ++y)
             if (arr2[x] == arr2[y])
                 arrunique = 0;

    }
      if (arrunique == 0)
      {
              cout << "No" << endl;
}
          else
{
cout << "Yes" << endl;
}

      //    7. Найти парные элементы в двух массивах (встречаются и в первом и во втором)

      vector<int> arr3; // создаем пустой вектор, т.к. не знаем, сколько может оказаться парных элементов
      for (int x = 0; x < 5; x++)
      {
          for (int y = 0; y < 10; y++)
          {
              if (arr2[x] == arr1[y])
                  arr3.push_back (arr2[x]);
          }
      }
      for (int x = 0; x<arr3.size(); x++)
      {
         cout << "Парные номера:" << arr3[x] << endl;
      }

      vector<int>().swap(arr3);


       //   8. Заполнить массив таким образом: 1 3 5 7 9 8 6 4 2
       int m = 9;
       int *arr4 = new int [m];
       for (int x = 0; x <= m/2; x++)
       {
           if (x == m/2)
           {
               arr4[x] = x+(x+1);
           }
           else
           {
               arr4[x] = x+(x+1);
               arr4[m-x-1] = x+(x+2);
           }

       }
       for (int x = 0; x < m; x++)
       {
             cout << arr4[x] << endl;
       }
       delete []arr4;

      //    9. Заполнить массив таким образом: 1 2 4 8 16 32 64 128 ....
      //    10. Перевернуть число побитово, т.е. было: 1101110, стало: 0111011

       char numberNormal[] = "1101110";
       int symbolQuantity = strlen(numberNormal);
       for (int i = 0; i < symbolQuantity/2; i++)
       {
           char currElement = numberNormal[i];
           numberNormal[i] = numberNormal[symbolQuantity-i-1];
           numberNormal[symbolQuantity-i-1] = currElement;

       }
       printf("Перевернутое число:\n");
       for (int i = 0; i < symbolQuantity; i++)
        {
                cout << numberNormal[i] << endl;

        }



}
