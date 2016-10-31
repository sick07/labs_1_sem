#include <iostream>
using namespace std;
void slovo(char *str);
void main(void)
{
	setlocale(LC_CTYPE, "Russian");
	char *T;
	int n;
	n = 1000000000;
	T = new char[n + 1];
	cout << "Vvedite stroku, posle kajdogo slova stav`te '_'\n";
	cin >> T;
	slovo(T);
	delete[] T;
}
void slovo(char *str)
{
	char c, *pc;
	int i, n = 10000000;
	c = '_';
	pc = &c;
	cout << "Slovo, sostavlennoe iz poslednih bukv vseh slov: ";
	for (i = 0; i < n; i++)
		if (str[i] == *pc)
			cout << *(str + i - 1);
	cout << "\n";
	delete[]str;
}