#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	float w, r, j, a = -1.4, m = 16;
	for (int n = 1; n <= 3; n++)
	{
		std::cout << "¬ведите j " << endl;
		std::cin >> j;
		w = tan(a / 3) + exp(a / m);
		r = sqrt(w + j) + abs(a*a - 1);
		std::cout << "w=" << w << endl;
		std::cout << "r=" << r << endl;
	}
}
