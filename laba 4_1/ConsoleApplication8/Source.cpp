#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int k;
	puts("Вы учитесь или работаете в БГТУ? (1-да, 2-нет)");
	std::cin >> k;
	switch (k)
	{
	case 2: puts("Ну и зря.");
		break;
	case 1: puts("Учитесь либо работаете? (1-учусь, 2-работаю)");
	{   std::cin >> k;
	switch (k)
	{
	case 1: puts("Это хорошо"); break;
	case 2: puts("Это хорошо"); break;
	default:;
	}
	}
	default:;
	}
	return 0;
}