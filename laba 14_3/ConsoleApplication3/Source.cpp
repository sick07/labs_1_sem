#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int *B;
	int str, stlb, min;
	int i, j, n;
	cout << "Vedite razmer massiva: ";
	cin >> n;
	B = new int[n * n * sizeof(int)];
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			cout << "Введите " << i + 1 << " элемент " << j + 1 << "-й строки ";
			cin >> *(B + i*n + j);
		}
	cout << "\n";
	cout << "Ishodnyi massiv: ";
	for (i = 0; i < n; i++)
	{
		cout << "\n";
		for (j = 0; j < n; j++)
			cout << "B[" << i << "," << j << "] = " << *(B + i*n + j) << "\t";
	}
	cout << "\n" << "\n";
	min = 10000000000;
	j = 0;
	for (i = 0; i < n;)
	{
		if (min > *(B + i*n + j))
		{
			min = *(B + i*n + j);
			str = i;
			stlb = j;
		}
		i++;
		j++;
	}
	cout << "Minimalnyi element glavnoi diagonali matritsi: B[" << str << "," << stlb << "]=" << min << "\n" << "\n";
	cout << "Stolbets, v kotoryi on vhodit:\n";
	for (i = 0; i < n; i++)
		cout << "B[" << i << "," << stlb << "] = " << *(B + i*n + stlb) << "\n";
	cout << "\n" << "\n";
	delete[] B;
}