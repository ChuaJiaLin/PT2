//? EXERCISE 3: STRING MANIPULATIONS
//? file: custom_string.hpp

//?----------------------------------------------------------------------------------------
//? This file is fully given. You MUST NOT modify anything in this file.
//? This file is the declaration for the class 'CustomString'.
//?----------------------------------------------------------------------------------------

//CHERYL CHEONG KAH VOON
//A23CS0060

#ifndef CUSTOM_STRING_H
#define CUSTOM_STRING_H

class CustomString
{
private:
	string data;
    
public:
    CustomString(const string &_data = "abcdefgh");
	string getData() const;
	void setData(const string &_data);
	
    void pushFront(const string &s);
	void pushBack(const string &s);

	string pop(int index = 0, int count = 1);
	string popFront(int count = 1);
    string popBack(int count = 1);
	
    CustomString operator!() const;
	CustomString operator*(int count) const;
	double toDouble() const;
	CustomString toUpper() const;
};

#endif