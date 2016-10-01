#pragma once

class EvenNumber
{
private:
	// Even number value
	int value;

public:
	// Creates an EvenNumber object for 0
	EvenNumber();

	// Creates an EvenNumber object with a specified value
	EvenNumber(int);

	// Gets the EvenNumber value for current object
	int getValue();

	// Gets the EvenNumber value for the object after the current object
	int getNext();

	// Gets the EvenNumber value for the object before the current object
	int getPrevious();

};