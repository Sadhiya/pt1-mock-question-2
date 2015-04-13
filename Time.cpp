#include "Time.h"


Time::Time(int h, int m)
{
	hr = h;
	min = m;
}


Time::~Time()
{
}

void Time::set(int h, int m)
{
	hr = h;
	min = m;
}

void Time::get(int &hours, int &minutes)
{ 
	hours = hr;
	minutes = min;

}

std::ostream& operator<<(ostream& os, const Time& obj)
{
	return os << obj.hr << ":" << obj.min << std::endl;

}
Time &Time::operator++()
{
	++min;
	if (min > 60)
	{
		min = 0;
		++hr;
	}
	return *this;
}

Time Time::operator++(int)
{
	Time t(*this);
	operator++();
	return t;
}
