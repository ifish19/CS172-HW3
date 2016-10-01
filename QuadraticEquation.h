#pragma once

class QuadraticEquation
{
private:
	// The three coeficients in the quadratic equation
	double a;
	double b;
	double c;

public:
	// Constructor for the arguments for a, b, and c
	QuadraticEquation(double, double, double);

	// Get functions for a, b, and c
	double getA();
	double getB();
	double getC();

	// Calculates and returns the discriminant
	double getDiscriminant();

	// Calculates and returns the added root
	double getRoot1();
	// Calculates and returns the subtracted root
	double getRoot2();
};