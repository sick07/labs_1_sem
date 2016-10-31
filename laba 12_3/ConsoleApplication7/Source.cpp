#include <iostream>
#include <string>
#include <sstream>
using namespace std;
void main()
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
}
