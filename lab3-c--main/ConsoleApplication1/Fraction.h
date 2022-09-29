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
	Fraction() { // первый конструктор, конструктор без параметро (дефолтный)
		first = 0;
		second = 0;
	}
	Fraction(long m_first, unsigned short m_second = 1) { // второй конструктор с одним статическим значением
		first = m_first;
		second = m_second;


	}


	void init(long f, unsigned short s) { // статическая инициализация
		first = f;
		second = s;
	}

	void read() {								// чтение из ручного ввода 
		cout << "Celaya chast': "; cin >> first;
		cout << "Drobnaya chast': "; cin >> second;
	}

	void display() {   // отображение на дисплей 
		cout << first << "." << second << endl;
	}
	// сумма
	static void Add(Fraction a, Fraction b) { 
		cout << "\nAddition: " << a.first + b.first << "." << a.second + b.second << endl;
	}
	// разница
	static void Sub(Fraction a, Fraction b) {
		cout << "Subtraction: " << a.first - b.first << "." << a.second - b.second << endl;
	}
	// умножение
	static void Mul(Fraction a, Fraction b) {
		cout << "Multiplication: " << a.first * b.first << "." << a.second * b.second << endl;
	}
	// сравнение
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
* У всіх завданнях, крім зазначених у завданні операцій, обов'язково
повинні бути реалізовані наступні методи:
• метод ініціалізації Init();
• метод введення із клавіатури Read();
• метод вивідення на екран Display();
• перетворення в рядок toString().
*/

/*15. Створити клас Fraction для роботи із дробовими числами.Число повинне бути
презентовано двома полями : ціла частина — довге ціле зі знаком, дробова
частина — беззнакове коротке ціле.Реалізувати арифметичні операції
додавання, вирахування, множення й операції порівняння.
*/

