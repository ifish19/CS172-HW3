#include "Fan.h"

Fan::Fan()
{
	speed = 1; // Defult speed is 1
	on = false; // Fan is off by defult
	radius = 5; // Defult radius is 5
}

void Fan::setRadius(double newRadius)
{
	radius = newRadius; // Sets a new radius
}

double Fan::getRadius()
{
	return radius;
}

void Fan::setSpeed(int newSpeed)
{
	if (newSpeed >= 1 && newSpeed <= 3) // Doesn't allow speed that isn't 1, 2, or 3
		speed = newSpeed; // Sets new speed if the new speed is 1, 2, or 3
}

int Fan::getSpeed()
{
	return speed;
}

void Fan::turnOn()
{
	on = true;
}

void Fan::turnOff()
{
	on = false;
}

bool Fan::getOn()
{
	return on;
}