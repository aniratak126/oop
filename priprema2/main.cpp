#include <iostream>
#include "autobus.hpp"
#include "parking.hpp"
using namespace std;

int main()
{
    Autobus a;
    Autobus a1("\"Lasta\"", MOTORNO, 2005, 51);
    Autobus a2("\"Petrovic Turs\"", TERETNO, 1999, 53);
    Autobus a3("\"Arriva\"", MOTORNO, 2010, 51);
    Autobus a4("\"Severtrans\"", PRIKLJUCNO, 2010, 25);
    Autobus a5("\"Arriva\"", MOTORNO, 2010, 56);
    Autobus a6("\"Arriva\"", MOTORNO, 2010, 56);
    cout<<a1<<endl;
    cout<<a2<<endl;
    cout<<a3<<endl;

    Parking p("CENTAR");
    p.uparkiraj(a1);
    p.uparkiraj(a2);
    p.uparkiraj(a3);
    p.uparkiraj(a4);
    p.uparkiraj(a5);
    p.uparkiraj(a6);
    p.ispisiNove();

    return 0;
}
