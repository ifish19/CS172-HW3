#include "MyInteger.h"


MyInteger::MyInteger(int specifiedValue)
{
	specifiedValue = value;
}

int MyInteger::getValue() const
{
	return value;
}

bool MyInteger::isEven() const
{
	if(value % 2 == 0) // Checks if value is evenly divisible by 2
		return true;
	else
		return false;
}

bool MyInteger::isOdd() const
{
	if(value % 2 != 0) // Check if value isn't evenly divisible by 2
		return true;
	else
		return false;
}

bool MyInteger::isPrime() const
{
	// Check to see if value is divisible by any numbers less than it, excluding 1 and itself
	for(int i = 2; i < value; i++)
	{
		if(value % i == 0)
			return false;
	}
	return true;
}

bool MyInteger::isEven(int specifiedValue)
{
	if(specifiedValue % 2 == 0) // Checks if specifiedValue is evenly divisible by 2
		return true;
	else
		return false;
}

bool MyInteger::isOdd(int specifiedValue)
{
	if(specifiedValue % 2 != 0) // Checks if specifiedValue isn't evenly divisible by 2
		return true;
	else
		return false;
}

bool MyInteger::isPrime(int specifiedValue)
{
	// Check to see if specifiedValue is divisible by any numbers less than it, excluding 1 and itself
	for(int i = 2; i < specifiedValue; i++)
	{
		if(specifiedValue % i == 0)
			return false;
	}
	return true;
}

bool MyInteger::isEven(const MyInteger& i)
{
	return i.isEven();
}

bool MyInteger::isOdd(const MyInteger& i)
{
	return i.isOdd();
}

bool MyInteger::isPrime(const MyInteger& i)
{
	return i.isPrime();
}

bool MyInteger::equals(int specifiedValue) const
{
	if(specifiedValue == value)
		return true;
	else 
		return false;
}

bool MyInteger::equals(const MyInteger& i) const
{
	if(i.getValue() == value)
		return true;
	else
		return false;
}

int MyInteger::parseInt(const string& s)
{
	return stoi(s); // Call stoi() for converting string to int
}