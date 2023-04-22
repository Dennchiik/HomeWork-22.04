#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float a, b, result;

	cout << "Введіть значення а:";
	cin >> a;

	cout << "Введіть значення b:";
	cin >> b;

	a = a + b;
	b = a - b;
	a = a - b;
	
	cout << "a=" << a;
	cout << "b=" << b;



	return 0;
}