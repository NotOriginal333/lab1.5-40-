#include "Time.h"
#include <iostream>
#include <sstream>

using namespace std;

void Time::Init(Triad t) {
	triad = t;
}

void Time::Read() {
    int h, m, s;
    cout << "Enter hour: ";
    cin >> h;
    cout << "Enter minute: ";
    cin >> m;
    cout << "Enter second: ";
    cin >> s;
    triad.setHour(h);
    triad.setMin(m);
    triad.setSec(s);
}

void Time::Display() const {
    cout << "h: " << triad.getHour() << "\nm: " << triad.getMin() << "\ns: " << triad.getSec() << endl;
}

void Time::incremHour() {
    triad.incremHour();
}

void Time::incremMin() {
    triad.incremMin();
}

void Time::incremSec() {
    triad.incremSec();
}

void Time::moreMin(int n) {
    triad.setMin(triad.getMin() + n);
}

void Time::moreSec(int n) {
    triad.setSec(triad.getSec() + n);
}

std::string Time::toString() {
    stringstream sout;
    sout << triad.getHour() << ":" << triad.getMin() << ":" << triad.getSec();
    return sout.str();
}