#pragma once
#define _CRT_SECURE_NO_WARNINGS
//Класс, хранящий фамилию, имя и отчество человека.Написать метод вывода на
//экран полной информации и сокращенной – в формате «Фамилия И.О.»
class CPoint
{
protected:
	char familiya[50];
	char imya[50];
	char othestvo[50];
public:
	CPoint();
	CPoint(char const familiya[], char const imya[], char const othestvo[]);
	~CPoint();
	void print();
	
	char* get_Familiya();
	void set_Familiya(char const familiya[]);

	void set_imya(char const imya[]);
	char* get_imya();

	void set_othestvo(char const othestvo[]);
	char* get_othestvo();

	bool operator == (CPoint& pt);
	
	friend void print_sokr(CPoint& pt);
};