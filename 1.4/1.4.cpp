/*
* Done by
* Student name : Bohdan Petroshchuk
* Student group : 121
* Variant : 12
* Prac 1.4
*/

#include <Windows.h>
#include <iostream>
#include <locale>

int main()
{
	setlocale(LC_CTYPE, "ukr");
	SetConsoleOutputCP(1251);

	//�������� 1
	int a1_1, an_1, adiff_1, n_1;

	std::cout << "������ ������ ���� �������: " << std::endl;
	std::cin >> a1_1;
	std::cout << "������ ������ ��������: " << std::endl;
	std::cin >> adiff_1;
	std::cout << "������ ����� �����: ";
	std::cin >> n_1;
	std::cout << n_1 << "-� ���� ������� ���� ���������� : " << (an_1 = a1_1 + (n_1 - 1) * adiff_1) << std::endl;

	//�������� 2
	int n_2;
	float oddmedian_2 = 0;
	std::cout << "������ �����:" << std::endl;
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
	std::cout << "������ ����������� �������� ����� �� 0 �� " << n_2 << "�������: " << oddmedian_2 << std::endl;

	//�������� 3
	int a1_3, asum_3 = 0, amult_3, n_3;
	double amedian_3;

	std::cout << "������ ������ ���� �������: " << std::endl;
	std::cin >> a1_3;
	std::cout << "������ ��������� ��������: " << std::endl;
	std::cin >> amult_3;
	std::cout << "������ ����� ���������� �����: ";
	std::cin >> n_3;
	for (int i = 1; i <= n_3; i++)
	{
		asum_3 += (a1_3 * (amult_3 ^ ((i))));
	}
	amedian_3 = asum_3 / n_3;
	std::cout << "������ ����������� ����� ���� ������� ���� ����������: " << amedian_3 << std::endl;

	return 0;
}