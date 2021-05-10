#include <iostream>
#include <cmath>
#include <main.h>

using namespace std;

int main()
{
    //4. *Написать функцию, которой на вход подаётся одномерный массив и число n (может быть положительным, или отрицательным),
    //при этом метод должен циклически сместить все элементы массива на n позиций.

    int length  = 5; //Размер массива
    int shift = -12; //Сдвиг
    int arr[] =  {1, 2, 3, 4, 5};

    //Вывод в консоль исходного массива
    cout << "Исходный массив: ";
    PrintArr(arr, length);

    //Сдвигаем массив
    ShiftArr(arr, length, shift);

    //Вывод в консоль сдвинутого массива
    cout << "Массив со сдвигом ";
    if (shift < 0) {
        cout << "влево ";
    }
    else {
        cout << "вправо ";
    }

    cout << "на " << abs(shift) << " позиций: ";

    PrintArr(arr, length);

    return 0;
}

void ShiftArr(int* arr, int length, int shift) {
    int shiftArr[length];

    for (int i = 0; i < length; i++) {
        int shiftPos;
        if (shift >= 0) {
            shiftPos = (i + shift) % length;
        }
        else {
            shiftPos = i + shift % length;
            if (shiftPos < 0) {
                shiftPos = length + shiftPos;
            }
        }

        shiftArr[shiftPos] = arr[i];
    }

    for (int i = 0; i < length; i++) {
        arr[i] = shiftArr[i];
    }
}

void PrintArr(int* arr, int length) {
    for (int i = 0; i < length; ++i) {
         cout << arr[i] << " ";
    }

    cout << endl;
}
