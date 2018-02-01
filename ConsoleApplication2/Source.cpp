#include<iostream>
#include<stdio.h>
#include<math.h>
#include <locale>
#include<stdint.h>
#include<Windows.h>

using namespace std;
double fmin(int *x, int *y);
void sumPr(int *m, int *r, int *sum, unsigned long int *pr);
void function(int *m, int *r, int *countMinus, int *countPlus, int *countNull);
void FIO(char *m);

void main()
{
	int n;
	setlocale(LC_ALL, "Russian");

	SetConsoleOutputCP(1251); // ������� ��� ��������� ����� �����
	SetConsoleCP(1251);

	srand(time(NULL));

	do
	{
		cout << "������� ����� �������: ";
		cin >> n;

		switch (n) {

		case 1: {
			int one = 9;
			int *refOne, *refThree;

			refOne = &one;
			refThree = refOne;
			cout << "�������� �� ������ refOne � refThree: " << *refOne << " - " << *refThree << endl;

			cout << "�������� ���������� refOne � refThree: " << refOne << " - " << refThree << endl;
		}break;

		case 2: {
			int x = 5, y = 6;
			cout << fmin(&x, &y) << endl;
		}break;

			//1.	�������� �������, ������� �������� ��������� �� ������ � ��� ������, � ����������
			//����� � ������������ ��� ��������� � ���� ����������-�������.
		case 3: {
			int sum = 0;
			unsigned long int pr = 1;
			int m[20] = { 0 };
			int r = 20;
			for (int i = 0; i < 20; i++)
			{
				m[i] = 1 + rand() % 20;
				cout << m[i] << "\t";
			}
			cout << endl;

			cout << "�����: " << sum << " ������������: " << pr << endl;

			cout << "����: " << endl;
			sumPr(m, &r, &sum, &pr);
			cout << "�����: " << sum << " ������������: " << pr << endl;
		}break;

			//2.	�������� �������, ������� �������� ��������� �� ������ � ��� ������, � ���������� 
			//���������� �������������, ������������� � ������� ��������� �������, ��������� �������� ������.
		case 4: {
			int m[10] = { 0 };
			int r = 10, countMinus = 0, countPlus = 0, countNull = 0;
			for (int i = 0; i < 10; i++)
			{
				m[i] = -10 + rand() % 30;
				cout << m[i] << "\t";
			}
			cout << endl;

			function(m, &r, &countMinus, &countPlus, &countNull);
			
			cout << "������������� ���������: " << countMinus << endl;
			cout << "������������� ���������: " << countPlus << endl;
			cout << "������� ���������: " << countNull<< endl;

		}break;
//3.	6.	������� �������, ����������� ��������� ���� ��������� � ����� �������.
		case 5: {
			char m[100] = " ������ ";
			FIO(m);
			cout << m << endl;
		}break;
//7.	������� �������, ����������� ��������� ���� ���������, ������� � ������������� ������� �������.
		case 6: {
			int m[20] = { 1,2,3,4,5};
			int index, vst[20],k;
			cout << "������� ������ ��������: ";
			cin >> index;
			cout << "������� ���-�� �������� ���������: ";
			cin >> k;

			cout << "�������� �������: ";
			
			for (int i=0;i<k;i)

		}break;
		}
	} while (n > 0);
}

// function min

double fmin(int *x, int *y)
{
	if (*x > *y)
		return (double)*x; // ����� ��������������
	else
		return (double)*y;
}

//1.	�������� �������, ������� �������� ��������� �� ������ � ��� ������, � ���������� ����� � ������������ 
//��� ��������� � ���� ����������-�������.

void sumPr(int *m, int *r, int *sum, unsigned long int *pr)
{

	for (int i = 0; i < *r; i++)
	{
		*sum += m[i];
		*pr *= m[i];
	}
}

//2.	�������� �������, ������� �������� ��������� �� ������ � ��� ������, � ���������� ����������
//�������������, ������������� � ������� ��������� �������, ��������� �������� ������.

void function(int *m, int *r, int *countMinus, int *countPlus, int *countNull)
{
	for (int i = 0; i < *r; i++)
	{
		if (m[i] > 0)
		{
			*countPlus=*countPlus+1;
		}
		else if (m[i] < 0)
		{
			*countMinus= *countMinus+1;
		}
		else
		{
			*countNull= *countNull+1;
		}
	}
}

//6.	������� �������, ����������� ��������� ���� ��������� � ����� �������.
void FIO(char *m)
{
	
	int len = strlen(m); //������� �������� ��������� � ������
	//int size = sizeof(m) / sizeof(char);//?????
	//cout << size << "\t" << len << endl;

	char name[25];
	cout << "������� ���: ";
	//char *str = nullptr; //���� ��� � NULL, ������ ��� ����������
//	str=gets_s(name); // ��� gets ����������� ���������� ������� ���������, str. ����� ��������� �� ��� ���, ���� �� ������� enter

	cin >> name;
	//cout << str << endl;
	/*cout << name << endl;*/

	strcat(m, name); //������� ���������� �����
}

int checkInsert ()

//7.	������� �������, ����������� ��������� ���� ���������, ������� � ������������� ������� �������.

void vstavka(int *m,int *index)
{
	

}