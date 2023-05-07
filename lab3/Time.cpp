#include "Time.h"
#include <iostream>
using namespace std;

Time& Time::operator=(const Time& t)
{
	if (&t == this) return *this;
	min = t.min;
	sec = t.sec;
	return *this;
}

bool Time::operator!=(Time& t)
{
	if (min != t.min && sec != t.sec)
		return 1;
	else
		return 0;
}

Time Time::operator ++(int)
{
	int temp1 = min * 60 + sec;
	temp1 += 30;
	Time p;
	p.min = temp1  / 60;
	p.sec = temp1  % 60;
	return p;
}

Time& Time::operator ++()
{
	int temp1 = min * 60 + sec;
	temp1 += 30;
	min = temp1 / 60;
	sec = temp1 % 60;
	return *this;
}

Time& Time::operator+ (const Time& t)
{
	int temp1 = min * 60 + sec;
	temp1++;
	Time p;
	p.min = temp1 / 60;
	p.sec = temp1 % 60;
	return p;
}

istream& operator>>(istream& in, Time& t)
{
	cout << "min = "; in >> t.min;
	cout << "sec = "; in >> t.sec;
	return in;
}

ostream& operator<<(ostream& out, const Time& t)
{
	return (out << t.min << " : " << t.sec);
}