/*
* Done by
* Student name : Bohdan Petroshchuk
* Student group : 121
* Variant : 12
* Lab 1.5
*/

#include <Windows.h>
#include <iostream>
#include <locale>

int main()
{
	setlocale(LC_CTYPE, "ukr");
	SetConsoleOutputCP(1251);

	//Завдання 1
	int a1_1, an_1, adiff_1, n_1;

	std::cout << "Введіть перший член прогресії: " << std::endl;
	std::cin >> a1_1;
	std::cout << "Введіть різницю прогрессії: " << std::endl;
	std::cin >> adiff_1;
	std::cout << "Введіть номер члену: ";
	std::cin >> n_1;
	std::cout << n_1 << "-й член прогресії буде дорівнювати : " << (an_1 = a1_1 + (n_1 - 1) * adiff_1) << std::endl;

	//Завдання 2
	int n_2;
	float oddmedian_2 = 0;
	std::cout << "Введіть число:" << std::endl;
	std::cin >> n_2;
	for (int i = 0; i <= n_2; i++)
	{
		if ((i % 2) != 0)
		{
			oddmedian_2 += i;
		}
	}
	if (n_2 % 2 != 0)
	{
		oddmedian_2 /= (n_2 / 2 + 1);
	}
	std::cout << "Середнє арифметичне непарних числе від 0 до " << n_2 << "дорівнює: " << oddmedian_2 << std::endl;

	//Завдання 3
	int a1_3, asum_3 = 0, amult_3, n_3;
	double amedian_3;

	std::cout << "Введіть перший член прогресії: " << std::endl;
	std::cin >> a1_3;
	std::cout << "Введіть знаменник прогрессії: " << std::endl;
	std::cin >> amult_3;
	std::cout << "Введіть номер останнього члену: ";
	std::cin >> n_3;
	for (int i = 1; i <= n_3; i++)
	{
		asum_3 += (a1_3 * (amult_3 ^ ((i))));
	}
	amedian_3 = asum_3 / n_3;
	std::cout << "Середнє арифметичне чисел цієї прогресії буде дорівнювати: " << amedian_3 << std::endl;

	return 0;
}