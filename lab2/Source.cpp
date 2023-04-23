#include "Namber.h"
#include <iostream>
#include <string>
using namespace std;

//функция для возврата объекта как результата
Namber make_Namber()
{
	float a;
	int b;
	string c;
	cout << "Введите мантису: ";
	cin >> a;
	cout << "Введите порядок: ";
	cin >> b;
	cout << "Введите строковое представление: ";
	cin >> c;
	Namber t(a, b, c);
	return t;
}
//функция для передачи объекта как параметра
void print_Namber(Namber t)
{
	t.show();
}
void main()
{
	setlocale(0, "");

	Namber t1; //конструктор без параметров
	t1.show(); 
	Namber t2(1.2, 2, "a"); //коструктор с параметрами
	t2.show(); 
	Namber t3 = t2; //конструктор копирования
	t3.set_mant(4.1231);
	t3.set_por(3);
	t3.set_str("b"); 
	print_Namber(t3); //конструктор копирования
	t1 = make_Namber();//конструктор копирования
	t1.show();
}