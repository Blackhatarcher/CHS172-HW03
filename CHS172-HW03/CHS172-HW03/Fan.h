#pragma once
class Fan
{
private:
	int speed;
	bool on;
	double radius;
private:
	int GetSpeed();
	bool GetOn();
	double GetRadius();
	void SetSpeed();
	void SetOn();
	void SetRadius();
};