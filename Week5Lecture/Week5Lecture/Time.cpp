#include "Time.h"


// Implemnetation file for Lecture Week 5
// By: Gianluca Venditti 
//Date: October 4th, 2021

void Time::showTime(ostream& out) const
{
	out << hrs << ":"
		<< (mins < 10 ? "0" :"")<< mins << ":"
		<< (secs < 10 ? "0" :"") << secs;
}

void Time::setTime(int initialHrs, int initialMins, int initialSecs)
{
	hrs = (initialHrs > 0 && initialHrs <= 12) ? initialHrs : 12;

	mins = (initialMins > 0 && initialMins < 60) ? initialMins : 0;

	secs = (initialSecs > 0 && initialSecs < 60) ? initialSecs : 0;
}

/*
void Time::setTime(int initialHrs, int initialMins)
{
	setTime(initialHrs, initialMins, 0);
}

// our default constructor with paramaters
Time::Time(int initialHrs, int initialMins, int initialSecs)
{
	setTime(initialHrs, initialMins, initialSecs);
}
*/

Time::Time(string fileName)
{
	ifstream fin(fileName);
	if (!fin.is_open())
	{
		cout << "error opening input.dat file ";
		system("pause");
		exit(-1);
	}

	fin >> hrs >> mins >> secs; 
}


/*
Time::Time(int initialHrs, int initialMins, int initialSecs)
{
	setTime(initialHrs, initialMins, initialSecs);
}

Time::Time(int initialHrs, int initialMins, int initialSecs)
{
	setTime(initialHrs, initialMins, 0);
}

Time::Time(int initialHrs)
{
	setTime(initialHrs, 0, 0);
}

Time::Time()
{
	hrs = 12; 
	mins = secs = 0; 
}
*/