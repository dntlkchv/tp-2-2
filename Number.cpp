#include <iostream>
#include "Number.h"

using namespace std;


Number::Number(double number)
{
	this->value = number;
}

Number::Number()
{
	this->value = 0;
}

bool Number::operator<(Number& number)
{
	return this->value < number.value;
}

bool Number::operator>(Number& number)
{
	return this->value > number.value;
}

bool Number::operator==(Number& number)
{
	return this->value == number.value;
}


bool Number::operator!=(Number& number)
{
	return this->value != number.value;
}

Number& Number::operator+(Number& number)
{
	Number result = Number(this->value + number.value);
	return result;
}

Number& Number::operator-(Number& number)
{
	Number result = Number(this->value - number.value);
	return result;
}

Number& Number::operator*(Number& number)
{
	Number result = Number(this->value * number.value);
	return result;
}

Number& Number::operator/(Number& number)
{
	Number result = Number(this->value / number.value);
	return result;
}

Number::operator float()
{
	return (float)this->getValue();
}

Number::operator double()
{
	return  this->getValue();
}

double Number::getValue()
{
	return this->value;
}
