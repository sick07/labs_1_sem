#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int n = 4, m = 4;
	int B[n][m];
	int i, j, r = 0, c = 0, s, q;
	cout << "������� �������� �������" << endl;
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			cin >> B[i][j];
	cout << " �������� ������:" << endl;
	for (int i = 0; i<n; i++)
	{
		cout << "\n";
		for (int j = 0; j<m; j++)
			cout << "B[" << i << "," << j << "] =" << B[i][j] << "\t";
	}
	int min = B[0][0];
	i = 0;
	j = 0;
	for (q = 0; q < 4; q++)
	{
		if (min > B[i][j])
		{
			min = B[i][j];
			c = i;
			r = j;
		}
		i = i + 1;
		j = j + 1;
	}
	cout << endl;
	cout << "����������� ������� ������� ��������� B[" << c << "," << r << "] = " << min << endl;
	cout << "�������, � ������� ������ ���� �������: ";
	cout << endl;
	for (q = 0; q < 4; q++)
	{
		cout << "B[" << q << "," << c << "]=" << B[q][c] << endl;
	}
	cout << endl;
}