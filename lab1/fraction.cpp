#include <iostream>
#include "fraction.h"
using namespace std;

bool fraction::rangeCheck(double x, double first, double second) {
    if (x >= first && x <= second) {
        return true;  //���� x ����������� ��������� [first;second]
    }
    else {
        return false; //���� x �� ����������� ��������� [first;second]
    }
}
