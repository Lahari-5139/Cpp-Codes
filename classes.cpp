#include<iostream>

class DataClass
{
public:
	int year;
	int month;
	int day;

	void print()
	{
		std::cout << year << "/" << month << "/" << day << std::endl;
	}
};

int main()
{
	DataClass today {2020 , 10 , 14};
	today.print();
	today.day = 16;
	today.print();
	return 0;
}
