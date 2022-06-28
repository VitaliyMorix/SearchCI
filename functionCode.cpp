/*#pragma once
//#pragma comment(lib, "functionCode.cpp")
#include<iostream>
#include<istream>
#include "functionHeader.h"

//std::string message

template<typename T>
const void errorCout(T &inputCount)
{
	while (!(std::cin >> inputCount))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

template<typename T>
const void errorCout(T &inputCount,const T &maxCount, const T &minCount)
{
	while (!(std::cin >> inputCount))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	if (inputCount < minCount || inputCount > maxCount);
	else break;
}

template
const void errorCout<int>(int&);
template
void errorCout<int>(int&, const int&, const int&);

template
const void errorCout<int>(int&);
template
void errorCout<double>(double&, const double&, const double&);
*/

#include<iostream>
#include<istream>
#include<sstream>
#include<limits>
#include<string>
#include "functionHeader.h"

/*template<typename T>
void errorCout(T& inputCount)
{
	while (!(std::cin >> inputCount))
	{
		std::cin.clear();
		//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	}
	//return true;
}

template<typename T>
void errorCout(const T& inputCount, const T& minCount, const T& maxCount, const std::string& msgIn)
{
	while (true)
	{
		std::cout << msgIn;
		while (!(std::cin >> inputCount))
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			system("cls");
			std::cout << msgIn;
		}
		if (inputCount < minCount || inputCount > maxCount) system("cls");
		else break;
	}
	//return true;
}


template<typename T>
void errorCout(T& inputCount, const std::string& msgIn)
{

	while (!(std::cin >> inputCount))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << msgIn;
	}
}
*/

void errorCout(int& inputCount, int& minCount, int& maxCount, std::string msgIn)
{
	while (true)
	{
		std::cout << msgIn;
		while (!(std::cin >> inputCount))
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			system("cls");
			std::cout << msgIn;
		}
		if (inputCount < minCount || inputCount > maxCount) system("cls");
		else break;
	}
}

void strToDouble(std::string& snum, double& num) 
{
	std::stringstream sstr;
	for (auto const& val : snum)
		sstr << (val == ',' ? '.' : val);
	sstr >> num;
}