#ifndef AUTOBUS_HPP_INCLUDED
#define AUTOBUS_HPP_INCLUDED
#include "vozilo.hpp"
using namespace std;

class Autobus : public Vozilo {
private:
    int brojMesta;
    static int brojAutobusa;
public:
    Autobus(const DinString& rb="", VrstaVozila vv=LAKO, int god=0, int bm=0) : Vozilo(rb, vv, god), brojMesta(bm) {brojAutobusa++;}
    ~Autobus() {brojAutobusa--;}
    bool voznoStanje() {
        if(getGod()>2000) return true;
        return false;
    }
    friend ostream& operator<<(ostream& out, const Autobus& a)
    {
        out<<"Autobus: "<<endl;
        out<<"Registracija: "<<a.getReg()<<endl;
        out<<"Godiste: "<<a.getGod()<<endl;
        out<<"Vrsta vozila: ";
        switch(a.vrsta)
        {
        case LAKO:
            out<<"LAKO"<<endl;
            break;
        case MOTORNO:
            out<<"MOTORNO"<<endl;
            break;
        case TERETNO:
            out<<"TERETNO"<<endl;
            break;
        case PRIKLJUCNO:
            out<<"PRIKLJUCNO"<<endl;
            break;
        }
        out<<"Broj mesta: "<<a.brojMesta<<endl;
        out<<endl;
        return out;
    }
    int getBR() const {return brojAutobusa;}
};
int Autobus::brojAutobusa = 0;
#endif // AUTOBUS_HPP_INCLUDED
