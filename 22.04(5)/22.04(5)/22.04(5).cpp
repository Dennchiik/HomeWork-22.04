#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    float uah_usd = 0.036;
    float uah_eur = 0.031;
    float uah_btc = 0.0000012;

    float uah, usd, eur, btc;

    cout << "Введіть кількість гривень: ";
    cin >> uah;

    usd = uah * uah_usd;
    eur = uah * uah_eur;
    btc = uah * uah_btc;

    cout << "Грівня - доллар: " << usd << endl;
    cout << "Гривня - евро: " << eur << endl;
    cout << "Грівня - біткоін: " << btc << endl;

    return 0;
}
