#include "EvenNumber.h"

EvenNumber::EvenNumber()
{
	value = 0;
}

EvenNumber::EvenNumber(int specifiedValue)
{
	if(specifiedValue % 2 == 0) // specifiedValue has to be even to be set as value
		value = specifiedValue;
}

int EvenNumber::getValue()
{
	return value;
}

int EvenNumber::getNext()
{
	return value + 2; // Adds two to get next even number
}

int EvenNumber::getPrevious()
{
	return value - 2; // Subtracts two to get previous even number
}