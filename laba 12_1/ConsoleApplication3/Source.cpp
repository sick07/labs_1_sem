#include<string>
#include<sstream>
#include<iostream>
using namespace std;
int main()
{
	string str, new_word;                                    // ���������� ���������� ���� string
	cout << "Vvedite vashu stroku" << endl;
	getline(cin, str);                                       // ���� ������ str
	stringstream s(str);                                     // ������������ ���� ��� ������ �� ��������
	for (string word; s >> word;) 
		new_word = new_word + word.at(word.length() - 1);    // ����� ��������� ���� ���� � ���������� �� � ���������� new_word
	cout << new_word << endl;
	return 0; 
}

 