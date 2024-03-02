#pragma once
#include <iostream>

class Variable {
	double zmienna;
public:
	Variable()
	{
		zmienna = 0; //domyslnie konstruktor daje wartosc zero
	}


	void setInt(int);
	void setDouble(double);
	void setChar(char);
	void setShort(short);
	void setUnsigned(unsigned);
	int getInt();
	double getDouble();
	short getShort();
	char getChar();
	unsigned getUnsigned();
	~Variable() {} //wiem ze nie trzeba ale zrobilem dla nawyku

};