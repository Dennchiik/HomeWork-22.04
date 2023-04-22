

#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float num1, num2, num3, average;

    cout << "Введіть перше число: ";
    cin >> num1;
    cout << "Введіть друге число: ";
    cin >> num2;
    cout << "Введіть третє число: ";
    cin >> num3;

    average = (num1 + num2 + num3) / 3;

    cout << "Середнє арифметичне: " << average << endl;

    return 0;
}