#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int k;
	puts("�� ������� ��� ��������� � ����? (1-��, 2-���)");
	std::cin >> k;
	switch (k)
	{
	case 2: puts("�� � ���.");
		break;
	case 1: puts("������� ���� ���������? (1-�����, 2-�������)");
	{   std::cin >> k;
	switch (k)
	{
	case 1: puts("��� ������"); break;
	case 2: puts("��� ������"); break;
	default:;
	}
	}
	default:;
	}
	return 0;
}