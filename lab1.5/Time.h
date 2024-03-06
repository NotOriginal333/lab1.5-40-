#pragma once
#include "Triad.h"
#include <string>

class Time
{
	Triad triad;
public:
	void Init(Triad);
	void Read();
	void Display() const;

	void incremHour();
	void incremMin();
	void incremSec();

	void moreMin(int n);
	void moreSec(int n);

	std::string toString();
};

//Створити клас Triad(трійка чисел); визначити методи збільшення полів на 1.
//Визначити клас - контейнер Time, що містить поле «трійка чисел» – трійка чисел
//описує годину, хвилину, секунду.Перевизначити методи збільшення полів на 1 і визначити
//методи збільшення часу на п секунд і хвилин.
//
