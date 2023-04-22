#include <iostream>
#include "fraction.h"
using namespace std;

bool fraction::rangeCheck(double x, double first, double second) {
    if (x >= first && x <= second) {
        return true;  //Если x принадлежит диапазону [first;second]
    }
    else {
        return false; //Если x не принадлежит диапазону [first;second]
    }
}
