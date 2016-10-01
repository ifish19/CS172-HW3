#include "QuadraticEquation.h"
#include<cmath> // For sqrt()

QuadraticEquation::QuadraticEquation(double newA, double newB, double newC)
{
	a = newA;
	b = newB;
	c = newC;
}

double QuadraticEquation::getA()
{
	return a;
}

double QuadraticEquation::getB()
{
	return b;
}

double QuadraticEquation::getC()
{
	return c;
}

double QuadraticEquation::getDiscriminant()
{
	return (b * b) - (4 * a * c); // Calculate and return the value of the discriminant
}

double QuadraticEquation::getRoot1()
{
	if(getDiscriminant() >= 0) // Discriminant has to be positive to return a value other than 0
		return ((0 - b) + sqrt(getDiscriminant())) / (2 * a); // Calculate and return the added root
	else
		return 0;
}

double QuadraticEquation::getRoot2()
{
	if(getDiscriminant() >= 0) // Discriminant has to be positive to return a value other than 0
		return ((0 - b) - sqrt(getDiscriminant())) / (2 * a); // Calculate and return the subtracted root
	else
		return 0;
}