#pragma once

class Fan {
private:
	// The speed of the fan
	int speed;
	// Whether or not the fan is on
	bool on;
	// The radius of the fan
	double radius;

public:
	// Construct a default fan
	Fan();
	
	// Getter and Setter for radius
	void setRadius(double);
	double getRadius();

	// Getter and Setter for speed
	void setSpeed(int);
	int getSpeed();

	// Turns fan on
	void turnOn();
	// Turns fan off
	void turnOff();
	// Getter for on
	bool getOn();

};