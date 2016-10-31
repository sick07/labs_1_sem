#include <locale>
#include <iostream>
using namespace std;
void main()
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
	
}