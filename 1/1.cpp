﻿#include <iostream>

using namespace std;

int main()
{
    int a, b; // переменные, хранящие целочисленные числа для дальнейшей суммации
    cout << "a = "; // сообщение, сообщяющее о необходимости ввести число
    cin >> a;      // собственно, считывание введённой переменной и её запись в переменную а
    cout << "b = "; 
    cin >> b;
    cout << "a + b * a = " << a + b * a;
}
