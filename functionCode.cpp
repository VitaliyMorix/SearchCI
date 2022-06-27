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