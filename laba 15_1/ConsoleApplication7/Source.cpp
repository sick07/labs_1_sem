#include <iostream>
using namespace std;
int cor(int a, int b, int n);
int func(int x, int h);
int main()
{
	int a = 1, b = 3, n = 200;
	int x;
	cout << "a = "; 
	cin >> a;
	cout << "b = "; 
	cin >> b;
	cout << "n = "; 
	cin >> n;
	cout << "\n";
	cout << "Primernyi koren uravneniya: " << cor(a, b, n) << endl;
}
int func(int x)
{
	int s;
	s = (sin(x) + x*x*x);
	return s;
}
int cor(int a, int b, int n)
{
	int h, x, s = 0;
	h = (b - a) / n;
	x = a;
	if (x < (b - h))
		s = s + h*((func(x) + func(x) + h) / 2);
	else
		return 0;
}
