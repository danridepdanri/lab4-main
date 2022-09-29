#pragma once
#include <iostream>
#include <string>
#include<cassert>
using namespace std;
class Fraction {

private:
	long first;
	unsigned short second;

public:
	Fraction() { // ������ �����������, ����������� ��� ��������� (���������)
		first = 0;
		second = 0;
	}
	Fraction(long m_first, unsigned short m_second = 1) { // ������ ����������� � ����� ����������� ���������
		first = m_first;
		second = m_second;


	}


	void init(long f, unsigned short s) { // ����������� �������������
		first = f;
		second = s;
	}

	void read() {								// ������ �� ������� ����� 
		cout << "Celaya chast': "; cin >> first;
		cout << "Drobnaya chast': "; cin >> second;
	}

	void display() {   // ����������� �� ������� 
		cout << first << "." << second << endl;
	}
	// �����
	static void Add(Fraction a, Fraction b) { 
		cout << "\nAddition: " << a.first + b.first << "." << a.second + b.second << endl;
	}
	// �������
	static void Sub(Fraction a, Fraction b) {
		cout << "Subtraction: " << a.first - b.first << "." << a.second - b.second << endl;
	}
	// ���������
	static void Mul(Fraction a, Fraction b) {
		cout << "Multiplication: " << a.first * b.first << "." << a.second * b.second << endl;
	}
	// ���������
	static void Equal(Fraction a, Fraction b) {
		if (a.first == b.first && a.second == b.second)
		{
			cout << "Are Equal" << endl;
		}
		else {
			if ((a.first - b.first) > 0) {
				cout << "Number 1 > Number 2\n\n";
			}
			else {
				cout << "Number 1 < Number 2\n\n";
			}
		}
	};
	void ToString() {
		cout << "Processing ToString() start"  << endl;
		for (int i = 0; i < 10; i++) {
			cout << "Processing ToString(" << 10*i << "%" << ")" << endl;
		
		}
		cout << "Processing ToString() finished" << endl;
		cout << "String: " << endl;
		string tmpCelaya, tmpDrob, tmp;
		tmpCelaya = to_string(first);
		tmpDrob = to_string(second);
		tmp = tmpCelaya + "." + tmpDrob;
		cout << tmp << endl;
		
	
	}
	Fraction operator+ (Fraction t2);
	Fraction operator- (Fraction t2);
	Fraction operator* (Fraction t2);

};


/*
* � ��� ���������, ��� ���������� � ������� ��������, ����'������
������ ���� ��������� ������� ������:
� ����� ����������� Init();
� ����� �������� �� ��������� Read();
� ����� �������� �� ����� Display();
� ������������ � ����� toString().
*/

/*15. �������� ���� Fraction ��� ������ �� ��������� �������.����� ������� ����
������������ ����� ������ : ���� ������� � ����� ���� � ������, �������
������� � ���������� ������� ����.���������� ���������� ��������
���������, �����������, �������� � �������� ���������.
*/

