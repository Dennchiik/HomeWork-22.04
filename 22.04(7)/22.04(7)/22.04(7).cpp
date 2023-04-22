// 22.04(7).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    float number, persent, result;

    cout << "Введіть число:";
    cin >> number;

    cout << "Введіть відсоток:";
    cin >> persent;
    
    result = number * persent / 100;

    cout << persent << "% від" << number << " дорівнює " << result << endl;

    return 0;
}

