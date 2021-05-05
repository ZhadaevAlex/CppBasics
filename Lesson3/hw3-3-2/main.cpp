#include <iostream>
#include <someFile.cpp>

using namespace std;

int main()
{
    //3.	* Написать программу, вычисляющую выражение из первого задания, а переменные для неё инициализировать в другом файле
    //Способ 2. Константы описаны в файле с расширением *.сpp
    double res1 = a * (b + (c / (double)d));

    cout << res1 << endl;

    return 0;
}

