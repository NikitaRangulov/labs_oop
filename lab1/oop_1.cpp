#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{
	setlocale(0, "");
	fraction a;

	double x = 2.5;
	double first = 2.0;
	double second = 5.0;

	if (a.rangeCheck(x, first, second)) {
		cout << x << " принадлежит диапазону [ " << first << " ; " << second << " ]" << endl;
	}
	else {
		cout << x << " не принадлежит диапазону [ " << first << " ; " << second << " ]" << endl;
	}

}