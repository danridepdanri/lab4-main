
#include <iostream>
#include "Fraction.h"
using namespace std;
int main()
{
	 setlocale(LC_ALL, "ru");    //������� ����


	Fraction N; // ������������� ���� ������ ����� ����������� ������ ������������
	N.display();
	Fraction M(25,56); // ������������� ����� ���� ��������, ������ ����� ��������� 
	M.display();
	Fraction S(66, 44); // �������� ������������� � ����� ����������� 
	S.display();
	Fraction D;
	D = M - S;
	D.display();
		system("pause");
	
	

	return 0;
}

