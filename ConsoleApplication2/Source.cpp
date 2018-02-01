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

	SetConsoleOutputCP(1251); // функции для установки языка ввода
	SetConsoleCP(1251);

	srand(time(NULL));

	do
	{
		cout << "Введите номер задания: ";
		cin >> n;

		switch (n) {

		case 1: {
			int one = 9;
			int *refOne, *refThree;

			refOne = &one;
			refThree = refOne;
			cout << "Значение по адресу refOne и refThree: " << *refOne << " - " << *refThree << endl;

			cout << "значение указателей refOne и refThree: " << refOne << " - " << refThree << endl;
		}break;

		case 2: {
			int x = 5, y = 6;
			cout << fmin(&x, &y) << endl;
		}break;

			//1.	Написать функцию, которая получает указатель на массив и его размер, и возвращает
			//сумму и произведение его элементов в двух параметрах-ссылках.
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

			cout << "сумма: " << sum << " произведение: " << pr << endl;

			cout << "итог: " << endl;
			sumPr(m, &r, &sum, &pr);
			cout << "сумма: " << sum << " произведение: " << pr << endl;
		}break;

			//2.	Написать функцию, которая получает указатель на массив и его размер, и возвращает 
			//количество отрицательных, положительных и нулевых элементов массива, используя механизм ссылок.
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
			
			cout << "отрицательных элементов: " << countMinus << endl;
			cout << "положительных элементов: " << countPlus << endl;
			cout << "нулевых элементов: " << countNull<< endl;

		}break;
//3.	6.	Создать функцию, позволяющую добавлять блок элементов в конец массива.
		case 5: {
			char m[100] = " Петров ";
			FIO(m);
			cout << m << endl;
		}break;
//7.	Создать функцию, позволяющую вставлять блок элементов, начиная с произвольного индекса массива.
		case 6: {
			int m[20] = { 1,2,3,4,5};
			int index, vst[20],k;
			cout << "введите индекс элемента: ";
			cin >> index;
			cout << "введите кол-во вводимых элементов: ";
			cin >> k;

			cout << "Элементы вставки: ";
			
			for (int i=0;i<k;i)

		}break;
		}
	} while (n > 0);
}

// function min

double fmin(int *x, int *y)
{
	if (*x > *y)
		return (double)*x; // явное преобразование
	else
		return (double)*y;
}

//1.	Написать функцию, которая получает указатель на массив и его размер, и возвращает сумму и произведение 
//его элементов в двух параметрах-ссылках.

void sumPr(int *m, int *r, int *sum, unsigned long int *pr)
{

	for (int i = 0; i < *r; i++)
	{
		*sum += m[i];
		*pr *= m[i];
	}
}

//2.	Написать функцию, которая получает указатель на массив и его размер, и возвращает количество
//отрицательных, положительных и нулевых элементов массива, используя механизм ссылок.

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

//6.	Создать функцию, позволяющую добавлять блок элементов в конец массива.
void FIO(char *m)
{
	
	int len = strlen(m); //функция подсчета элементов в строке
	//int size = sizeof(m) / sizeof(char);//?????
	//cout << size << "\t" << len << endl;

	char name[25];
	cout << "Введите имя: ";
	//char *str = nullptr; //тоже что и NULL, только для указателей
//	str=gets_s(name); // для gets обязательно необходимо создать указатель, str. будет принимать до тех пор, пока не введете enter

	cin >> name;
	//cout << str << endl;
	/*cout << name << endl;*/

	strcat(m, name); //функция склеивания строк
}

int checkInsert ()

//7.	Создать функцию, позволяющую вставлять блок элементов, начиная с произвольного индекса массива.

void vstavka(int *m,int *index)
{
	

}