#pragma once
#include<iostream>
#include<istream>

template<typename T>
void errorCout(T&);

template<typename T>
void errorCout(T&, const std::string& msgIn);

template<typename T>
void errorCout(T&, const T&, const T&,const std::string & msgIn);

void strToDouble(std::string&, double&);

template<typename T>
void errorCout(T& inputCount)
{
	while (!(std::cin >> inputCount))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	//return true;
}

template<typename T>
void errorCout(T& inputCount, const T& minCount, const T& maxCount, const std::string& msgIn)
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

void strToDouble(std::string& snum, double& num) 
{
	std::stringstream sstr;
	for (auto const& val : snum)
		sstr << (val == ',' ? '.' : val);
	sstr >> num;
}