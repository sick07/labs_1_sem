#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int *B;
	int str, stlb, max;
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
	max = 0;
	j = 0;
	for (i = 0; i < n;)
	{
		if (max < *(B + i*n + j))
		{
			max = *(B + i*n + j);
			str = i;
			stlb = j;
		}	
		i++;
		j++;
	}
	cout << "Maximalnyi element glavnoi diagonali matritsi: B[" << str << "," << stlb << "]=" << max << "\n" << "\n";
	cout << "Stroka, v kotoruyu on vhodit: ";
	for (j = 0; j < n; j++)
		cout << "B[" << str << "," << j << "] = " << *(B + str*n + j) << "\t";
	cout << "\n" << "\n";
	delete[] B;
}