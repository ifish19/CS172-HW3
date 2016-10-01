#pragma once
#include<string> // For string and stoi()
using namespace std;

class MyInteger
{
private: 
	int value; // Stores int value represented by object

public:
	// Creates an object for specified int value
	MyInteger(int);

	// Gets the int value
	int getValue() const;

	// Returns true if value is even
	bool isEven() const;
	// Returns true if value is odd
	bool isOdd() const;
	// Returns true if value is prime
	bool isPrime() const;

	// Returns true if specified value is even
	bool isEven(int);
	// Returns true if specified value is odd
	bool isOdd(int);
	// Returns true if specified value is prime
	bool isPrime(int);

	// Returns true if specified value is even
	bool isEven(const MyInteger&);
	// Returns true if specified value is odd
	bool isOdd(const MyInteger&);
	// Returns true if specified value is prime
	bool isPrime(const MyInteger&);

	// Returns true if specified value is equal to value in the object
	bool equals(int) const;
	// Returns true if specified value is equal to value in the object
	bool equals(const MyInteger&) const;

	// Converts a string to an int
	int parseInt(const string&);
};