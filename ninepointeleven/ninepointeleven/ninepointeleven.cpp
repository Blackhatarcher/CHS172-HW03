// ninepointeleven.cpp : Defines the entry point for the console application.
//

#include <iostream>

using namespace std;

class EvenNumber
{
private:

	int value;
	int next;
	int previous;

public:
	EvenNumber()
	{
		value = 0;
	}
	int getValue()
	{
		return value;
	}
	int getNext()
	{
		return next;
	}
	int getPrevious()
	{
		return previous;
	}
	void getValue(int value)
	{
		this->value = value;
	}
	void getNext(int next)
	{
		this->next = next;
	}
	void getPrevious(int previous)
	{
		this->previous = previous;
	}
};

int main()
{

	EvenNumber number;
	number.getValue(16);
	number.getNext(18);
	number.getPrevious(14);
	cout << "Value: " << number.getValue() << endl;
	cout << "Next Value: " << number.getNext() << endl;
	cout << "Previous Value: " << number.getPrevious() << endl;

	return 0;

}
