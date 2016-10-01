// ninepointsix.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <cmath>

using namespace std;

class QuadraticEquation
{
private:
	double a;
	double b;
	double c;

public:
	double geta()
	{
		return a;
	}
	double getb()
	{
		return b;
	}
	double getc()
	{
		return c;
	}
	double getdiscriminant()
	{
		return b * b - 4 * a * c;
	}

	double getroot1()
	{
		if (getdiscriminant() < 0)
			return 0;
		else
		{
			return (-b + sqrt(getdiscriminant())) / (2 * a);
		}
	}

	double getroot2()
	{
		if (getdiscriminant() < 0)
			return 0;
		else
		{
			return (-b - sqrt(getdiscriminant())) / (2 * a);
		}
	}
	QuadraticEquation::QuadraticEquation(double f, double g, double h) {
		f = a;
		g = b;
		h = c;
	}
};

int main()
{
	cout << "Please enter values for a, b, and c:";
	double a, b, c, discriminant, r1, r2;
	cin >> a >> b >> c;

	QuadraticEquation equation( a, b, c);
	discriminant = equation.getdiscriminant();
	if (discriminant < 0)
	{
		cout << "The equation has no real roots." << endl;
	}
	else if (discriminant = 0)
	{
		cout << " The root is " << equation.getroot1() << endl;
	}
	else
	{
		cout << " The roots are " << equation.getroot1 << " and "
			<< equation.getroot2() << endl;
	}
	return 0;
}
