#include "Time.h"
#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251");
	system("cls");
	Time a;
	Time b;
	cin >> a;
	cin >> b;; 
	++a; //префиксная операция инкремент
	if (a != b) cout << "a и b не равны" << endl;
	else cout << "a и b равны" << endl;
	cout << "a после добавеения секунд = " << a << endl;
	cout << "a = " << a << endl; 
	cout << "b = " << b << endl; 
	return 0;
}