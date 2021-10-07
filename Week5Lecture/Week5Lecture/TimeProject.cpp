#include "Time.h"



// client code for time project 

void showTime(const Time& timeObject) // can have the same name as a memember function
{
	cout << "Class starts at " << timeObject.getHrs() << ":"
		<< timeObject.getMins() << ":"
		<< timeObject.getSecs() << endl;
}

/*
Time getUserTime()
{
	int hh, mm, ss;
	cout << "enter hour, minute and seconds: ";
	cin >> hh >> mm >> ss; 
	Time userTime(hh, mm, ss);

	return userTime; 
}
*/

void getUserTime(Time& timeObject)
{
	int hh, mm, ss;
	cout << "enter hour, minute and seconds: ";
	cin >> hh >> mm >> ss;
	timeObject.setTime(hh, mm, ss);
}

void DaylightSaving(Time& timeObject)
{
	timeObject.setTime(timeObject.getHrs() + 1, timeObject.getMins(), timeObject.getSecs());
}


int main()
{
	Time timeOne;  // creating object //calling default constructor
	timeOne.setTime(785, 86, 6);
	timeOne.showTime(cout);

	cout << endl;

	Time timeTwo("input.dat");
	//timeTwo.showTime(cout);
	//showTime(timeTwo);
	//timeTwo = getUserTime();
	//getUserTime(timeTwo); 

	cout << endl;

	Time timeThree(6, 15);
	timeThree.showTime(cout);

	cout << "after daylight savings: " << endl; 
	DaylightSaving(timeThree);
	timeThree.showTime(cout);
	cout << endl;


	system("pause");
}