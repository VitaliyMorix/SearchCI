#include<iostream>
#include<istream>
#include<cmath>
#include<sstream>
#include "functionHeader.h"

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	std::cout << "Вас приветсвует SearchCI v1.5.0\n"
		<< "Программа для поиска доверительного интервала.\n"
		<< "{©Vaskin_Vitaliy v1.0}\n"
		<< "----------------------------------------------\n";
	//<<"Нажмите Enter, что бы продолжить.";
	system("pause");
	system("cls");
	int responce=1;
	do
	{
		int n = 0;
		std::string strMsgStart = "Введите, число измерений (от 1 до 15): ";
		errorCout(n, 1, 15,strMsgStart);
		strMsgStart += char(n);

		double* ptr = new double[n];

		for (int i = 0; i < n; i++)
		{
			//std::cout << i + 1 << ") ";
			std::string strMsgILoc = std::to_string(i) + ") ";
			std::cout << strMsgILoc;
			//std::cin >> ptr[i];
			//errorCout(ptr[i], strMsgILoc);
			std::string str;
			std::cin >> str;
			strToDouble(str,ptr[i]);
		}

		double Md = 0.0;
		for (int i = 0; i < n; i++)
		{
			Md += ptr[i];
		}
		Md /= n;

		for (int i = 0; i < n; i++)
		{
			ptr[i] = pow((ptr[i] - Md), 2);
		}

		double Ssi = 0.0;
		for (int i = 0; i < n; i++)
		{
			Ssi += ptr[i];
		}

		double rmsv = pow((Ssi / (n * (n - 1))), 0.5);
		double cS = 0.0;

		switch (n)
		{
		case 1: cS = 12.706; break;
		case 2: cS = 4.302; break;
		case 3: cS = 3.182; break;
		case 4: cS = 2.776; break;
		case 5: cS = 2.570; break;
		case 6: cS = 2.446; break;
		case 7: cS = 2.3646; break;
		case 8: cS = 2.306; break;
		case 9: cS = 2.262; break;
		case 10: cS = 2.228; break;
		case 11: cS = 2.201; break;
		case 12: cS = 2.179; break;
		case 13: cS = 2.16; break;
		case 14: cS = 2.145; break;
		case 15: cS = 2.131; break;
		default: std::cout << "Error!";
			break;
		}

		double ciw = rmsv * cS;
		int num = 0;
		std::cout << "Укажите, кол-во цифр после запятой: ";
		std::cin >> num;
		std::cout << "Ваш ответ: ";

		printf("(%.*lf ± %.*lf)", num, Md, num, ciw);

		//chose = 1;
		while (true)
		{
			std::cout << "\nПовторить измерения? (1-да, 0-нет) >> ";
			std::cin >> responce;
			if (responce != 1 && responce != 0)
			{
				std::cout << "\nПовторить измерения? (1-да, 0-нет) >> ";
				system("cls");
			}
			else 
			{
				system("cls"); 
				break;
			}
		}
		delete[] ptr;
	} while (responce == 1);
}