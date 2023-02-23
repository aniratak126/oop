#include <iostream>
#include "vozilo.hpp"
#include "autobus.hpp"
using namespace std;

int main()
{
    Autobus a1("NS102-OP", MOTORNO, 2010, 56);
    Autobus a2("UE099-HA", LAKO, 2010, 53);
    Autobus a3("KG189-PP", MOTORNO, 2010, 25);
    Autobus a4("BG205-LL", PRIKLJUCNO, 1999, 49);
    Autobus a5("PO104-UO", TERETNO, 2004, 54);
    Autobus a6("NI106-PI", MOTORNO, 2000, 56);
    cout<<a1;
    cout<<a2;
    cout<<a3;
    cout<<a4;
    cout<<"Broj autobusa je "<<a6.getBR()<<"."<<endl;
    if(a3.voznoStanje()) cout<<"Autobus "<<a3.getReg()<<"je u voznom stanju. ";
    return 0;
}
