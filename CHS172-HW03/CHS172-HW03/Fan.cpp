#include <iostream>
#include "Fan.h"
using namespace std;

class Fan
{
private:
	//The speed of can, needs to be 1 , 2, or 3
	int speed;
	//The status of the fan on or off
	bool on;
	//radius of the fan
	double radius;
public:
	//getters and setters
	void SetSpeed(int x) {
		speed = x;
	}
	void SetOn(bool x) {
		on = x;
	}
	void SetRadius(double x) {
		radius = x;
	}
	//no arg constructor
	Fan() {
		SetSpeed(1);
		SetOn(false);
		SetRadius(5);
	}
};