#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	float a = 5.45, n = 5, y, p = 1, q, s;
	int i;
	for (i = 1; i <= n; i++)
	{
		cout << "¬ведите y" << i << endl;
		cin >> y;
		p = p*y / (i*i + 1);
	}
	q = 4 * p;
	s = 2 * a + q*sin(a);
	cout << "q=" << q << endl;
	cout << "s=" << s << endl;
}