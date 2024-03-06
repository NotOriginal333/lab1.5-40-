#include "Time.h"
#include <iostream>

using namespace std;

int main() {
	Time t1, t2;
	Triad tr1;

	t1.Read();
	t1.Display();
	cout << t1.toString() << endl;

	tr1.Read();
	t2.Init(tr1);
	t2.Display();
	cout << tr1.toString() << endl;

	t2.incremHour();
	t2.incremMin();
	t2.incremSec();
	t2.Display();

	int n;
	cout << "(minute) n = "; cin >> n;
	t2.moreMin(n);
	cout << "(second) n = "; cin >> n;
	t2.moreSec(n);
	t2.Display();
}