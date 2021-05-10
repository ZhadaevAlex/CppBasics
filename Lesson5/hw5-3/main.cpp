#include <iostream>

using namespace std;

//3. *Написать метод, в который передается не пустой одномерный целочисленный массив,
//метод должен вернуть истину если в массиве есть место, в котором сумма левой и правой части массива равны.
//Примеры: checkBalance([1, 1, 1, || 2, 1]) → true, checkBalance ([2, 1, 1, 2, 1]) → false,
//checkBalance ([10, || 1, 2, 3, 4]) → true.
//Абстрактная граница показана символами ||, эти символы в массив не входят.

bool checkBalance(int* arr, int count) {
    int sumLeft = 0;

    for (int i = 0; i < count; i++) {
        sumLeft += arr[i];
        int sumRight = 0;
        for (int j = i + 1; j < count; j++) {
            sumRight += arr[j];
        }

        if (sumLeft == sumRight) {
            return true;
        }
    }

    return false;
}

int main()
{
    const int count = 5;
    int arr[] = {10, 1, 2, 3, 4};

    bool res = checkBalance(arr, count);

    cout << res << endl;

    return 0;
}
