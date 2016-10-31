#include <iostream>
using namespace std;
void main()
{
	float a = -1.4, m = 16, j = 1.8, w, r;
	while (j <= 3)
	{
		w = tan(a / 3) + exp(a / m);
		r = 0.9*sqrt(w + j) + abs(a*a - 1);
		j = j + 0.2;
		cout << "w=" << w << endl;
		cout << "r" << r << endl;
	}
}