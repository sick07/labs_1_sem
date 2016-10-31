#include <iostream>
#include <locale>
#include <sstream>
#include <string>
using namespace std;
void massiv1();
void massiv2();
void matrix1();
void matrix2();
void symbols1();
void symbols2();
void main(void)
{
	setlocale(LC_CTYPE, "Russian");
	int c;
	do
	{
		cout << "\n";
		cout << "Введите" << endl;
		cout << "1-одномерный массив" << endl;
		cout << "2-одномерный массив" << endl;
		cout << "3-работа с символами" << endl;
		cout << "4-работа с символами" << endl;
		cout << "5-работа с матрицей" << endl;
		cout << "6-работа с матрицей" << endl;
		cout << "7-выход" << endl;
		cin >> c;
		switch (c)
		{
		case 1: massiv1(); 
			break;
		case 2: massiv2();
			break;
		case 3: symbols1();
			break;
		case 4: symbols2();
			break;
		case 5: matrix1();
			break;
		case 6: matrix2();
			break;
		case 7:
			break;
		}
	} 
	while (c != 7);
}
void massiv1()
{
	setlocale(LC_CTYPE, "Russian");
	float sr, el;
	int i, n = 0, gr;
	int *A = NULL;
	cout << "Vvedite razmer massiva: ";
	cin >> n;
	cout << "\n";
	cout << "Vvedite granitsu maximalnogo elementa massiva: ";
	cin >> gr;
	cout << "\n";
	A = new int[n];
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
	{
		A[i] = rand() % gr;
		cout << A[i] << "\t";
	}
	cout << "\n\n";
	sr = (*(A + n - 2) + *(A + n - 1) + *(A + n - 1)) / 3;
	el = 0;
	for (i = 0; i < n; i++)
		if (*(A + i) == sr)
			el = i;
	if (el != 0)
		cout << "Nomer elementa, kotoruy raven srednemu arifmeticheskomu treh poslednih elementov: " << el << "\n";
	else
		cout << "Element, kotoruy raven srednemu arifmeticheskomu treh poslednih elementov ne sushchestvuet\n";
	delete[] A;
}
void matrix1()
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
void symbols1()
{
	setlocale(LC_CTYPE, "Russian");
	char *T, *S;
	char c, *pc;
	int i, n, j, m;
	n = 1000000000;
	T = new char[n + 1];
	cout << "Vvedite stroku, posle kajdogo slova stav`te '_'\n";
	cin >> T;
	c = '_';
	pc = &c;
	cout << "Slovo, sostavlennoe iz poslednih bukv vseh slov: ";
	for (i = 0; i < n; i++)
		if (T[i] == *pc)
			cout << *(T + i - 1);
	cout << "\n";
	delete[] T;
}	
void symbols2()
{
	setlocale(LC_CTYPE, "Russian");
	char *T;
	char c, *pc;
	int i, n, dl, dl1;
	int min = 100, max = 0;
	n = 1000000000;
	T = new char[n + 1];
	cout << "Vvedite stroku, pered i posle kajdogo slova stav`te '_'\n";
	cin >> T;
	c = '_';
	pc = &c;
	dl = 1;
	for (i = 1; i <= n; i++)
		if (T[i] == *pc)
		{
			dl1 = i - dl;
			dl = i + 1;
			if (dl1 > max)
				max = dl1;
			if (dl1 < min)
				min = dl1;
		}
	cout << "Dlina samogo dlinnogo slova " << max << ", samogo korotkogo " << min << endl;
	delete[] T;
}
void matrix2()
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
void massiv2()
{
	setlocale(LC_CTYPE, "Russian");
	float sr, el;
	int i, n = 0, gr;
	int *A = NULL;
	cout << "Vvedite razmer massiva: ";
	cin >> n;
	cout << "\n";
	cout << "Vvedite granitsu maximalnogo elementa massiva: ";
	cin >> gr;
	cout << "\n";
	A = new int[n];
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
	{
		A[i] = rand() % gr;
		cout << A[i] << "\t";
	}
	cout << "\n\n";

	cout << "Массив, каждый элемент которого заменен суммой предыдущих элементов исходного массива:" << endl;
	cout << *(A + 0);
	for (i = 2; i < n; i++)
	{
		*(A + i) = *(A + i - 1) + *(A + i - 2);
		cout << " " << *(A + i);
	}
	cout << endl;
}