#include <iostream> 
#include <locale.h> 
 
using namespace std; 
float mult(int k, ...) 
{ 
	int *p = &k;  
 	int mult = 1;
 	for (; k != 0; k--)
 		mult *= *(++p);
 	return mult;
} 
int main()
{
 	cout << "Mult = " << mult(3, 1, 2, 7) << "\n";
 	cout << "Mult = " << mult(7, 1, 4, 7, 2, 2, 3, 5) << "\n";
	cout << "Mult = " << mult(11, 1, 4, 7, 2, 2, 3, 5, 2, 5, 3, 4, 10) << "\n";
 	return 0;
} 