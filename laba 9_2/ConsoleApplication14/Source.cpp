#include <locale>
#include <iostream>
void main()
{
	setlocale(LC_ALL, "rus");
	using namespace std;
	float e, el;
	int n, i, a[100];
	cout << "Введите размер массива (не более 100)" << endl;
	cin >> n;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
		cout << a[i] << " ";
	}
	el = 0;
	cout << endl;
	cout << "Массив, каждый элемент которого заменен суммой двух предыдущих элементов исходного массива:" << endl;
	cout << a[0];
	for (i = 2; i < n; i++)
	{
		a[i] = a[i-1] + a[i-2];
		cout <<" "<< a[i]; 
	}
	cout << endl;
}