#pragma once
/*#include<iostream>
#include<istream>*/

template<typename T>
void errorCout(T&);

template<typename T>
void errorCout(T&, const std::string& msgIn);

template<typename T>
void errorCout(T&, const T&, const T&,const std::string & msgIn);

void strToDouble(std::string&, double&);
