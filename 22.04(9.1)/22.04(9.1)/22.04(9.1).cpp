#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float a, b, c, result;

	cout << "Введіть значення а:";
	cin >> a;

	cout << "Введіть значення b:";
	cin >> b;

	cout << "Введіь значення с:";
	cin >> c;

	c = a;
	a = b;
	b = c;

	cout << "a=" << a;
	cout << "b=" << b;



	return 0;
}