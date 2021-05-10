#include <iostream>

using namespace std;

//2. Задать пустой целочисленный массив размером 8.
//Написать функцию, которая с помощью цикла заполнит его значениями 1 4 7 10 13 16 19 22;

void fill(int*, int);
void printArr(int*, int);

int main()
{
    const int count = 8;
    int arr[count];
    fill(arr, count);
    printArr(arr, count);
    return 0;
}

void fill(int* arr, int count) {
    arr[0] = 1;
    for(int i = 1; i < count; ++i) {
        arr[i] = arr[i - 1] + 3;
    }
}

void printArr(int* arr, int count) {
    for (int i = 0; i < count; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}
