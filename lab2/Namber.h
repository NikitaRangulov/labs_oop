#pragma once
#include <iostream>
#include <string>
using namespace std;

class Namber
{
	float mant;
	int por;
	string str;

public:
	Namber();
	Namber(float, int, string);
	Namber(const Namber&);
	~Namber();
	float get_mant();
	void set_mant(float);
	int get_por();
	void set_por(int); 
	string get_str();
	void set_str(string); 
	void show();
};
