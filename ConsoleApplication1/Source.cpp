#include <iostream>
#include <stdio.h>
#include <time.h>
#include <math.h>
using namespace std;

void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "RUS");
	/*int a[8] = { 37, 0, 50, 46, 34, 46, 0, 13 };*/

	
	/*int a[12];
	
	for (int i = 0; i < 12; i++)
	{
		a[i] = 163 + rand() % 28;
		cout << a[i] << endl;
	}*/

	/*int a[10];
	for (int i = 0; i < 10; i++)
	{
		cout << "¬ведите 10 элементов массива: " << endl;
		cin >> a[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cout << "¬ведите индекс любого элемента массива: " << endl;
		cin >> i;
		cout << " вадратный корень из элемента " << i << " равен: " << a[i] << endl;
	}*/

	/*int a[10];
	for (int i = 0; i < 10; i++)
	{
		a[i] = rand() % 10;
		a[i] *= 2;
		cout << "Ёлементы данного массива умноженные на 2 равны: " << a[i] << endl;
	}*/

	int a[12] = { 100, 150, 200, 250, 300, 320, 400, 450, 500, 510, 1000, 1200 };
	int S = 0;
	for (int i = 0; i < 12; i++)
	{
		S += a[i];
	}
	cout << " ќбща€ стоимость 12 предметов равна: " << S << endl;
}