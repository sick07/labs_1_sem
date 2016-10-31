#include <iostream>
using namespace std;
void main()
{
	float a = 5.45, n = 5, s, q, y[] = { 2.1, 7.7, -4, 5, 9 }, p;
	int i;
	p = 1;
	for (i = 0, i <= 4; i++;)
		p = p*y[i] / (i*i + 1);
	q = 4 * p;
	s = 2 * a + q*sin(a);
	cout << "s=" << s << endl;
}