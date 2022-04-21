#pragma once

#include <iostream>

using namespace std;

class Number {

public:
	Number(double number);
	Number();

	bool operator<(Number& number);
	bool operator>(Number& number);
	bool operator!=(Number& number);
	bool operator==(Number& number);

	Number& operator+(Number& number);
	Number& operator-(Number& number);
	Number& operator*(Number& number);
	Number& operator/(Number& number);

	operator float();
	operator double();

	double getValue();

private:
	double value;
};