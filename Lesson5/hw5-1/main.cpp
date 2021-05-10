#include <iostream>

using namespace std;

//1. Задать целочисленный массив, состоящий из элементов 0 и 1. Например: [ 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 ].
//Написать функцию, заменяющую в принятом массиве 0 на 1, 1 на 0;

void change(int* arr, int count) {
    for(int i = 0; i < count; i++) {
        if (arr[i] == 0)
            arr[i] = 1;
        else if (arr[i] == 1)
            arr[i] = 0;
        else
            continue;
    }
}


void printArr(int* arr, int count) {
    for (int i = 0; i < count; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    const int count = 10;
    int arr[count] = {1, 1, 0, 0, 1, 0, 1, 1, 0, 0};

    printArr(arr, count);

    change(arr, count);

    printArr(arr, count);

    return 0;
}

