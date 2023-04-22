#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const double PI = 3.14159;

    double radius, area, circumference;

    cout << "Введіть радіус кола: ";
    cin >> radius;

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    cout << "Площа кола: " << area << endl;
    cout << "Довжина кола: " << circumference << endl;

    return 0;
}




