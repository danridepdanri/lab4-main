#include "Fraction.h"
#include <iostream>
using namespace std;


Fraction Fraction :: operator+ (Fraction t2) { // ���������
	Fraction tmp;
	tmp.first = first + t2.first;
	tmp.second = second + t2.second;
	return tmp;

}
Fraction Fraction :: operator- (Fraction t2) { // ��������
	Fraction tmp;
	tmp.first = first - t2.first;
	tmp.second = second - t2.second;
	return tmp;

}
Fraction Fraction :: operator* (Fraction t2) { // ��������
	Fraction tmp;
	tmp.first = first * t2.first;
	tmp.second = second * t2.second;
	return tmp;
}
