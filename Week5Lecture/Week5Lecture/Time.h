#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

//Specification file for Lecture Week 5
// By: Gianluca Venditti 
//Date: October 4th, 2021


class Time
{
public:
	void setTime(int /*hrs*/, int /*mins*/, int = 0/*secs*/);  //overloaded function //Modify setTime function to have a default parameter for seconds
	//void setTime(int /*hrs*/, int/*mins*/); // seconds will be assigned 0
	void showTime(ostream& /*output stream*/) const;

	//accessing our private members out of the class 
	int getHrs() const { return hrs; }
	int getMins() const { return mins; }
	int getSecs() const { return secs; }

	//constructors, functions are called everytime an object is created. Purpose is to initalize private members, no return type
	//Time(int /*hrs*/, int /*mins*/, int /*secs*/);
	//Time(int /*hrs*/, int /*mins*/);
	//Time(int /*hrs*/);
	//Time(); // default constructor
	Time(int = 12 /*hrs*/, int = 0 /*mins*/, int = 0/*secs*/); // default paramters
	Time(string /*input file*/);

private:
	int hrs;
	int mins;
	int secs;
};