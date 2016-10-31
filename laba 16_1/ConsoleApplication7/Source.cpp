#include <iostream>
using namespace std;
int &sum(int *A, int n)
{
	int i, j, sum = 0;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (*(A + i*n + j) < 0)
				for (j = 0; j < n; j++)
					sum += *(A + i*n + j);
	cout << "Summa vseh elementov strok matricy, v kotoryh est` otritsatel`nye elementy = " << sum << endl;
	return sum;
}
int main()
{
	int i, j, n;
	int *B;
	cout << "Vedite razmer massiva: ";
	cin >> n;
	B = new int[n * n * sizeof(int)];
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			cout << "Vvedite " << i + 1 << " element " << j + 1 << "-i stroki ";
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
	cout << "\n";
	sum(B, n);
}