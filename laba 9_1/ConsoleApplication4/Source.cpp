#include <locale>
#include <iostream>
void main()
{
	setlocale(LC_ALL, "rus");
	using namespace std;
	float s, e;
	int n, i, a[100], kmin = 0;
	cout << "Введите размер массива (не более 100)" << endl;
	cin >> n;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
		cout << a[i] << " ";
	}
	cout << endl;
	s = (a[n - 2] + a[n - 1] + a[n]) / 3;
	e = 0;
	for (i = 0; i < n; i++)
		if (a[i] == s)
		{
			e = i;
			cout << "Номер элемента, равного среднему арифметическому суммы трех последних чисел равен " << e << endl;
		}
	cout << "Элемент, равный среднему арифметическому суммы трех последних чисел не существует" << endl;
}




