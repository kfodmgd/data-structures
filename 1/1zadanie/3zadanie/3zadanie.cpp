﻿#include <iostream>//7.Написать программу, в которой нужно найти максимальный элемент вектора и вывести на экран
				   //10.Написать программу, в которой нужно найти сумму всех элементов вектора и вывести ее на экран.
				   //9.Написать программу, в которой нужно найти сумму минимального и максимального элементов массива, с выводом на экран.
#include <vector>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int n,i,max,sum,min;
	i = 0;
	sum = 0;
	cout << "введите колво значений " << endl;
	cin >> n;
	vector <int>a(n);
	cout << "Введите значения "<<endl;
	for (i ; i < n; i++) {
		max = a[1];
		min = a[1];
		cin >> a[i];
		sum +=a[i];
	}
	for (i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
		if (a[i] < min) {
			min = a[i];
		}
	}
	cout << "максимальное значение:"<<max << endl;
	cout << "Сумма всех элементов равна:" << sum << endl;
	cout << "Сумма минимального и максимального элементов:" << min + max << endl;
	return 0;
}