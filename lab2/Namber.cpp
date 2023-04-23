#include "Namber.h"
#include <iostream>
#include <string>
using namespace std;

//конструктор без параметров
Namber::Namber()
{
	mant = 0;
	por = 0;
	str = "";
	cout << "Конструктор без параметров для объекта: " << this << endl;
}

//конструктор с параметрами
Namber::Namber(float N, int K, string S)
{
	mant = N;
	por = K;
	str = S;
	cout << "Конструктор с параметрами для объекта: " << this << endl;
}
///конструктор копирования
Namber::Namber(const Namber& t)
{
	mant = t.mant;
	por = t.por;
	str = t.str;
	cout << "Конструктор копирования для объекта: " << this << endl;
}
//деструктор
Namber::~Namber()
{
	cout << "Деструктор для объекта:  " << this << endl;
}
//селекторы
float Namber::get_mant()
{
	return mant;
}
int Namber::get_por()
{
	return por;
}
string Namber::get_str()
{
	return str;
}
//модификаторы
void Namber::set_mant(float N)
{
	mant = N;
}
void Namber::set_por(int K)
{
	por = K;
}
void Namber::set_str(string S)
{
	str = S;
}
//метод для просмотра атрибутов
void Namber::show()
{
	cout << "Мантиса: " << mant << endl;
	cout << "Порядок: " << por << endl;
	cout << "Строовое представление: " << str << endl;
}