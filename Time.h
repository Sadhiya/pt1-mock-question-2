#pragma once
#include <iostream>
#include <string.h>
using namespace std;
class Time
{
private:
	int hr;
	int min;
public:
	friend std::ostream &operator <<(std::ostream &, const Time &);
	Time(int, int);
	Time();
	~Time();
	void set(int, int);
	void get(int &, int &);
	Time &operator++();
	Time operator++(int);
	
};

ostream &operator <<(ostream &, const Time &);
