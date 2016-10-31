#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	float x, y, q;
	int i;
	q = 0;
	for (i = 1; i <= 6; i++)
	{
		cout << "¬ведите х" << endl;
		cin >> x;
		cout << "¬ведите y" << endl;
		cin >> y;
		q = q + x*y;
	}
	cout << "q=" << q << endl;
}