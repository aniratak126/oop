#ifndef AUTOBUS_HPP_INCLUDED
#define AUTOBUS_HPP_INCLUDED
#include "vozilo.hpp"
#include "dinstring.hpp"

using namespace std;

class Autobus : public Vozilo {
private:
    int brojMesta;
    static int brojAutobusa;
public:
    Autobus() : Vozilo(" ", LAKO, 0), brojMesta(0) {brojAutobusa++;}
    Autobus(const DinString& rb, VrstaVozila vv,int g, int bm) : Vozilo(rb,vv,g), brojMesta(bm) {brojAutobusa++;}
    ~Autobus() {brojAutobusa--;}
    bool voznoStanje() const {
        return (godiste>2000 ? 1 : 0);
    }
    friend ostream& operator<<(ostream& out, const Autobus& a) {
        out<<"AUTOBUS:"<<endl;
        out<<"REGISTRACIONI BROJ: "<<a.regbr<<endl<<"GODISTE: "<<a.godiste<<endl;
        out<<"VRSTA VOZILA: ";
        switch(a.vrsta) {
        case LAKO:
            out<<"Lako"<<endl;
            break;
        case MOTORNO:
            out<<"Motorno"<<endl;
            break;
        case TERETNO:
            out<<"Teretno"<<endl;
            break;
        case PRIKLJUCNO:
            out<<"Prikljucno"<<endl;
            break;
        }
        out<<"BROJ MESTA: "<<a.brojMesta<<endl;
        out<<"BROJ AUTOBUSA: "<<brojAutobusa<<endl;
        return out;
    }
};
int Autobus::brojAutobusa = 0;
#endif // AUTOBUS_HPP_INCLUDED
