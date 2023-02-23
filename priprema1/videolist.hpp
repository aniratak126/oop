#ifndef VIDEOLIST_HPP_INCLUDED
#define VIDEOLIST_HPP_INCLUDED
#include "dinstring.hpp"
#include "video.hpp"
#include "list.hpp"
using namespace std;

class VideoList {
protected:
    List<Video> listaVidea;
public:
    VideoList() {}
    bool dodajVideo(Video &v)
    {
        Video vv;
        for(int i=1; i<=listaVidea.size();i++)
        {
            listaVidea.read(i, vv);
            if(vv.getNaziv()==v.getNaziv())
            {
                cout<<"Video vec postoji u listi."<<endl;
                return false;
            }
        }
        return listaVidea.add(listaVidea.size()+1,v);
    }
    int getvel() const {return listaVidea.size();}

    bool obrisiVideo(const DinString& naziv)
    {
        Video v;
        for(int i=1; i<=listaVidea.size();i++)
        {
            listaVidea.read(i, v);
            if(v.getNaziv() == naziv)
            {
                return listaVidea.remove(i);
            }
        }
        return false;
    }

};
#endif // VIDEOLIST_HPP_INCLUDED
