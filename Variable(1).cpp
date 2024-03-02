// reinterpred.cpp : Ten plik zawiera funkcjê „main”. W nim rozpoczyna siê i koñczy wykonywanie programu.
//
#include "Variable.h"
#include <iostream>
//wzorowalem sie przykladami z Pana githuba
//zmiana i pobranie na inta
void Variable::setInt(int pomocnicza)
{
	zmienna = *reinterpret_cast<double*>(&pomocnicza);
}

int Variable::getInt()
{
	return *reinterpret_cast<int*>(&zmienna);
}

//zmiana i pobranie na double

void Variable::setDouble(double pomocnicza)
{
	zmienna = *reinterpret_cast<double*>(&pomocnicza);
}

double Variable::getDouble()
{
	return *reinterpret_cast<double*>(&zmienna);
}


//zmiana i pobranie na unsigned
void Variable::setUnsigned(unsigned pomocnicza)
{
	zmienna = *reinterpret_cast<double*>(&pomocnicza);
}

unsigned Variable::getUnsigned()
{
	return *reinterpret_cast<unsigned*>(&zmienna);
}



//zmiana i pobranie na char
void Variable::setChar(char pomocnicza)
{
	zmienna = *reinterpret_cast<double*>(&pomocnicza);
}

char Variable::getChar()
{
	return *reinterpret_cast<char*>(&zmienna);
}
//zmiana i pobranie na short
void Variable::setShort(short pomocnicza)
{
	zmienna = *reinterpret_cast<double*>(&pomocnicza);
}

short Variable::getShort()
{
	return *reinterpret_cast<short*>(&zmienna);
}