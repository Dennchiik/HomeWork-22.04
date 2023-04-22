#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float number, result;
    int power;

    cout << "Введіть число: ";
    cin >> number;
    cout << "Введіть ступінь: ";
    cin >> power;

    result = pow(number, power);

    cout << number << " в ступіні " << power << " дорівнює " << result << endl;

    return 0;
}
