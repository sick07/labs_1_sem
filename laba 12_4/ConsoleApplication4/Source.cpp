#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int i = 0, n, dl, dl1, max, min;
	char T[100];
	char c, *pc;
	cout << "Vvedite dlinu stroki: ";
	cin >> n;
	cout << "Vvedite stroku, posle kajdogo slova stav`te '_'\n";
	for (i = 0; i < n; i++)
		cin >> T[i];
	c = '_';
	pc = &c;
	dl = 1;
	max = 0;
	min = 100;
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
}