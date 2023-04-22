#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float celsius, fahrenheit, kelvin, reaumur, delisle;

    cout << "введіть температуру в градусах Цельсія: ";
    cin >> celsius;

    fahrenheit = celsius * 9 / 5 + 32;
    cout << "Температура по Фаренгейту: " << fahrenheit << " градусів" << endl;

    kelvin = celsius + 273.15;
    cout << "Температура по Кельвіну: " << kelvin << " градісов" << endl;

    reaumur = celsius * 4 / 5;
    cout << "Температура по Реомюру: " << reaumur << " градісов" << endl;

    delisle = (100 - celsius) * 3 / 2;
    cout << "Температура по Делілю: " << delisle << " градусів" << endl;

    cout << "Введить температуру в градусах Фаренгейта: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5 / 9;
    cout << "Температура по Цельсію: " << celsius << " градусів" << endl;

    return 0;
}
