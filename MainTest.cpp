#include<iostream>
#include "Fan.h"
#include "QuadraticEquation.h"
#include "EvenNumber.h"
#include "StringSorter.h"
#include "MyInteger.h"
using namespace std;



int main()
{
	///////////////////////////////////////////////////////////////////

	// EX03_01

	Fan fan1; // Creates a fan named fan1
	fan1.turnOn(); // Turn on fan1
	fan1.setSpeed(3); // Set fan1's speed to 3
	fan1.setRadius(10); // Set fan1's radius to 10

	Fan fan2; // Creates a fan named fan2
	fan2.turnOff(); // Turn off fan2
	fan2.setSpeed(2); // Set fan2's speed to 2
	fan2.setRadius(5); // Set fan2's radius to 5

	// Display fan1's attributes
	cout << "fan1's speed is " << fan1.getSpeed() 
		<< " and radius is " << fan1.getRadius() 
		<< " and it is " ;
		if (fan1.getOn() == true)
			cout << "turned on" << endl;
		else
			cout << "turned off" << endl;

	// Display fan2's attributes
	cout << "fan2's speed is " << fan2.getSpeed() 
		<< " and radius is " << fan2.getRadius() 
		<< " and it is " ;
	if (fan2.getOn() == true)
		cout << "turned on" << endl;
	else
		cout << "turned off" << endl;

	////////////////////////////////////////////////////////

	// EX03_02

	double enteredA;
	double enteredB;
	double enteredC;

	// Stores inputed value in enteredA/enteredB/enteredC
	cout << "Enter a value for a: ";
	cin >> enteredA;
	cout << "Enter a value for b: ";
	cin >> enteredB;
	cout << "Enter a value for c: ";
	cin >> enteredC;

	// Creates object for enteredA, enteredB, and enteredC as a, b, and c
	QuadraticEquation result1(enteredA, enteredB, enteredC);

	if(result1.getDiscriminant() <= 0) // Checks if getDiscriminant() is negative
		cout << "The equation has no real roots" << endl;
	else if (result1.getDiscriminant() == 0) // Checks if getDiscriminant() is zero
	{
		cout << "The one resulting root from a, b, c values of " << result1.getA() << ", " << result1.getB()
			<< ", and " << result1.getC() << " is " << result1.getRoot1() << "." << endl;
	}
	else // If getDiscriminant is neither zero nor negative, it must be positive
	{
		cout << "The two resulting roots from a, b, c values of " << result1.getA() << ", " << result1.getB()
			<< ", and " << result1.getC() << " are " << result1.getRoot1() << " and " << result1.getRoot2() << "." << endl;
	}

	/////////////////////////////////////////////////////////////////////////////////

	// EX03_03
		
	// Creates object for value 16
	EvenNumber value1(16);

	cout << "value1 is " << value1.getValue() << "." << endl;

	cout << "The next even number after value1 is " << value1.getNext() << "." << endl;

	cout << "The previous even number before value1 is " << value1.getPrevious() << "." << endl;

	//////////////////////////////////////////////////////////////////////////////////

	// EX03_04

	string enteredString;
	cout << "Enter a string s: ";
	cin >> enteredString;

	cout << "The sorted string is " << sort(enteredString) << endl;

	///////////////////////////////////////////////////////////////////////////////

	// EX03_04

	int enteredInt;

	cout << "Enter an integer to be given to int1: ";
	cin >> enteredInt;

	MyInteger int1(enteredInt);

	// Test getValue()
	cout << "int1's value is " << int1.getValue() << endl;
	
	// Test isEven()
	if(int1.isEven() == true)
		cout << "int1 is even" << endl;
	else
		cout << "int1 is not even" << endl;

	// Test isOdd()
	if(int1.isOdd() == true)
		cout << "int1 is odd" << endl;
	else
		cout << "int1 is not odd" << endl;

	// Test isPrime()
	if(int1.isPrime() == true)
		cout << "int1 is prime" << endl;
	else 
		cout << "int1 is not prime" << endl;


	int newInt;

	cout << "Specify a new integer: ";
	cin >> newInt;

	// Test isEven(int)
	if(int1.isEven(newInt) == true)
		cout << "Specified integer is even" << endl;
	else
		cout << "Specified integer is not even" << endl;

	// Test isOdd(int)
	if(int1.isOdd(newInt) == true)
		cout << "Specified integer is odd" << endl;
	else
		cout << "Specified integer is not odd" << endl;

	// Test isPrime(int)
	if(int1.isPrime(newInt) == true)
		cout << "Specified integer is prime" << endl;
	else
		cout << "Specified integer is not prime" << endl;


	cout << "Enter an integer to be given to int2: ";
	cin >> enteredInt;

	MyInteger int2(enteredInt);
	
	// Test isEven(const MyInteger&)
	if(int1.isEven(int2) == true)
		cout << "int2 is even" << endl;
	else 
		cout << "int2 is not even" << endl;

	// Test isOdd(const MyInteger&)
	if(int1.isOdd(int2) == true)
		cout << "int2 is odd" << endl;
	else
		cout << "int2 is not odd" << endl;

	// Test isPrime(const MyInteger&)
	if(int1.isPrime(int2) == true)
		cout << "int2 is prime" << endl;
	else
		cout << "int2 is not prime" << endl;

	// Test equals(const MyInteger&)
	if(int1.equals(int2) == true)
		cout << "int1 equals int2" << endl;
	else
		cout << "int1 does not equal int2" << endl;


	cout << "Specify another new integer: ";
	cin >> enteredInt;

	// Test equals(int)
	if(int1.equals(enteredInt) == true)
		cout << "Specified integer equals int1" << endl;
	else
		cout << "Specified integer does not equal int1" << endl;


	string s;

	cout << "Enter a string: ";
	cin >> s;

	// Test parseInt(const string&)
	cout << "The string's value when converted to an integer is " << int1.parseInt(s) << endl;
	

	return 0;
}
