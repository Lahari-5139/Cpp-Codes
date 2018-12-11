#include <iostream>
#include "Date.h"
using namespace std;
 
// Date constructor
Date::Date(int year, int month, int day)
{
    SetDate(year, month, day);
}
 
// Date member function
void Date::SetDate(int year, int month, int day)
{
    m_month = month;
    m_day = day;
    m_year = year;
}

int main()
{
	Date today(2018,06,11);
	//today.SetDate(2018,06,11);
	cout <<"year :" << today.getYear() << endl;
	cout <<"month :" << today.getMonth() << endl;
	cout <<"day :" << today.getDay() << endl;	
	return 0;
}
