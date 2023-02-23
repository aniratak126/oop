#ifndef VIDEO_HPP_INCLUDED
#define VIDEO_HPP_INCLUDED
#include "dinstring.hpp"
using namespace std;


class Video {
private:
    DinString naziv;
    int trajanje;
    DinString rezolucijaVidea;
public:
    Video() {naziv=""; trajanje=0; rezolucijaVidea="";}
    Video(const DinString& n, int t,const DinString& rv) : naziv(n), trajanje(t), rezolucijaVidea(rv) {}
    DinString getNaziv() const {return naziv;}
    int getTrajanje() const {return trajanje;}
    DinString getRezolucija() const {return rezolucijaVidea;}

    void setNaziv(const DinString& n) {naziv=n;}
    void setTrajanje(int t) {trajanje=t;}
    void setRezolucija(const DinString& rv) {rezolucijaVidea=rv;}

};
#endif // VIDEO_HPP_INCLUDED
