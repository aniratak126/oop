#ifndef VOZILO_HPP_INCLUDED
#define VOZILO_HPP_INCLUDED
#include "dinstring.hpp"

using namespace std;

enum VrstaVozila {LAKO, MOTORNO, TERETNO, PRIKLJUCNO};

class Vozilo {
protected:
    DinString regbr;
    VrstaVozila vrsta;
    int godiste;
public:
    Vozilo() {regbr=" "; vrsta=LAKO; godiste=0;}
    Vozilo(const DinString& rb="", VrstaVozila vv=LAKO,int g=0) : regbr(rb), vrsta(vv), godiste(g) {}
    DinString getRegbr() const {return regbr;}
    int getGodiste() const {return godiste;}
    virtual bool voznoStanje() const = 0;
};

#endif // VOZILO_HPP_INCLUDED
