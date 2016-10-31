#include<string>
#include<sstream>
#include<iostream>
using namespace std;
int main()
{
	string str, new_word;                                    // объ€вление переменных типа string
	cout << "Vvedite vashu stroku" << endl;
	getline(cin, str);                                       // ввод строки str
	stringstream s(str);                                     // заголовочный файл дл€ работы со строками
	for (string word; s >> word;) 
		new_word = new_word + word.at(word.length() - 1);    // поиск последних букв слов и добавление их в переменную new_word
	cout << new_word << endl;
	return 0; 
}

 