// CHS172-HW03.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>

using namespace std;

class Fan
{
private:
	int speed;
	bool on;
	double radius;
public:
	//non argument constructor
	Fan()
	{
		speed = 1;
		on = false;
		radius = 5;
	}
	int getSpeed() 
	{
		return speed;
	}
	void setSpeed(int x)
	{
		this->speed = x; 
	}
	bool isOn()
	{
		return on; 
	}
	void setOn(bool x)
	{
		this->on = x;
	}
	double getRadius()
	{
		return radius;
	}
	void setRadius(double x)
	{
		this->radius = x;
	}
};

int main()
{
	Fan fan;
	fan.setOn(true);
	fan.setSpeed(3);
	fan.setRadius(10);

	cout << "Properties of First Fan:" << endl;
	cout << "Fan Off/On:" << fan.isOn() << endl; 
	cout << "Fan Speed:" << fan.getSpeed() << endl;
	cout << "Fan Radius:" << fan.getRadius() << endl;

	Fan fan1;
	fan1.setOn(false);
	fan1.setSpeed(2);
	fan1.setRadius(5);

	cout << "Properties of Second Fan:" << endl;
	cout << "Fan Off/On:" << fan1.isOn() << endl; 
	cout << "Fan Speed:" << fan1.getSpeed() << endl;
	cout << "Fan Radius:" << fan1.getRadius() << endl;

	return 0;
}

