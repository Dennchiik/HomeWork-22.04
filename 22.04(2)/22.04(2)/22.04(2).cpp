#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float a, b, x;

    cout << "Введіть значення а: ";
    cin >> a;
    cout << "Введіть значення b: ";
    cin >> b;

    if (a == 0) {
        if (b == 0) {
            cout << "Рівняння має безліч рішень" << endl;
        }
        else {
            cout << "Рівнення немає рішень" << endl;
        }
    }
    else {
        x = -b / a;
        cout << "Корінь рівнення: " << x << endl;
    }

    return 0;
}