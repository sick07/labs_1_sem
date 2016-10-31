#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
	string str, max="0", min="000000000000000000000";
	cout << "Vvedite vashu stroku" << endl;
	getline(cin, str);
	stringstream s(str);
	for (string word; s >> word;)
	{
		if (max.size() < word.size())
			max = word;
		if (min.size() > word.size())
			min = word;
	}
	cout << "Samoe dlinnoe slovo: " << max << endl;
	cout << "Samoe korotkoe slovo: " << min << endl;
}