#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	float x, y, a, d = pow(5.5, -4);
	int i;
	for (i = 1; i <= 6; i++)
	{
		cout << "x=" << endl;
		cin >> x;
		cout << "y="<<endl;
		cin >> y;
		a = (exp(x)*sin(x)) / (d + cos(y));
		cout << "a=" << a << endl;
	}
}