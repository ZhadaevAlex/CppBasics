#include <iostream>

using namespace std;

int main()
{
    //1. Создать и инициализировать переменные пройденных типов данных
    //Я попробовал перечислить как можно больше типов данных
    //Наверное большинство из них являются некими псевдонимами
    unsigned u1 = 1;

    char c1 = 'a';
    char16_t c2 = 'b';
    char32_t c3 = 'c';
    unsigned char c4 = 'd';
    u_char c5 = 'e';

    short s1 = 2;
    unsigned short s2 = 3;
    ushort s3 = 4;
    u_short s4 = 5;

    int i1 = 6;
    int8_t i2 = 7;
    int16_t i3 = 8;
    int32_t i4 = 9;
    unsigned int i5 = 10;
    uint i6 = 11;
    uint8_t i7 = 12;
    uint16_t i8 = 13;
    uint32_t i9 = 14;
    u_int i10 = 15;
    u_int8_t i11 = 16;
    u_int16_t i12 = 17;
    u_int32_t i13 = 18;

    long l = 19;
    unsigned long l1 = 20;
    ulong l2 = 21;
    u_long l3 = 22;

    long int li = 23;
    long long ll = 24;
    long long int lli = 25;

    unsigned long int uli = 26;
    unsigned long long ull = 27;
    unsigned long long int ulli = 28;

    float f = 29.1;
    double d = 30.2;
    long double ld = 30.3;

    cout << "unsigned" << ' ' << sizeof(unsigned) << endl;

    cout << "char" << ' ' << sizeof(char) << endl;
    cout << "char16_t" << ' ' << sizeof(char16_t) << endl;
    cout << "char32_t" << ' ' << sizeof(char32_t) << endl;
    cout << "unsigned char" << ' ' << sizeof(unsigned char) << endl;
    cout << "u_char" << ' ' << sizeof(u_char) << endl;

    cout << "short" << ' ' << sizeof(short) << endl;
    cout << "unsigned short" << ' ' << sizeof(unsigned short) << endl;
    cout << "ushort" << ' ' << sizeof(ushort) << endl;
    cout << "u_short" << ' ' << sizeof(u_short) << endl;

    cout << "int" << ' ' << sizeof(int) << endl;
    cout << "int8_t" << ' ' << sizeof(int8_t) << endl;
    cout << "int16_t" << ' ' << sizeof(int16_t) << endl;
    cout << "int32_t" << ' ' << sizeof(int32_t) << endl;
    cout << "unsigned int" << ' ' << sizeof(unsigned int) << endl;
    cout << "uint" << ' ' << sizeof(uint) << endl;
    cout << "uint8_t" << ' ' << sizeof(uint8_t) << endl;
    cout << "uint16_t" << ' ' << sizeof(uint16_t) << endl;
    cout << "uint32_t" << ' ' << sizeof(uint32_t) << endl;
    cout << "u_int" << ' ' << sizeof(u_int) << endl;
    cout << "u_int8_t" << ' ' << sizeof(u_int8_t) << endl;
    cout << "u_int16_t" << ' ' << sizeof(u_int16_t) << endl;
    cout << "u_int32_t" << ' ' << sizeof(u_int32_t) << endl;

    cout << "long" << ' ' << sizeof(long) << endl;
    cout << "unsigned long" << ' ' << sizeof(unsigned long) << endl;
    cout << "ulong" << ' ' << sizeof(ulong) << endl;
    cout << "u_long" << ' ' << sizeof(u_long) << endl;

    cout << "long int" << ' ' << sizeof(long int) << endl;
    cout << "long long" << ' ' << sizeof(long long) << endl;
    cout << "long long int" << ' ' << sizeof(long long int) << endl;
    cout << "unsigned long int" << ' ' << sizeof(unsigned long int) << endl;
    cout << "unsigned long long" << ' ' << sizeof(unsigned long long) << endl;
    cout << "unsigned long long int" << ' ' << sizeof(unsigned long long int) << endl;

    cout << "float" << ' ' << sizeof(float) << endl;
    cout << "double" << ' ' << sizeof(double) << endl;
    cout << "long double" << ' ' << sizeof(double) << endl;

    //Перечисление
    enum months {
        Jan = 1,
        Feb,
        Mar,
        Apr,
        May,
        June,
        July,
        Aug,
        Sept,
        Oct,
        Nov,
        Dec
    };

    months winter1 = months::Dec;
    months winter3 = Feb;

    //Структуры
    struct Car {
        char brand[10];
        int year;
        double price;
    } car1 {"BMW", 1992, 270000.00};

    Car car2 = {"Mercedes", 2021, 3860000.00};

    Car car3;

    car3.brand[0] = 'L';
    car3.brand[1] = 'a';
    car3.brand[2] = 'd';
    car3.brand[3] = 'a';
    car3.year = 1976;
    car3.price = 1000000.0;

    //Массивы
    int arr1[] = {10, 20, 30, 40, 50};
    double arr2[5] = {2.45, 6.32, 3.780, 4.336, 85.336};
    char arr3[11] = {"Geekbrains"};
    int arr4[5];
    arr4[0] = 1;
    arr4[1] = 2;
    arr4[2] = 3;
    arr4[3] = 4;
    arr4[4] = 5;
    //-----------------------------------------------------------------------------------



    //2. Создать перечисление с возможными вариантами символов для игры в крестики-нолики
    //Клеточка поля. Может быть:
    // - пустая
    // - содержать крестик
    // - содержать нолик
    enum Cell {
        empty,
        cross,
        zero
    };
    //-----------------------------------------------------------------------------------



    //3. Создать массив, способный содержать значения такого перечисления и инициализировать его
    //Это двумерный массив. По сути - это поле для игры, состоящее из ячеек
    Cell cells [3][3] = {
                            {empty, cross, zero},
                            {zero, empty, cross},
                            {cross, zero, empty},
                        };
    //-----------------------------------------------------------------------------------



    //4. *Создать структуру данных «Поле для игры в крестики-нолики» и снабдить его всеми необходимыми свойствами
    //При решении данной задачи я не смотрел последний урок, чтобы был смысл ее решать
    struct field {
        Cell cells[3][3];
    };
    //-----------------------------------------------------------------------------------



    //5. **Создать объединение и структуру с битовыми флагами указывающими какого типа значение в данный момент содержится в объединении
    union SomeUnion {
        int i;
        double d;
        char c;
    };

    struct SomeStruct {
        SomeUnion su;
        int isInt : 1;
        int isDouble : 1;
        int isChar : 1;
    };

    SomeStruct someStruct;

    someStruct.su.d = 2.5;
    someStruct.isInt = 0;
    someStruct.isDouble = 1;
    someStruct.isChar = 0;

    cout << someStruct.su.i << endl;
    cout << someStruct.su.d << endl;
    cout << someStruct.su.c << endl;
    cout << someStruct.isInt << endl;
    cout << someStruct.isDouble << endl; //Почему то выводится: -1 вместо 1
    cout << someStruct.isChar << endl;

    return 0;
}
