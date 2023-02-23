#ifndef VOZILO_HPP_INCLUDED
#define VOZILO_HPP_INCLUDED
#include "dinstring.hpp"
using namespace std;

enum VrstaVozila{LAKO, MOTORNO, TERETNO, PRIKLJUCNO};

class Vozilo {
protected:
    DinString regbr;
    VrstaVozila vrsta;
    int godiste;
public:
    Vozilo(const DinString& rb="", VrstaVozila vv=LAKO, int god=0) : regbr(rb), vrsta(vv), godiste(god) {}
    DinString getReg() const {return regbr;}
    int getGod() const {return godiste;}
    virtual bool voznoStanje() = 0;
};

#endif // VOZILO_HPP_INCLUDED
