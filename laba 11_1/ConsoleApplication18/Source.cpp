#include <locale>
#include <iostream>
void main()
{
	setlocale(LC_ALL, "rus");
	using namespace std;
	float s, e;
	int n, i, a[100];
	cout << "Введите размер массива (не более 100)" << endl;
	cin >> n;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
	{
		*(a + i) = rand() % 100;
		cout << *(a + i) << " ";
	}
	cout << endl;
	cout << "Массив, каждый элемент которого заменен суммой предыдущих элементов исходного массива:" << endl;
	s = a[0];
	for (i = 0; i < n; i++)
	{
		*(a + i) = *(a + i) + s;
		s = s + *(a + i);
		cout << a[i] << endl;
		cout << " " << &a[i] << endl;
	}
	cout << endl;
}