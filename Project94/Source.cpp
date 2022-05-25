//Класс, хранящий фамилию, имя и отчество человека.Написать метод вывода на
//экран полной информации и сокращенной – в формате «Фамилия И.О.»
#include "CPoint.h"
#include <iostream>
#include <conio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
using namespace std;
CPoint::CPoint() :
	familiya("familiya"), imya("imya"), othestvo("othestvo")
{
	cout << "Конструктор по-умолчанию" << endl;
}
CPoint::CPoint(const char familiya[], const char imya[], const char othestvo[])
{
	strncpy(CPoint::familiya, familiya, 50);
	strncpy(CPoint::imya, imya, 50);
	strncpy(CPoint::othestvo, othestvo, 50);
	cout << "Конструктор с параметрами: " << familiya << ", " << imya << ", " << othestvo << endl;
}
CPoint::~CPoint()
{
	cout << "Вызов деструктора" << endl;
}
void CPoint::print()
{
	cout << "familiya = " << familiya << ", imya = " << imya << ", othestvo = " << othestvo << endl;
}


void CPoint::set_Familiya(char const familiya[])
{
	strncpy(CPoint::familiya, familiya, 50);
}

char* CPoint::get_Familiya()
{
	return familiya;
}
void CPoint::set_imya(char const imya[])
{
	strncpy(CPoint::imya, imya, 50);
}
char* CPoint::get_imya()
{
	return imya;
}
void CPoint::set_othestvo(char const othestvo[])
{
	strncpy(CPoint::othestvo, othestvo, 50);
}
char* CPoint::get_othestvo()
{
	return othestvo;
}

bool CPoint::operator == (CPoint& pt)
{
	int i = strncmp(pt.familiya, familiya, 10);
	int ii = strncmp(pt.familiya, familiya, 10);
	int iii = strncmp(pt.familiya, familiya, 10);
	if (i == 0 && ii == 0 && iii == 0)
		return 1;
	return 0;
}
