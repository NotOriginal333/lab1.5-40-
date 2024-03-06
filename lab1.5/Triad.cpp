#include "Triad.h"
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

void Triad::incremHour() {
	int tmp = getHour();
	setHour(++tmp);
}

void Triad::incremMin() {
	int tmp = getMin();
	setMin(++tmp);
}

void Triad::incremSec() {
	int tmp = getSec();
	setSec(++tmp);
}

std::string Triad::toString() {
	std::stringstream sout;
	sout << getHour() << ":" << getMin() << ":" << getSec();
	return sout.str();
}

bool Triad::Init(int h, int m, int s) {
	if (h <= 23 && h >= 0 && m <= 59 && m >= 0 && s <= 59 && s >= 0) {
		setHour(h);
		setMin(m);
		setSec(s);
		return true;
	}
	else return false;
}

void Triad::Read() {
	int h, m, s;
	do {
		cout << "Enter hour: ";
		cin >> h;
		cout << "Enter minute: ";
		cin >> m;
		cout << "Enter second: ";
		cin >> s;
	} while (!Init(h, m, s));
	
}

void Triad::Display() const {
	cout << "h: " << getHour() << "\nm: " << getMin() << "\ns: " << getSec() << endl;
}