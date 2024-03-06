#pragma once
#include <string>

class Triad
{
	int hour, min, sec;
public:
	bool Init(int h, int m, int s);
	void Read();
	void Display() const;

	void setHour(int h) { hour = h; };
	void setMin(int m) { min = m; };
	void setSec(int s) { sec = s; };

	int getHour() const { return this->hour; };
	int getMin() const  { return this->min; };
	int getSec() const { return this->sec; };

	std::string toString();

	void incremHour();
	void incremMin();
	void incremSec();
};

