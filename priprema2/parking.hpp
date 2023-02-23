#ifndef PARKING_HPP_INCLUDED
#define PARKING_HPP_INCLUDED
#include "dinstring.hpp"
#include "list.hpp"
#include "autobus.hpp"

using namespace std;

class Parking {
private:
    DinString naziv;
    List<Autobus*> parkirani;
public:
    Parking(const DinString& n) : naziv(n) {}
    bool uparkiraj( Autobus &a) {
        return (a.voznoStanje() ? parkirani.add(parkirani.size()+1, &a) : 0);
    }
    int najmladji() {
        Autobus* a;
        Autobus* a1;
        for(int i=1; i<=parkirani.size(); i++)
        {
            parkirani.read(i, a);
            if(a->getGodiste() > a1->getGodiste())
            {
                a1 = a;
            }
        }
        return a1->getGodiste();
    }
    void ispisiNove() {
        cout<<"PARKING: "<<naziv<<endl;
        Autobus* a;
        for(int i=1;i<=parkirani.size(); i++)
        {
            parkirani.read(i, a);
            if(a->getGodiste() == najmladji())
            {
                cout<<*a<<endl;
            }
        }
    }
};

#endif // PARKING_HPP_INCLUDED
