#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    float kilometers, land_miles, sea_miles;

    cout << "Введіть кількість километрів: ";
    cin >> kilometers;

    land_miles = kilometers / 1.6;
    sea_miles = kilometers / 1.85;

    cout << "Километри в сухопутних милях: " << land_miles << endl;
    cout << "Километри в морских милях: " << sea_miles << endl;

    return 0;
}