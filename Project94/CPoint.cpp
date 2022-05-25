//Класс, хранящий фамилию, имя и отчество человека.Написать метод вывода на
//экран полной информации и сокращенной – в формате «Фамилия И.О.»
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "CPoint.h"
using namespace std;
void print_point(CPoint& pt);
int main()
{
    setlocale(LC_ALL, "RUS");
    cout << "pt" << endl;
    CPoint pt;
    pt.print();
    print_sokr(pt);
    pt.set_imya("Oleg");
    pt.print();

    cout << "pt2" << endl;
    CPoint* pt2 = new CPoint("Gus", "Gordon", "Maestro");
    pt2->print();
    print_sokr(*pt2);
    pt2->set_imya("Oleg");
    pt2->print();

    cout << "pt3" << endl;
    CPoint pt3;
    pt3.set_Familiya("Sedelnicov");
    pt3.set_imya("Yan");
    pt3.set_othestvo("Konstantinovich");
    cout << pt3.get_Familiya()<<endl;
    cout << pt3.get_imya() << endl;
    cout << pt3.get_othestvo() << endl;
    pt3.print();
    print_sokr(pt3);
    pt3.print();
    cout << (pt == pt3) << endl;
    cout << (*pt2 == pt3) << endl;
    cout << (pt3 == pt3) << endl;
    delete pt2;
}


void print_sokr(CPoint& pt) {
    cout << pt.familiya << ", " << pt.imya[0] << ". " << pt.othestvo[0] << ". " << endl;
}
